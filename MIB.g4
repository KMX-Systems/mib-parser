// ANTLR4 grammar for MIB
// Copyright (c) 2024 KMX Systems. All rights reserved.

grammar MIB;

// Lexer rules
COMMA          : ',';
DEFINITION     : '::=';
DOT            : '.';
DOUBLE_DOT     : '..';
LEFT_BRACE     : '{';
LEFT_BRACKET   : '[';
LEFT_PAREN     : '(';
LESS_THAN      : '<';
MINUS          : '-';
RIGHT_BRACE    : '}';
RIGHT_BRACKET  : ']';
RIGHT_PAREN    : ')';
SEMI_COLON     : ';';
TRIPLE_DOT     : '...';
VERTICAL_BAR   : '|';

// Reserved words
ABSENT               : 'ABSENT';
ACCESSIBLE_FOR_NOTIFY: 'accessible-for-notify';
ACCESS               : 'ACCESS';
AGENT_CAPABILITIES   : 'AGENT-CAPABILITIES';
ANY                  : 'ANY';
APPLICATION          : 'APPLICATION';
AUGMENTS             : 'AUGMENTS';
BEGIN                : 'BEGIN';
BIT                  : 'BIT';
BITS                 : 'BITS';
BOOLEAN              : 'BOOLEAN';
BY                   : 'BY';
CHOICE               : 'CHOICE';
COMPONENT            : 'COMPONENT';
COMPONENTS           : 'COMPONENTS';
CONTACT_INFO         : 'CONTACT-INFO';
DEFAULT              : 'DEFAULT';
DEFINED              : 'DEFINED';
DEFINITIONS          : 'DEFINITIONS';
DEFVAL               : 'DEFVAL';
DESCRIPTION          : 'DESCRIPTION';
DISPLAY_HINT         : 'DISPLAY-HINT';
END                  : 'END';
ENTERPRISE           : 'ENTERPRISE';
ENUMERATED           : 'ENUMERATED';
EXPLICIT             : 'EXPLICIT';
EXPORTS              : 'EXPORTS';
FALSE                : 'FALSE';
FROM                 : 'FROM';
GROUP                : 'GROUP';
IDENTIFIER           : 'IDENTIFIER';
IMPLICIT             : 'IMPLICIT';
IMPORTS              : 'IMPORTS';
INCLUDES             : 'INCLUDES';
INDEX                : 'INDEX';
INTEGER              : 'INTEGER';
LAST_UPDATED         : 'LAST-UPDATED';
MANDATORY_GROUPS     : 'MANDATORY-GROUPS';
MACRO                : 'MACRO';
MAX                  : 'MAX';
MAX_ACCESS           : 'MAX-ACCESS';
MIN                  : 'MIN';
MINUS_INFINITY       : 'MINUS-INFINITY';
MODULE               : 'MODULE';
MODULES              : 'MODULES';
MODULE_COMPLIANCE    : 'MODULE-COMPLIANCE';
MODULE_IDENTITY      : 'MODULE-IDENTITY';
NOT_ACCESSIBLE       : 'not-accessible';
NOTIFICATION_GROUP   : 'NOTIFICATION-GROUP';
NOTIFICATION_TYPE    : 'NOTIFICATION-TYPE';
NOTIFICATIONS        : 'NOTIFICATIONS';
NULL                 : 'NULL';
OBJECT               : 'OBJECT';
OBJECT_GROUP         : 'OBJECT-GROUP';
OBJECT_IDENTITY      : 'OBJECT-IDENTITY';
OBJECT_TYPE          : 'OBJECT-TYPE';
OBJECTS              : 'OBJECTS';
OCTET                : 'OCTET';
OF                   : 'OF';
OPTIONAL             : 'OPTIONAL';
ORGANIZATION         : 'ORGANIZATION';
PLUS_INFINITY        : 'PLUS-INFINITY';
PRESENT              : 'PRESENT';
PRIVATE              : 'PRIVATE';
PRODUCT_RELEASE      : 'PRODUCT-RELEASE';
READ_CREATE          : 'read-create';
READ_ONLY            : 'read-only';
READ_WRITE           : 'read-write';
REAL                 : 'REAL';
REFERENCE            : 'REFERENCE';
REVISION             : 'REVISION';
SEQUENCE             : 'SEQUENCE';
SET                  : 'SET';
SIZE                 : 'SIZE';
STATUS               : 'STATUS';
STRING               : 'STRING';
SUPPORTS             : 'SUPPORTS';
SYNTAX               : 'SYNTAX';
TAGS                 : 'TAGS';
TEXTUAL_CONVENTION   : 'TEXTUAL-CONVENTION';
TRAP_TYPE            : 'TRAP-TYPE';
TRUE                 : 'TRUE';
UNITS                : 'UNITS';
UNIVERSAL            : 'UNIVERSAL';
VARIABLES            : 'VARIABLES';
VARIATION            : 'VARIATION';
WITH                 : 'WITH';
WRITE_SYNTAX         : 'WRITE-SYNTAX';

// String and number types
BINARY_STRING      : '\''[0-1]+'\''('B'|'b');
HEXADECIMAL_STRING : '\''[0-9A-Fa-f]+'\''('H'|'h');
QUOTED_STRING      : '"' ('""' | ~["])* '"';
IDENTIFIER_STRING  : [a-zA-Z][a-zA-Z0-9\-_]*;
INTEGER_STRING     : [\-+][0-9]+;
NUMBER_STRING      : [0-9]+;

// Skipping whitespaces and comments
WHITESPACE         : [ \t\r\n]+ -> skip;
COMMENT            : '--' ~[\n\r]* -> skip;

// Parser rules
data : moduleDefinition+ ;
moduleDefinition : moduleIdentifier DEFINITIONS tagDefault? DEFINITION BEGIN moduleBody? END ;
moduleIdentifier : IDENTIFIER_STRING objectIdentifierValue? ;
moduleReference : IDENTIFIER_STRING ;
tagDefault : EXPLICIT TAGS | IMPLICIT TAGS ;
moduleBody : exportList? importList? assignmentList ;
exportList : EXPORTS symbolList? SEMI_COLON ;
importList : IMPORTS symbolsFromModule* SEMI_COLON ;
symbolsFromModule : symbolList FROM moduleIdentifier ;
symbolList : symbol (COMMA symbol)* ;
symbol : IDENTIFIER_STRING | definedMacroName ;
assignmentList : assignment+ ;
assignment : (macroDefinition | typeAssignment | valueAssignment) SEMI_COLON? ;
macroDefinition : macroReference MACRO DEFINITION macroBody ;
macroReference : IDENTIFIER_STRING | definedMacroName ;
macroBody : BEGIN macroBodyElement* END | moduleReference macroReference ;
macroBodyElement : LEFT_PAREN | RIGHT_PAREN | VERTICAL_BAR | DEFINITION | INTEGER | REAL | BOOLEAN | NULL
                 | BIT | OCTET | STRING | OBJECT | IDENTIFIER | IDENTIFIER_STRING | QUOTED_STRING ;
typeAssignment : IDENTIFIER_STRING DEFINITION type ;
type : builtinType | definedType | definedMacroType ;
definedType : moduleReference? IDENTIFIER_STRING valueOrConstraintList? ;
builtinType : nullType | booleanType | realType | integerType | objectIdentifierType | stringType
            | bitStringType | bitsType | sequenceType | sequenceOfType | setType | setOfType
            | choiceType | enumeratedType | selectionType | taggedType | anyType ;
nullType : NULL ;
booleanType : BOOLEAN ;
realType : REAL ;
accessLevel : READ_ONLY | READ_WRITE | READ_CREATE | NOT_ACCESSIBLE | ACCESSIBLE_FOR_NOTIFY ;
integerType : INTEGER valueOrConstraintList? ;
objectIdentifierType : OBJECT IDENTIFIER ;
stringType : OCTET STRING constraintList? ;
bitStringType : BIT STRING valueOrConstraintList? ;
bitsType : BITS valueOrConstraintList? ;
sequenceContent : LEFT_BRACE elementTypeList? RIGHT_BRACE ;
sequenceType : SEQUENCE sequenceContent ;
sequenceOfType : SEQUENCE constraintList? OF type ;
setType : SET LEFT_BRACE elementTypeList? RIGHT_BRACE ;
setOfType : SET sizeConstraint? OF type ;
choiceType : CHOICE LEFT_BRACE elementTypeList RIGHT_BRACE ;
enumeratedType : ENUMERATED namedNumberList ;
selectionType : IDENTIFIER_STRING LESS_THAN type ;
taggedType : tag explicitOrImplicitTag type ;
tag : LEFT_BRACKET class_? NUMBER_STRING RIGHT_BRACKET ;
class_ : UNIVERSAL | APPLICATION | PRIVATE ;
explicitOrImplicitTag : EXPLICIT | IMPLICIT ;
anyType : ANY (DEFINED BY IDENTIFIER_STRING)?;
elementTypeList : elementType (COMMA elementType)* ;
elementType : IDENTIFIER_STRING? type optionalOrDefaultElement? | IDENTIFIER_STRING? COMPONENTS OF type ;
optionalOrDefaultElement : OPTIONAL | DEFAULT IDENTIFIER_STRING? value ;
valueOrConstraintList : namedNumberList | constraintList ;
namedNumberList : LEFT_BRACE namedNumber (COMMA namedNumber)* RIGHT_BRACE ;
namedNumber : IDENTIFIER_STRING LEFT_PAREN number RIGHT_PAREN ;
number : NUMBER_STRING | binaryValue | hexadecimalValue | definedValue ;
constraintList : LEFT_PAREN constraint (VERTICAL_BAR constraint)* RIGHT_PAREN ;
constraint : valueConstraint | sizeConstraint | alphabetConstraint | containedTypeConstraint | innerTypeConstraint ;
valueConstraintList : LEFT_PAREN valueConstraint (VERTICAL_BAR valueConstraint)* RIGHT_PAREN ;
valueConstraint : lowerEndPoint valueRange? ;
valueRange : LESS_THAN? DOUBLE_DOT LESS_THAN? upperEndPoint ;
lowerEndPoint : value | MIN ;
upperEndPoint : value | MAX ;
sizeConstraint : SIZE valueConstraintList ;
alphabetConstraint : FROM valueConstraintList ;
containedTypeConstraint : INCLUDES type ;
innerTypeConstraint : WITH COMPONENT valueOrConstraintList | WITH COMPONENTS componentsList ;
componentsList : LEFT_BRACE ((componentConstraint componentsListTail*) | (TRIPLE_DOT componentsListTail+)) RIGHT_BRACE ;
componentsListTail : COMMA componentConstraint? ;
componentConstraint : IDENTIFIER_STRING componentValuePresence? | componentValuePresence ;
componentValuePresence : valueOrConstraintList componentPresence? | componentPresence ;
componentPresence : PRESENT | ABSENT | OPTIONAL ;
valueAssignment : IDENTIFIER_STRING type DEFINITION value ;
value : builtinValue | definedValue ;
definedValue : INTEGER_STRING | BINARY_STRING | HEXADECIMAL_STRING | (moduleReference? IDENTIFIER_STRING);
builtinValue : nullValue | booleanValue | specialRealValue | numberValue | binaryValue | hexadecimalValue | stringValue
                | bitOrObjectIdentifierValue ;
nullValue : NULL ;
booleanValue : TRUE | FALSE ;
specialRealValue : PLUS_INFINITY | MINUS_INFINITY ;
numberValue : MINUS? NUMBER_STRING ;
binaryValue : BINARY_STRING ;
hexadecimalValue : HEXADECIMAL_STRING ;
stringValue : QUOTED_STRING ;
bitOrObjectIdentifierValue : nameValueList ;
bitValue : nameValueList ;
objectIdentifierValue : nameValueList ;
nameValueList : LEFT_BRACE nameValueComponent* RIGHT_BRACE ;
nameValueComponent : COMMA? nameOrNumber ;
nameOrNumber : NUMBER_STRING | IDENTIFIER_STRING | nameAndNumber ;
nameAndNumber : IDENTIFIER_STRING LEFT_PAREN (NUMBER_STRING | definedValue) RIGHT_PAREN ;

// Macro Syntax
definedMacroType : snmpModuleIdentityMacroType | snmpObjectIdentityMacroType | snmpObjectTypeMacroType | snmpNotificationTypeMacroType
                 | snmpTrapTypeMacroType | snmpTextualConventionMacroType | snmpObjectGroupMacroType | snmpNotificationGroupMacroType
                 | snmpModuleComplianceMacroType | snmpAgentCapabilitiesMacroType ;
definedMacroName : MODULE_IDENTITY | OBJECT_IDENTITY | OBJECT_TYPE | NOTIFICATION_TYPE | TRAP_TYPE | TEXTUAL_CONVENTION | OBJECT_GROUP | NOTIFICATION_GROUP
                 | MODULE_COMPLIANCE | AGENT_CAPABILITIES ;
snmpStatusDescrReferPart : snmpStatusPart snmpDescrPart? snmpReferPart? ;
snmpModuleIdentityMacroType : MODULE_IDENTITY snmpUpdatePart snmpOrganizationPart snmpContactPart snmpDescrPart snmpRevisionPart* ;
snmpObjectIdentityMacroType : OBJECT_IDENTITY snmpStatusDescrReferPart ;
snmpObjectTypeMacroType : OBJECT_TYPE snmpSyntaxPart snmpUnitsPart? snmpAccessPart? snmpMaxAccessPart snmpStatusDescrReferPart snmpIndexPart? snmpAugmentsPart? snmpDefValPart? ;
snmpNotificationTypeMacroType : NOTIFICATION_TYPE snmpObjectsPart? snmpStatusDescrReferPart ;
snmpTrapTypeMacroType : TRAP_TYPE snmpEnterprisePart snmpVarPart? snmpDescrPart snmpReferPart? ;
snmpTextualConventionMacroType : TEXTUAL_CONVENTION snmpDisplayPart? snmpStatusDescrReferPart snmpSyntaxPart ;
snmpObjectGroupMacroType : OBJECT_GROUP snmpObjectsPart snmpStatusDescrReferPart ;
snmpNotificationGroupMacroType : NOTIFICATION_GROUP snmpNotificationPart snmpSyntaxPart? snmpMaxAccessPart? snmpStatusPart snmpDescrPart ;
snmpModuleComplianceMacroType : MODULE_COMPLIANCE snmpStatusDescrReferPart snmpGroupPart* ((MODULE snmpMandatoryGroupsPart) | snmpModulesPart) ;
snmpAgentCapabilitiesMacroType : AGENT_CAPABILITIES snmpProductPart snmpStatusDescrReferPart snmpSupportPart* ;
snmpSupportPart : SUPPORTS moduleIdentifier snmpInclusionPart snmpVariationPart? ;
snmpInclusionPart : INCLUDES symbolList ;
snmpVariationPart : VARIATION IDENTIFIER_STRING (snmpSyntaxPart | snmpWritePart? snmpAccessPart snmpDefValPart?) ;
snmpGroupPart : GROUP IDENTIFIER_STRING snmpDescrPart snmpReferPart? ;

// Helper Syntax for Macros
snmpAccessPart : ACCESS IDENTIFIER_STRING ;
snmpAugmentsPart : AUGMENTS LEFT_BRACE symbolList RIGHT_BRACE ;
snmpContactPart : CONTACT_INFO QUOTED_STRING ;
snmpDefValPart : DEFVAL LEFT_BRACE value RIGHT_BRACE ;
snmpDescrPart : DESCRIPTION QUOTED_STRING ;
snmpDisplayPart : DISPLAY_HINT QUOTED_STRING ;
snmpEnterprisePart : ENTERPRISE elementTypeList ;
snmpIndexPart : INDEX sequenceContent | elementTypeList ;
snmpMaxAccessPart : MAX_ACCESS accessLevel ;
snmpMandatoryGroupsPart : MANDATORY_GROUPS LEFT_BRACE symbolList RIGHT_BRACE ;
snmpMibGroupsPart : LEFT_BRACE symbolList RIGHT_BRACE ;
snmpMibCompliancePart : moduleReference snmpMibGroupsPart ;
snmpModulesPart : MODULES LEFT_BRACE snmpMibCompliancePart (COMMA snmpMibCompliancePart)* RIGHT_BRACE ;
snmpNotificationPart: NOTIFICATIONS LEFT_BRACE symbolList RIGHT_BRACE ;
snmpObjectsPart : OBJECTS LEFT_BRACE symbolList RIGHT_BRACE ;
snmpOrganizationPart : ORGANIZATION QUOTED_STRING ;
snmpProductPart : PRODUCT_RELEASE QUOTED_STRING ;
snmpReferPart : REFERENCE QUOTED_STRING ;
snmpRevisionPart : REVISION QUOTED_STRING DESCRIPTION QUOTED_STRING ;
snmpStatusPart : STATUS IDENTIFIER_STRING ;
snmpSyntaxPart : SYNTAX type ;
snmpUnitsPart : UNITS QUOTED_STRING ;
snmpUpdatePart : LAST_UPDATED QUOTED_STRING ;
snmpVarPart : VARIABLES elementTypeList ;
snmpWritePart : WRITE_SYNTAX type ;
