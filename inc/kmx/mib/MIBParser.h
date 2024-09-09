
// Generated from MIB.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"


namespace kmx::mib {


class  MIBParser : public antlr4::Parser {
public:
  enum {
    COMMA = 1, DEFINITION = 2, DOT = 3, DOUBLE_DOT = 4, LEFT_BRACE = 5, 
    LEFT_BRACKET = 6, LEFT_PAREN = 7, LESS_THAN = 8, MINUS = 9, RIGHT_BRACE = 10, 
    RIGHT_BRACKET = 11, RIGHT_PAREN = 12, SEMI_COLON = 13, TRIPLE_DOT = 14, 
    VERTICAL_BAR = 15, ABSENT = 16, ACCESSIBLE_FOR_NOTIFY = 17, ACCESS = 18, 
    AGENT_CAPABILITIES = 19, ANY = 20, APPLICATION = 21, BEGIN = 22, BIT = 23, 
    BITS = 24, BOOLEAN = 25, BY = 26, CHOICE = 27, COMPONENT = 28, COMPONENTS = 29, 
    CONTACT_INFO = 30, DEFAULT = 31, DEFINED = 32, DEFINITIONS = 33, DEFVAL = 34, 
    DESCRIPTION = 35, DISPLAY_HINT = 36, END = 37, ENTERPRISE = 38, ENUMERATED = 39, 
    EXPLICIT = 40, EXPORTS = 41, FALSE = 42, FROM = 43, GROUP = 44, IDENTIFIER = 45, 
    IMPLICIT = 46, IMPORTS = 47, INCLUDES = 48, INDEX = 49, INTEGER = 50, 
    LAST_UPDATED = 51, MANDATORY_GROUPS = 52, MACRO = 53, MAX = 54, MAX_ACCESS = 55, 
    MIN = 56, MINUS_INFINITY = 57, MODULE = 58, MODULES = 59, MODULE_COMPLIANCE = 60, 
    MODULE_IDENTITY = 61, NOT_ACCESSIBLE = 62, NOTIFICATION_GROUP = 63, 
    NOTIFICATION_TYPE = 64, NOTIFICATIONS = 65, NULL_ = 66, OBJECT = 67, 
    OBJECT_GROUP = 68, OBJECT_IDENTITY = 69, OBJECT_TYPE = 70, OBJECTS = 71, 
    OCTET = 72, OF = 73, OPTIONAL = 74, ORGANIZATION = 75, PLUS_INFINITY = 76, 
    PRESENT = 77, PRIVATE = 78, PRODUCT_RELEASE = 79, READ_CREATE = 80, 
    READ_ONLY = 81, READ_WRITE = 82, REAL = 83, REFERENCE = 84, REVISION = 85, 
    SEQUENCE = 86, SET = 87, SIZE = 88, STATUS = 89, STRING = 90, SUPPORTS = 91, 
    SYNTAX = 92, TAGS = 93, TEXTUAL_CONVENTION = 94, TRAP_TYPE = 95, TRUE = 96, 
    UNITS = 97, UNIVERSAL = 98, VARIABLES = 99, VARIATION = 100, WITH = 101, 
    WRITE_SYNTAX = 102, BINARY_STRING = 103, HEXADECIMAL_STRING = 104, QUOTED_STRING = 105, 
    IDENTIFIER_STRING = 106, INTEGER_STRING = 107, NUMBER_STRING = 108, 
    WHITESPACE = 109, COMMENT = 110
  };

  enum {
    RuleData = 0, RuleModuleDefinition = 1, RuleModuleIdentifier = 2, RuleModuleReference = 3, 
    RuleTagDefault = 4, RuleModuleBody = 5, RuleExportList = 6, RuleImportList = 7, 
    RuleSymbolsFromModule = 8, RuleSymbolList = 9, RuleSymbolListBraced = 10, 
    RuleSymbol = 11, RuleAssignmentList = 12, RuleAssignment = 13, RuleMacroDefinition = 14, 
    RuleMacroReference = 15, RuleMacroBody = 16, RuleMacroBodyElement = 17, 
    RuleTypeAssignment = 18, RuleType = 19, RuleDefinedType = 20, RuleBuiltinType = 21, 
    RuleNullType = 22, RuleBooleanType = 23, RuleRealType = 24, RuleAccessLevel = 25, 
    RuleIntegerType = 26, RuleObjectIdentifierType = 27, RuleStringType = 28, 
    RuleBitStringType = 29, RuleBitsType = 30, RuleSequenceContent = 31, 
    RuleSequenceType = 32, RuleSequenceOfType = 33, RuleSetType = 34, RuleSetOfType = 35, 
    RuleChoiceType = 36, RuleEnumeratedType = 37, RuleSelectionType = 38, 
    RuleTaggedType = 39, RuleTag = 40, RuleClass_ = 41, RuleExplicitOrImplicitTag = 42, 
    RuleAnyType = 43, RuleElementTypeList = 44, RuleElementType = 45, RuleOptionalOrDefaultElement = 46, 
    RuleValueOrConstraintList = 47, RuleNamedNumberList = 48, RuleNamedNumber = 49, 
    RuleNumber = 50, RuleConstraintList = 51, RuleConstraint = 52, RuleValueConstraintList = 53, 
    RuleValueConstraint = 54, RuleValueRange = 55, RuleLowerEndPoint = 56, 
    RuleUpperEndPoint = 57, RuleSizeConstraint = 58, RuleAlphabetConstraint = 59, 
    RuleContainedTypeConstraint = 60, RuleInnerTypeConstraint = 61, RuleComponentsList = 62, 
    RuleComponentsListTail = 63, RuleComponentConstraint = 64, RuleComponentValuePresence = 65, 
    RuleComponentPresence = 66, RuleValueAssignment = 67, RuleValue = 68, 
    RuleDefinedValue = 69, RuleBuiltinValue = 70, RuleNullValue = 71, RuleBooleanValue = 72, 
    RuleSpecialRealValue = 73, RuleNumberValue = 74, RuleBinaryValue = 75, 
    RuleHexadecimalValue = 76, RuleStringValue = 77, RuleBitOrObjectIdentifierValue = 78, 
    RuleBitValue = 79, RuleObjectIdentifierValue = 80, RuleNameValueList = 81, 
    RuleNameValueComponent = 82, RuleNameOrNumber = 83, RuleNameAndNumber = 84, 
    RuleDefinedMacroType = 85, RuleDefinedMacroName = 86, RuleSnmpStatusDescrReferPart = 87, 
    RuleSnmpObjectStatusDescrReferPart = 88, RuleSnmpModuleIdentityMacroType = 89, 
    RuleSnmpObjectIdentityMacroType = 90, RuleSnmpObjectTypeMacroType = 91, 
    RuleSnmpNotificationTypeMacroType = 92, RuleSnmpTrapTypeMacroType = 93, 
    RuleSnmpTextualConventionMacroType = 94, RuleSnmpObjectGroupMacroType = 95, 
    RuleSnmpNotificationGroupMacroType = 96, RuleSnmpModuleComplianceMacroType = 97, 
    RuleSnmpAgentCapabilitiesMacroType = 98, RuleSnmpSupportPart = 99, RuleSnmpInclusionPart = 100, 
    RuleSnmpVariationPart = 101, RuleSnmpGroupPart = 102, RuleSnmpAccessPart = 103, 
    RuleSnmpContactPart = 104, RuleSnmpDefValPart = 105, RuleSnmpDescrPart = 106, 
    RuleSnmpDisplayPart = 107, RuleSnmpEnterprisePart = 108, RuleSnmpIndexPart = 109, 
    RuleSnmpMaxAccessPart = 110, RuleSnmpMandatoryGroupsPart = 111, RuleSnmpMibGroupsPart = 112, 
    RuleSnmpMibCompliancePart = 113, RuleSnmpModulesPart = 114, RuleSnmpNotificationPart = 115, 
    RuleSnmpObjectsPart = 116, RuleSnmpOrganizationPart = 117, RuleSnmpProductPart = 118, 
    RuleSnmpReferPart = 119, RuleSnmpRevisionPart = 120, RuleSnmpStatusPart = 121, 
    RuleSnmpSyntaxPart = 122, RuleSnmpUnitsPart = 123, RuleSnmpUpdatePart = 124, 
    RuleSnmpVarPart = 125, RuleSnmpWritePart = 126
  };

  explicit MIBParser(antlr4::TokenStream *input);

  MIBParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~MIBParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class DataContext;
  class ModuleDefinitionContext;
  class ModuleIdentifierContext;
  class ModuleReferenceContext;
  class TagDefaultContext;
  class ModuleBodyContext;
  class ExportListContext;
  class ImportListContext;
  class SymbolsFromModuleContext;
  class SymbolListContext;
  class SymbolListBracedContext;
  class SymbolContext;
  class AssignmentListContext;
  class AssignmentContext;
  class MacroDefinitionContext;
  class MacroReferenceContext;
  class MacroBodyContext;
  class MacroBodyElementContext;
  class TypeAssignmentContext;
  class TypeContext;
  class DefinedTypeContext;
  class BuiltinTypeContext;
  class NullTypeContext;
  class BooleanTypeContext;
  class RealTypeContext;
  class AccessLevelContext;
  class IntegerTypeContext;
  class ObjectIdentifierTypeContext;
  class StringTypeContext;
  class BitStringTypeContext;
  class BitsTypeContext;
  class SequenceContentContext;
  class SequenceTypeContext;
  class SequenceOfTypeContext;
  class SetTypeContext;
  class SetOfTypeContext;
  class ChoiceTypeContext;
  class EnumeratedTypeContext;
  class SelectionTypeContext;
  class TaggedTypeContext;
  class TagContext;
  class Class_Context;
  class ExplicitOrImplicitTagContext;
  class AnyTypeContext;
  class ElementTypeListContext;
  class ElementTypeContext;
  class OptionalOrDefaultElementContext;
  class ValueOrConstraintListContext;
  class NamedNumberListContext;
  class NamedNumberContext;
  class NumberContext;
  class ConstraintListContext;
  class ConstraintContext;
  class ValueConstraintListContext;
  class ValueConstraintContext;
  class ValueRangeContext;
  class LowerEndPointContext;
  class UpperEndPointContext;
  class SizeConstraintContext;
  class AlphabetConstraintContext;
  class ContainedTypeConstraintContext;
  class InnerTypeConstraintContext;
  class ComponentsListContext;
  class ComponentsListTailContext;
  class ComponentConstraintContext;
  class ComponentValuePresenceContext;
  class ComponentPresenceContext;
  class ValueAssignmentContext;
  class ValueContext;
  class DefinedValueContext;
  class BuiltinValueContext;
  class NullValueContext;
  class BooleanValueContext;
  class SpecialRealValueContext;
  class NumberValueContext;
  class BinaryValueContext;
  class HexadecimalValueContext;
  class StringValueContext;
  class BitOrObjectIdentifierValueContext;
  class BitValueContext;
  class ObjectIdentifierValueContext;
  class NameValueListContext;
  class NameValueComponentContext;
  class NameOrNumberContext;
  class NameAndNumberContext;
  class DefinedMacroTypeContext;
  class DefinedMacroNameContext;
  class SnmpStatusDescrReferPartContext;
  class SnmpObjectStatusDescrReferPartContext;
  class SnmpModuleIdentityMacroTypeContext;
  class SnmpObjectIdentityMacroTypeContext;
  class SnmpObjectTypeMacroTypeContext;
  class SnmpNotificationTypeMacroTypeContext;
  class SnmpTrapTypeMacroTypeContext;
  class SnmpTextualConventionMacroTypeContext;
  class SnmpObjectGroupMacroTypeContext;
  class SnmpNotificationGroupMacroTypeContext;
  class SnmpModuleComplianceMacroTypeContext;
  class SnmpAgentCapabilitiesMacroTypeContext;
  class SnmpSupportPartContext;
  class SnmpInclusionPartContext;
  class SnmpVariationPartContext;
  class SnmpGroupPartContext;
  class SnmpAccessPartContext;
  class SnmpContactPartContext;
  class SnmpDefValPartContext;
  class SnmpDescrPartContext;
  class SnmpDisplayPartContext;
  class SnmpEnterprisePartContext;
  class SnmpIndexPartContext;
  class SnmpMaxAccessPartContext;
  class SnmpMandatoryGroupsPartContext;
  class SnmpMibGroupsPartContext;
  class SnmpMibCompliancePartContext;
  class SnmpModulesPartContext;
  class SnmpNotificationPartContext;
  class SnmpObjectsPartContext;
  class SnmpOrganizationPartContext;
  class SnmpProductPartContext;
  class SnmpReferPartContext;
  class SnmpRevisionPartContext;
  class SnmpStatusPartContext;
  class SnmpSyntaxPartContext;
  class SnmpUnitsPartContext;
  class SnmpUpdatePartContext;
  class SnmpVarPartContext;
  class SnmpWritePartContext; 

  class  DataContext : public antlr4::ParserRuleContext {
  public:
    DataContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ModuleDefinitionContext *> moduleDefinition();
    ModuleDefinitionContext* moduleDefinition(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DataContext* data();

  class  ModuleDefinitionContext : public antlr4::ParserRuleContext {
  public:
    ModuleDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ModuleIdentifierContext *moduleIdentifier();
    antlr4::tree::TerminalNode *DEFINITIONS();
    antlr4::tree::TerminalNode *DEFINITION();
    antlr4::tree::TerminalNode *BEGIN();
    antlr4::tree::TerminalNode *END();
    TagDefaultContext *tagDefault();
    ModuleBodyContext *moduleBody();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ModuleDefinitionContext* moduleDefinition();

  class  ModuleIdentifierContext : public antlr4::ParserRuleContext {
  public:
    ModuleIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER_STRING();
    ObjectIdentifierValueContext *objectIdentifierValue();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ModuleIdentifierContext* moduleIdentifier();

  class  ModuleReferenceContext : public antlr4::ParserRuleContext {
  public:
    ModuleReferenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER_STRING();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ModuleReferenceContext* moduleReference();

  class  TagDefaultContext : public antlr4::ParserRuleContext {
  public:
    TagDefaultContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXPLICIT();
    antlr4::tree::TerminalNode *TAGS();
    antlr4::tree::TerminalNode *IMPLICIT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TagDefaultContext* tagDefault();

  class  ModuleBodyContext : public antlr4::ParserRuleContext {
  public:
    ModuleBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AssignmentListContext *assignmentList();
    ExportListContext *exportList();
    ImportListContext *importList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ModuleBodyContext* moduleBody();

  class  ExportListContext : public antlr4::ParserRuleContext {
  public:
    ExportListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXPORTS();
    antlr4::tree::TerminalNode *SEMI_COLON();
    SymbolListContext *symbolList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExportListContext* exportList();

  class  ImportListContext : public antlr4::ParserRuleContext {
  public:
    ImportListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IMPORTS();
    antlr4::tree::TerminalNode *SEMI_COLON();
    std::vector<SymbolsFromModuleContext *> symbolsFromModule();
    SymbolsFromModuleContext* symbolsFromModule(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ImportListContext* importList();

  class  SymbolsFromModuleContext : public antlr4::ParserRuleContext {
  public:
    SymbolsFromModuleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SymbolListContext *symbolList();
    antlr4::tree::TerminalNode *FROM();
    ModuleIdentifierContext *moduleIdentifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SymbolsFromModuleContext* symbolsFromModule();

  class  SymbolListContext : public antlr4::ParserRuleContext {
  public:
    SymbolListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<SymbolContext *> symbol();
    SymbolContext* symbol(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SymbolListContext* symbolList();

  class  SymbolListBracedContext : public antlr4::ParserRuleContext {
  public:
    SymbolListBracedContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_BRACE();
    SymbolListContext *symbolList();
    antlr4::tree::TerminalNode *RIGHT_BRACE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SymbolListBracedContext* symbolListBraced();

  class  SymbolContext : public antlr4::ParserRuleContext {
  public:
    SymbolContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER_STRING();
    DefinedMacroNameContext *definedMacroName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SymbolContext* symbol();

  class  AssignmentListContext : public antlr4::ParserRuleContext {
  public:
    AssignmentListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AssignmentContext *> assignment();
    AssignmentContext* assignment(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AssignmentListContext* assignmentList();

  class  AssignmentContext : public antlr4::ParserRuleContext {
  public:
    AssignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    MacroDefinitionContext *macroDefinition();
    TypeAssignmentContext *typeAssignment();
    ValueAssignmentContext *valueAssignment();
    antlr4::tree::TerminalNode *SEMI_COLON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AssignmentContext* assignment();

  class  MacroDefinitionContext : public antlr4::ParserRuleContext {
  public:
    MacroDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    MacroReferenceContext *macroReference();
    antlr4::tree::TerminalNode *MACRO();
    antlr4::tree::TerminalNode *DEFINITION();
    MacroBodyContext *macroBody();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MacroDefinitionContext* macroDefinition();

  class  MacroReferenceContext : public antlr4::ParserRuleContext {
  public:
    MacroReferenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER_STRING();
    DefinedMacroNameContext *definedMacroName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MacroReferenceContext* macroReference();

  class  MacroBodyContext : public antlr4::ParserRuleContext {
  public:
    MacroBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BEGIN();
    antlr4::tree::TerminalNode *END();
    std::vector<MacroBodyElementContext *> macroBodyElement();
    MacroBodyElementContext* macroBodyElement(size_t i);
    ModuleReferenceContext *moduleReference();
    MacroReferenceContext *macroReference();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MacroBodyContext* macroBody();

  class  MacroBodyElementContext : public antlr4::ParserRuleContext {
  public:
    MacroBodyElementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_PAREN();
    antlr4::tree::TerminalNode *RIGHT_PAREN();
    antlr4::tree::TerminalNode *VERTICAL_BAR();
    antlr4::tree::TerminalNode *DEFINITION();
    antlr4::tree::TerminalNode *INTEGER();
    antlr4::tree::TerminalNode *REAL();
    antlr4::tree::TerminalNode *BOOLEAN();
    antlr4::tree::TerminalNode *NULL_();
    antlr4::tree::TerminalNode *BIT();
    antlr4::tree::TerminalNode *OCTET();
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *OBJECT();
    antlr4::tree::TerminalNode *IDENTIFIER();
    antlr4::tree::TerminalNode *IDENTIFIER_STRING();
    antlr4::tree::TerminalNode *QUOTED_STRING();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MacroBodyElementContext* macroBodyElement();

  class  TypeAssignmentContext : public antlr4::ParserRuleContext {
  public:
    TypeAssignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER_STRING();
    antlr4::tree::TerminalNode *DEFINITION();
    TypeContext *type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeAssignmentContext* typeAssignment();

  class  TypeContext : public antlr4::ParserRuleContext {
  public:
    TypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BuiltinTypeContext *builtinType();
    DefinedTypeContext *definedType();
    DefinedMacroTypeContext *definedMacroType();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeContext* type();

  class  DefinedTypeContext : public antlr4::ParserRuleContext {
  public:
    DefinedTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER_STRING();
    ModuleReferenceContext *moduleReference();
    ValueOrConstraintListContext *valueOrConstraintList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DefinedTypeContext* definedType();

  class  BuiltinTypeContext : public antlr4::ParserRuleContext {
  public:
    BuiltinTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NullTypeContext *nullType();
    BooleanTypeContext *booleanType();
    RealTypeContext *realType();
    IntegerTypeContext *integerType();
    ObjectIdentifierTypeContext *objectIdentifierType();
    StringTypeContext *stringType();
    BitStringTypeContext *bitStringType();
    BitsTypeContext *bitsType();
    SequenceTypeContext *sequenceType();
    SequenceOfTypeContext *sequenceOfType();
    SetTypeContext *setType();
    SetOfTypeContext *setOfType();
    ChoiceTypeContext *choiceType();
    EnumeratedTypeContext *enumeratedType();
    SelectionTypeContext *selectionType();
    TaggedTypeContext *taggedType();
    AnyTypeContext *anyType();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BuiltinTypeContext* builtinType();

  class  NullTypeContext : public antlr4::ParserRuleContext {
  public:
    NullTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NULL_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NullTypeContext* nullType();

  class  BooleanTypeContext : public antlr4::ParserRuleContext {
  public:
    BooleanTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BOOLEAN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BooleanTypeContext* booleanType();

  class  RealTypeContext : public antlr4::ParserRuleContext {
  public:
    RealTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RealTypeContext* realType();

  class  AccessLevelContext : public antlr4::ParserRuleContext {
  public:
    AccessLevelContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *READ_ONLY();
    antlr4::tree::TerminalNode *READ_WRITE();
    antlr4::tree::TerminalNode *READ_CREATE();
    antlr4::tree::TerminalNode *NOT_ACCESSIBLE();
    antlr4::tree::TerminalNode *ACCESSIBLE_FOR_NOTIFY();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AccessLevelContext* accessLevel();

  class  IntegerTypeContext : public antlr4::ParserRuleContext {
  public:
    IntegerTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INTEGER();
    ValueOrConstraintListContext *valueOrConstraintList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IntegerTypeContext* integerType();

  class  ObjectIdentifierTypeContext : public antlr4::ParserRuleContext {
  public:
    ObjectIdentifierTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OBJECT();
    antlr4::tree::TerminalNode *IDENTIFIER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ObjectIdentifierTypeContext* objectIdentifierType();

  class  StringTypeContext : public antlr4::ParserRuleContext {
  public:
    StringTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OCTET();
    antlr4::tree::TerminalNode *STRING();
    ConstraintListContext *constraintList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StringTypeContext* stringType();

  class  BitStringTypeContext : public antlr4::ParserRuleContext {
  public:
    BitStringTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BIT();
    antlr4::tree::TerminalNode *STRING();
    ValueOrConstraintListContext *valueOrConstraintList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BitStringTypeContext* bitStringType();

  class  BitsTypeContext : public antlr4::ParserRuleContext {
  public:
    BitsTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BITS();
    ValueOrConstraintListContext *valueOrConstraintList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BitsTypeContext* bitsType();

  class  SequenceContentContext : public antlr4::ParserRuleContext {
  public:
    SequenceContentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_BRACE();
    antlr4::tree::TerminalNode *RIGHT_BRACE();
    ElementTypeListContext *elementTypeList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SequenceContentContext* sequenceContent();

  class  SequenceTypeContext : public antlr4::ParserRuleContext {
  public:
    SequenceTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SEQUENCE();
    SequenceContentContext *sequenceContent();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SequenceTypeContext* sequenceType();

  class  SequenceOfTypeContext : public antlr4::ParserRuleContext {
  public:
    SequenceOfTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SEQUENCE();
    antlr4::tree::TerminalNode *OF();
    TypeContext *type();
    ConstraintListContext *constraintList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SequenceOfTypeContext* sequenceOfType();

  class  SetTypeContext : public antlr4::ParserRuleContext {
  public:
    SetTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *LEFT_BRACE();
    antlr4::tree::TerminalNode *RIGHT_BRACE();
    ElementTypeListContext *elementTypeList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SetTypeContext* setType();

  class  SetOfTypeContext : public antlr4::ParserRuleContext {
  public:
    SetOfTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *OF();
    TypeContext *type();
    SizeConstraintContext *sizeConstraint();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SetOfTypeContext* setOfType();

  class  ChoiceTypeContext : public antlr4::ParserRuleContext {
  public:
    ChoiceTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CHOICE();
    antlr4::tree::TerminalNode *LEFT_BRACE();
    ElementTypeListContext *elementTypeList();
    antlr4::tree::TerminalNode *RIGHT_BRACE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ChoiceTypeContext* choiceType();

  class  EnumeratedTypeContext : public antlr4::ParserRuleContext {
  public:
    EnumeratedTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ENUMERATED();
    NamedNumberListContext *namedNumberList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EnumeratedTypeContext* enumeratedType();

  class  SelectionTypeContext : public antlr4::ParserRuleContext {
  public:
    SelectionTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER_STRING();
    antlr4::tree::TerminalNode *LESS_THAN();
    TypeContext *type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SelectionTypeContext* selectionType();

  class  TaggedTypeContext : public antlr4::ParserRuleContext {
  public:
    TaggedTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TagContext *tag();
    ExplicitOrImplicitTagContext *explicitOrImplicitTag();
    TypeContext *type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TaggedTypeContext* taggedType();

  class  TagContext : public antlr4::ParserRuleContext {
  public:
    TagContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_BRACKET();
    antlr4::tree::TerminalNode *NUMBER_STRING();
    antlr4::tree::TerminalNode *RIGHT_BRACKET();
    Class_Context *class_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TagContext* tag();

  class  Class_Context : public antlr4::ParserRuleContext {
  public:
    Class_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UNIVERSAL();
    antlr4::tree::TerminalNode *APPLICATION();
    antlr4::tree::TerminalNode *PRIVATE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Class_Context* class_();

  class  ExplicitOrImplicitTagContext : public antlr4::ParserRuleContext {
  public:
    ExplicitOrImplicitTagContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXPLICIT();
    antlr4::tree::TerminalNode *IMPLICIT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExplicitOrImplicitTagContext* explicitOrImplicitTag();

  class  AnyTypeContext : public antlr4::ParserRuleContext {
  public:
    AnyTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ANY();
    antlr4::tree::TerminalNode *DEFINED();
    antlr4::tree::TerminalNode *BY();
    antlr4::tree::TerminalNode *IDENTIFIER_STRING();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AnyTypeContext* anyType();

  class  ElementTypeListContext : public antlr4::ParserRuleContext {
  public:
    ElementTypeListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ElementTypeContext *> elementType();
    ElementTypeContext* elementType(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ElementTypeListContext* elementTypeList();

  class  ElementTypeContext : public antlr4::ParserRuleContext {
  public:
    ElementTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeContext *type();
    antlr4::tree::TerminalNode *IDENTIFIER_STRING();
    OptionalOrDefaultElementContext *optionalOrDefaultElement();
    antlr4::tree::TerminalNode *COMPONENTS();
    antlr4::tree::TerminalNode *OF();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ElementTypeContext* elementType();

  class  OptionalOrDefaultElementContext : public antlr4::ParserRuleContext {
  public:
    OptionalOrDefaultElementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPTIONAL();
    antlr4::tree::TerminalNode *DEFAULT();
    ValueContext *value();
    antlr4::tree::TerminalNode *IDENTIFIER_STRING();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  OptionalOrDefaultElementContext* optionalOrDefaultElement();

  class  ValueOrConstraintListContext : public antlr4::ParserRuleContext {
  public:
    ValueOrConstraintListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NamedNumberListContext *namedNumberList();
    ConstraintListContext *constraintList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ValueOrConstraintListContext* valueOrConstraintList();

  class  NamedNumberListContext : public antlr4::ParserRuleContext {
  public:
    NamedNumberListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_BRACE();
    std::vector<NamedNumberContext *> namedNumber();
    NamedNumberContext* namedNumber(size_t i);
    antlr4::tree::TerminalNode *RIGHT_BRACE();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NamedNumberListContext* namedNumberList();

  class  NamedNumberContext : public antlr4::ParserRuleContext {
  public:
    NamedNumberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER_STRING();
    antlr4::tree::TerminalNode *LEFT_PAREN();
    NumberContext *number();
    antlr4::tree::TerminalNode *RIGHT_PAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NamedNumberContext* namedNumber();

  class  NumberContext : public antlr4::ParserRuleContext {
  public:
    NumberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NUMBER_STRING();
    BinaryValueContext *binaryValue();
    HexadecimalValueContext *hexadecimalValue();
    DefinedValueContext *definedValue();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NumberContext* number();

  class  ConstraintListContext : public antlr4::ParserRuleContext {
  public:
    ConstraintListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_PAREN();
    std::vector<ConstraintContext *> constraint();
    ConstraintContext* constraint(size_t i);
    antlr4::tree::TerminalNode *RIGHT_PAREN();
    std::vector<antlr4::tree::TerminalNode *> VERTICAL_BAR();
    antlr4::tree::TerminalNode* VERTICAL_BAR(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ConstraintListContext* constraintList();

  class  ConstraintContext : public antlr4::ParserRuleContext {
  public:
    ConstraintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ValueConstraintContext *valueConstraint();
    SizeConstraintContext *sizeConstraint();
    AlphabetConstraintContext *alphabetConstraint();
    ContainedTypeConstraintContext *containedTypeConstraint();
    InnerTypeConstraintContext *innerTypeConstraint();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ConstraintContext* constraint();

  class  ValueConstraintListContext : public antlr4::ParserRuleContext {
  public:
    ValueConstraintListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_PAREN();
    std::vector<ValueConstraintContext *> valueConstraint();
    ValueConstraintContext* valueConstraint(size_t i);
    antlr4::tree::TerminalNode *RIGHT_PAREN();
    std::vector<antlr4::tree::TerminalNode *> VERTICAL_BAR();
    antlr4::tree::TerminalNode* VERTICAL_BAR(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ValueConstraintListContext* valueConstraintList();

  class  ValueConstraintContext : public antlr4::ParserRuleContext {
  public:
    ValueConstraintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LowerEndPointContext *lowerEndPoint();
    ValueRangeContext *valueRange();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ValueConstraintContext* valueConstraint();

  class  ValueRangeContext : public antlr4::ParserRuleContext {
  public:
    ValueRangeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DOUBLE_DOT();
    UpperEndPointContext *upperEndPoint();
    std::vector<antlr4::tree::TerminalNode *> LESS_THAN();
    antlr4::tree::TerminalNode* LESS_THAN(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ValueRangeContext* valueRange();

  class  LowerEndPointContext : public antlr4::ParserRuleContext {
  public:
    LowerEndPointContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ValueContext *value();
    antlr4::tree::TerminalNode *MIN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LowerEndPointContext* lowerEndPoint();

  class  UpperEndPointContext : public antlr4::ParserRuleContext {
  public:
    UpperEndPointContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ValueContext *value();
    antlr4::tree::TerminalNode *MAX();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  UpperEndPointContext* upperEndPoint();

  class  SizeConstraintContext : public antlr4::ParserRuleContext {
  public:
    SizeConstraintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SIZE();
    ValueConstraintListContext *valueConstraintList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SizeConstraintContext* sizeConstraint();

  class  AlphabetConstraintContext : public antlr4::ParserRuleContext {
  public:
    AlphabetConstraintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FROM();
    ValueConstraintListContext *valueConstraintList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AlphabetConstraintContext* alphabetConstraint();

  class  ContainedTypeConstraintContext : public antlr4::ParserRuleContext {
  public:
    ContainedTypeConstraintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INCLUDES();
    TypeContext *type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ContainedTypeConstraintContext* containedTypeConstraint();

  class  InnerTypeConstraintContext : public antlr4::ParserRuleContext {
  public:
    InnerTypeConstraintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *COMPONENT();
    ValueOrConstraintListContext *valueOrConstraintList();
    antlr4::tree::TerminalNode *COMPONENTS();
    ComponentsListContext *componentsList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  InnerTypeConstraintContext* innerTypeConstraint();

  class  ComponentsListContext : public antlr4::ParserRuleContext {
  public:
    ComponentsListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_BRACE();
    antlr4::tree::TerminalNode *RIGHT_BRACE();
    ComponentConstraintContext *componentConstraint();
    antlr4::tree::TerminalNode *TRIPLE_DOT();
    std::vector<ComponentsListTailContext *> componentsListTail();
    ComponentsListTailContext* componentsListTail(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ComponentsListContext* componentsList();

  class  ComponentsListTailContext : public antlr4::ParserRuleContext {
  public:
    ComponentsListTailContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COMMA();
    ComponentConstraintContext *componentConstraint();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ComponentsListTailContext* componentsListTail();

  class  ComponentConstraintContext : public antlr4::ParserRuleContext {
  public:
    ComponentConstraintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER_STRING();
    ComponentValuePresenceContext *componentValuePresence();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ComponentConstraintContext* componentConstraint();

  class  ComponentValuePresenceContext : public antlr4::ParserRuleContext {
  public:
    ComponentValuePresenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ValueOrConstraintListContext *valueOrConstraintList();
    ComponentPresenceContext *componentPresence();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ComponentValuePresenceContext* componentValuePresence();

  class  ComponentPresenceContext : public antlr4::ParserRuleContext {
  public:
    ComponentPresenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PRESENT();
    antlr4::tree::TerminalNode *ABSENT();
    antlr4::tree::TerminalNode *OPTIONAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ComponentPresenceContext* componentPresence();

  class  ValueAssignmentContext : public antlr4::ParserRuleContext {
  public:
    ValueAssignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER_STRING();
    TypeContext *type();
    antlr4::tree::TerminalNode *DEFINITION();
    ValueContext *value();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ValueAssignmentContext* valueAssignment();

  class  ValueContext : public antlr4::ParserRuleContext {
  public:
    ValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BuiltinValueContext *builtinValue();
    DefinedValueContext *definedValue();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ValueContext* value();

  class  DefinedValueContext : public antlr4::ParserRuleContext {
  public:
    DefinedValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INTEGER_STRING();
    antlr4::tree::TerminalNode *BINARY_STRING();
    antlr4::tree::TerminalNode *HEXADECIMAL_STRING();
    antlr4::tree::TerminalNode *IDENTIFIER_STRING();
    ModuleReferenceContext *moduleReference();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DefinedValueContext* definedValue();

  class  BuiltinValueContext : public antlr4::ParserRuleContext {
  public:
    BuiltinValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NullValueContext *nullValue();
    BooleanValueContext *booleanValue();
    SpecialRealValueContext *specialRealValue();
    NumberValueContext *numberValue();
    BinaryValueContext *binaryValue();
    HexadecimalValueContext *hexadecimalValue();
    StringValueContext *stringValue();
    BitOrObjectIdentifierValueContext *bitOrObjectIdentifierValue();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BuiltinValueContext* builtinValue();

  class  NullValueContext : public antlr4::ParserRuleContext {
  public:
    NullValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NULL_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NullValueContext* nullValue();

  class  BooleanValueContext : public antlr4::ParserRuleContext {
  public:
    BooleanValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TRUE();
    antlr4::tree::TerminalNode *FALSE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BooleanValueContext* booleanValue();

  class  SpecialRealValueContext : public antlr4::ParserRuleContext {
  public:
    SpecialRealValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PLUS_INFINITY();
    antlr4::tree::TerminalNode *MINUS_INFINITY();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SpecialRealValueContext* specialRealValue();

  class  NumberValueContext : public antlr4::ParserRuleContext {
  public:
    NumberValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NUMBER_STRING();
    antlr4::tree::TerminalNode *MINUS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NumberValueContext* numberValue();

  class  BinaryValueContext : public antlr4::ParserRuleContext {
  public:
    BinaryValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BINARY_STRING();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BinaryValueContext* binaryValue();

  class  HexadecimalValueContext : public antlr4::ParserRuleContext {
  public:
    HexadecimalValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HEXADECIMAL_STRING();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  HexadecimalValueContext* hexadecimalValue();

  class  StringValueContext : public antlr4::ParserRuleContext {
  public:
    StringValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *QUOTED_STRING();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StringValueContext* stringValue();

  class  BitOrObjectIdentifierValueContext : public antlr4::ParserRuleContext {
  public:
    BitOrObjectIdentifierValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NameValueListContext *nameValueList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BitOrObjectIdentifierValueContext* bitOrObjectIdentifierValue();

  class  BitValueContext : public antlr4::ParserRuleContext {
  public:
    BitValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NameValueListContext *nameValueList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BitValueContext* bitValue();

  class  ObjectIdentifierValueContext : public antlr4::ParserRuleContext {
  public:
    ObjectIdentifierValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NameValueListContext *nameValueList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ObjectIdentifierValueContext* objectIdentifierValue();

  class  NameValueListContext : public antlr4::ParserRuleContext {
  public:
    NameValueListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_BRACE();
    antlr4::tree::TerminalNode *RIGHT_BRACE();
    std::vector<NameValueComponentContext *> nameValueComponent();
    NameValueComponentContext* nameValueComponent(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NameValueListContext* nameValueList();

  class  NameValueComponentContext : public antlr4::ParserRuleContext {
  public:
    NameValueComponentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NameOrNumberContext *nameOrNumber();
    antlr4::tree::TerminalNode *COMMA();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NameValueComponentContext* nameValueComponent();

  class  NameOrNumberContext : public antlr4::ParserRuleContext {
  public:
    NameOrNumberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NUMBER_STRING();
    antlr4::tree::TerminalNode *IDENTIFIER_STRING();
    NameAndNumberContext *nameAndNumber();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NameOrNumberContext* nameOrNumber();

  class  NameAndNumberContext : public antlr4::ParserRuleContext {
  public:
    NameAndNumberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER_STRING();
    antlr4::tree::TerminalNode *LEFT_PAREN();
    antlr4::tree::TerminalNode *RIGHT_PAREN();
    antlr4::tree::TerminalNode *NUMBER_STRING();
    DefinedValueContext *definedValue();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NameAndNumberContext* nameAndNumber();

  class  DefinedMacroTypeContext : public antlr4::ParserRuleContext {
  public:
    DefinedMacroTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SnmpModuleIdentityMacroTypeContext *snmpModuleIdentityMacroType();
    SnmpObjectIdentityMacroTypeContext *snmpObjectIdentityMacroType();
    SnmpObjectTypeMacroTypeContext *snmpObjectTypeMacroType();
    SnmpNotificationTypeMacroTypeContext *snmpNotificationTypeMacroType();
    SnmpTrapTypeMacroTypeContext *snmpTrapTypeMacroType();
    SnmpTextualConventionMacroTypeContext *snmpTextualConventionMacroType();
    SnmpObjectGroupMacroTypeContext *snmpObjectGroupMacroType();
    SnmpNotificationGroupMacroTypeContext *snmpNotificationGroupMacroType();
    SnmpModuleComplianceMacroTypeContext *snmpModuleComplianceMacroType();
    SnmpAgentCapabilitiesMacroTypeContext *snmpAgentCapabilitiesMacroType();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DefinedMacroTypeContext* definedMacroType();

  class  DefinedMacroNameContext : public antlr4::ParserRuleContext {
  public:
    DefinedMacroNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MODULE_IDENTITY();
    antlr4::tree::TerminalNode *OBJECT_IDENTITY();
    antlr4::tree::TerminalNode *OBJECT_TYPE();
    antlr4::tree::TerminalNode *NOTIFICATION_TYPE();
    antlr4::tree::TerminalNode *TRAP_TYPE();
    antlr4::tree::TerminalNode *TEXTUAL_CONVENTION();
    antlr4::tree::TerminalNode *OBJECT_GROUP();
    antlr4::tree::TerminalNode *NOTIFICATION_GROUP();
    antlr4::tree::TerminalNode *MODULE_COMPLIANCE();
    antlr4::tree::TerminalNode *AGENT_CAPABILITIES();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DefinedMacroNameContext* definedMacroName();

  class  SnmpStatusDescrReferPartContext : public antlr4::ParserRuleContext {
  public:
    SnmpStatusDescrReferPartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SnmpStatusPartContext *snmpStatusPart();
    SnmpDescrPartContext *snmpDescrPart();
    SnmpReferPartContext *snmpReferPart();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SnmpStatusDescrReferPartContext* snmpStatusDescrReferPart();

  class  SnmpObjectStatusDescrReferPartContext : public antlr4::ParserRuleContext {
  public:
    SnmpObjectStatusDescrReferPartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SnmpObjectsPartContext *snmpObjectsPart();
    SnmpStatusDescrReferPartContext *snmpStatusDescrReferPart();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SnmpObjectStatusDescrReferPartContext* snmpObjectStatusDescrReferPart();

  class  SnmpModuleIdentityMacroTypeContext : public antlr4::ParserRuleContext {
  public:
    SnmpModuleIdentityMacroTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MODULE_IDENTITY();
    SnmpUpdatePartContext *snmpUpdatePart();
    SnmpOrganizationPartContext *snmpOrganizationPart();
    SnmpContactPartContext *snmpContactPart();
    SnmpDescrPartContext *snmpDescrPart();
    std::vector<SnmpRevisionPartContext *> snmpRevisionPart();
    SnmpRevisionPartContext* snmpRevisionPart(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SnmpModuleIdentityMacroTypeContext* snmpModuleIdentityMacroType();

  class  SnmpObjectIdentityMacroTypeContext : public antlr4::ParserRuleContext {
  public:
    SnmpObjectIdentityMacroTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OBJECT_IDENTITY();
    SnmpStatusDescrReferPartContext *snmpStatusDescrReferPart();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SnmpObjectIdentityMacroTypeContext* snmpObjectIdentityMacroType();

  class  SnmpObjectTypeMacroTypeContext : public antlr4::ParserRuleContext {
  public:
    SnmpObjectTypeMacroTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OBJECT_TYPE();
    SnmpSyntaxPartContext *snmpSyntaxPart();
    SnmpMaxAccessPartContext *snmpMaxAccessPart();
    SnmpStatusPartContext *snmpStatusPart();
    SnmpDescrPartContext *snmpDescrPart();
    SnmpUnitsPartContext *snmpUnitsPart();
    SnmpAccessPartContext *snmpAccessPart();
    SnmpIndexPartContext *snmpIndexPart();
    SnmpDefValPartContext *snmpDefValPart();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SnmpObjectTypeMacroTypeContext* snmpObjectTypeMacroType();

  class  SnmpNotificationTypeMacroTypeContext : public antlr4::ParserRuleContext {
  public:
    SnmpNotificationTypeMacroTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NOTIFICATION_TYPE();
    SnmpObjectStatusDescrReferPartContext *snmpObjectStatusDescrReferPart();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SnmpNotificationTypeMacroTypeContext* snmpNotificationTypeMacroType();

  class  SnmpTrapTypeMacroTypeContext : public antlr4::ParserRuleContext {
  public:
    SnmpTrapTypeMacroTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TRAP_TYPE();
    SnmpEnterprisePartContext *snmpEnterprisePart();
    SnmpDescrPartContext *snmpDescrPart();
    SnmpVarPartContext *snmpVarPart();
    SnmpReferPartContext *snmpReferPart();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SnmpTrapTypeMacroTypeContext* snmpTrapTypeMacroType();

  class  SnmpTextualConventionMacroTypeContext : public antlr4::ParserRuleContext {
  public:
    SnmpTextualConventionMacroTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TEXTUAL_CONVENTION();
    SnmpStatusDescrReferPartContext *snmpStatusDescrReferPart();
    SnmpSyntaxPartContext *snmpSyntaxPart();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SnmpTextualConventionMacroTypeContext* snmpTextualConventionMacroType();

  class  SnmpObjectGroupMacroTypeContext : public antlr4::ParserRuleContext {
  public:
    SnmpObjectGroupMacroTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OBJECT_GROUP();
    SnmpObjectStatusDescrReferPartContext *snmpObjectStatusDescrReferPart();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SnmpObjectGroupMacroTypeContext* snmpObjectGroupMacroType();

  class  SnmpNotificationGroupMacroTypeContext : public antlr4::ParserRuleContext {
  public:
    SnmpNotificationGroupMacroTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NOTIFICATION_GROUP();
    SnmpNotificationPartContext *snmpNotificationPart();
    SnmpStatusPartContext *snmpStatusPart();
    SnmpDescrPartContext *snmpDescrPart();
    SnmpSyntaxPartContext *snmpSyntaxPart();
    SnmpMaxAccessPartContext *snmpMaxAccessPart();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SnmpNotificationGroupMacroTypeContext* snmpNotificationGroupMacroType();

  class  SnmpModuleComplianceMacroTypeContext : public antlr4::ParserRuleContext {
  public:
    SnmpModuleComplianceMacroTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MODULE_COMPLIANCE();
    SnmpStatusDescrReferPartContext *snmpStatusDescrReferPart();
    SnmpModulesPartContext *snmpModulesPart();
    std::vector<SnmpGroupPartContext *> snmpGroupPart();
    SnmpGroupPartContext* snmpGroupPart(size_t i);
    antlr4::tree::TerminalNode *MODULE();
    SnmpMandatoryGroupsPartContext *snmpMandatoryGroupsPart();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SnmpModuleComplianceMacroTypeContext* snmpModuleComplianceMacroType();

  class  SnmpAgentCapabilitiesMacroTypeContext : public antlr4::ParserRuleContext {
  public:
    SnmpAgentCapabilitiesMacroTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AGENT_CAPABILITIES();
    SnmpProductPartContext *snmpProductPart();
    SnmpStatusDescrReferPartContext *snmpStatusDescrReferPart();
    std::vector<SnmpSupportPartContext *> snmpSupportPart();
    SnmpSupportPartContext* snmpSupportPart(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SnmpAgentCapabilitiesMacroTypeContext* snmpAgentCapabilitiesMacroType();

  class  SnmpSupportPartContext : public antlr4::ParserRuleContext {
  public:
    SnmpSupportPartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SUPPORTS();
    ModuleIdentifierContext *moduleIdentifier();
    SnmpInclusionPartContext *snmpInclusionPart();
    SnmpVariationPartContext *snmpVariationPart();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SnmpSupportPartContext* snmpSupportPart();

  class  SnmpInclusionPartContext : public antlr4::ParserRuleContext {
  public:
    SnmpInclusionPartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INCLUDES();
    SymbolListContext *symbolList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SnmpInclusionPartContext* snmpInclusionPart();

  class  SnmpVariationPartContext : public antlr4::ParserRuleContext {
  public:
    SnmpVariationPartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VARIATION();
    antlr4::tree::TerminalNode *IDENTIFIER_STRING();
    SnmpSyntaxPartContext *snmpSyntaxPart();
    SnmpAccessPartContext *snmpAccessPart();
    SnmpWritePartContext *snmpWritePart();
    SnmpDefValPartContext *snmpDefValPart();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SnmpVariationPartContext* snmpVariationPart();

  class  SnmpGroupPartContext : public antlr4::ParserRuleContext {
  public:
    SnmpGroupPartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GROUP();
    antlr4::tree::TerminalNode *IDENTIFIER_STRING();
    SnmpDescrPartContext *snmpDescrPart();
    SnmpReferPartContext *snmpReferPart();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SnmpGroupPartContext* snmpGroupPart();

  class  SnmpAccessPartContext : public antlr4::ParserRuleContext {
  public:
    SnmpAccessPartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ACCESS();
    antlr4::tree::TerminalNode *IDENTIFIER_STRING();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SnmpAccessPartContext* snmpAccessPart();

  class  SnmpContactPartContext : public antlr4::ParserRuleContext {
  public:
    SnmpContactPartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONTACT_INFO();
    antlr4::tree::TerminalNode *QUOTED_STRING();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SnmpContactPartContext* snmpContactPart();

  class  SnmpDefValPartContext : public antlr4::ParserRuleContext {
  public:
    SnmpDefValPartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DEFVAL();
    antlr4::tree::TerminalNode *LEFT_BRACE();
    ValueContext *value();
    antlr4::tree::TerminalNode *RIGHT_BRACE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SnmpDefValPartContext* snmpDefValPart();

  class  SnmpDescrPartContext : public antlr4::ParserRuleContext {
  public:
    SnmpDescrPartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DESCRIPTION();
    antlr4::tree::TerminalNode *QUOTED_STRING();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SnmpDescrPartContext* snmpDescrPart();

  class  SnmpDisplayPartContext : public antlr4::ParserRuleContext {
  public:
    SnmpDisplayPartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DISPLAY_HINT();
    antlr4::tree::TerminalNode *QUOTED_STRING();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SnmpDisplayPartContext* snmpDisplayPart();

  class  SnmpEnterprisePartContext : public antlr4::ParserRuleContext {
  public:
    SnmpEnterprisePartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ENTERPRISE();
    ElementTypeListContext *elementTypeList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SnmpEnterprisePartContext* snmpEnterprisePart();

  class  SnmpIndexPartContext : public antlr4::ParserRuleContext {
  public:
    SnmpIndexPartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INDEX();
    SequenceContentContext *sequenceContent();
    ElementTypeListContext *elementTypeList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SnmpIndexPartContext* snmpIndexPart();

  class  SnmpMaxAccessPartContext : public antlr4::ParserRuleContext {
  public:
    SnmpMaxAccessPartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MAX_ACCESS();
    AccessLevelContext *accessLevel();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SnmpMaxAccessPartContext* snmpMaxAccessPart();

  class  SnmpMandatoryGroupsPartContext : public antlr4::ParserRuleContext {
  public:
    SnmpMandatoryGroupsPartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MANDATORY_GROUPS();
    antlr4::tree::TerminalNode *LEFT_BRACE();
    SymbolListContext *symbolList();
    antlr4::tree::TerminalNode *RIGHT_BRACE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SnmpMandatoryGroupsPartContext* snmpMandatoryGroupsPart();

  class  SnmpMibGroupsPartContext : public antlr4::ParserRuleContext {
  public:
    SnmpMibGroupsPartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_BRACE();
    SymbolListContext *symbolList();
    antlr4::tree::TerminalNode *RIGHT_BRACE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SnmpMibGroupsPartContext* snmpMibGroupsPart();

  class  SnmpMibCompliancePartContext : public antlr4::ParserRuleContext {
  public:
    SnmpMibCompliancePartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ModuleReferenceContext *moduleReference();
    SnmpMibGroupsPartContext *snmpMibGroupsPart();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SnmpMibCompliancePartContext* snmpMibCompliancePart();

  class  SnmpModulesPartContext : public antlr4::ParserRuleContext {
  public:
    SnmpModulesPartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MODULES();
    antlr4::tree::TerminalNode *LEFT_BRACE();
    std::vector<SnmpMibCompliancePartContext *> snmpMibCompliancePart();
    SnmpMibCompliancePartContext* snmpMibCompliancePart(size_t i);
    antlr4::tree::TerminalNode *RIGHT_BRACE();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SnmpModulesPartContext* snmpModulesPart();

  class  SnmpNotificationPartContext : public antlr4::ParserRuleContext {
  public:
    SnmpNotificationPartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NOTIFICATIONS();
    antlr4::tree::TerminalNode *LEFT_BRACE();
    SymbolListContext *symbolList();
    antlr4::tree::TerminalNode *RIGHT_BRACE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SnmpNotificationPartContext* snmpNotificationPart();

  class  SnmpObjectsPartContext : public antlr4::ParserRuleContext {
  public:
    SnmpObjectsPartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OBJECTS();
    antlr4::tree::TerminalNode *LEFT_BRACE();
    SymbolListContext *symbolList();
    antlr4::tree::TerminalNode *RIGHT_BRACE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SnmpObjectsPartContext* snmpObjectsPart();

  class  SnmpOrganizationPartContext : public antlr4::ParserRuleContext {
  public:
    SnmpOrganizationPartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ORGANIZATION();
    antlr4::tree::TerminalNode *QUOTED_STRING();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SnmpOrganizationPartContext* snmpOrganizationPart();

  class  SnmpProductPartContext : public antlr4::ParserRuleContext {
  public:
    SnmpProductPartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PRODUCT_RELEASE();
    antlr4::tree::TerminalNode *QUOTED_STRING();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SnmpProductPartContext* snmpProductPart();

  class  SnmpReferPartContext : public antlr4::ParserRuleContext {
  public:
    SnmpReferPartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REFERENCE();
    antlr4::tree::TerminalNode *QUOTED_STRING();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SnmpReferPartContext* snmpReferPart();

  class  SnmpRevisionPartContext : public antlr4::ParserRuleContext {
  public:
    SnmpRevisionPartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REVISION();
    std::vector<antlr4::tree::TerminalNode *> QUOTED_STRING();
    antlr4::tree::TerminalNode* QUOTED_STRING(size_t i);
    antlr4::tree::TerminalNode *DESCRIPTION();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SnmpRevisionPartContext* snmpRevisionPart();

  class  SnmpStatusPartContext : public antlr4::ParserRuleContext {
  public:
    SnmpStatusPartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STATUS();
    antlr4::tree::TerminalNode *IDENTIFIER_STRING();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SnmpStatusPartContext* snmpStatusPart();

  class  SnmpSyntaxPartContext : public antlr4::ParserRuleContext {
  public:
    SnmpSyntaxPartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SYNTAX();
    TypeContext *type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SnmpSyntaxPartContext* snmpSyntaxPart();

  class  SnmpUnitsPartContext : public antlr4::ParserRuleContext {
  public:
    SnmpUnitsPartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UNITS();
    antlr4::tree::TerminalNode *QUOTED_STRING();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SnmpUnitsPartContext* snmpUnitsPart();

  class  SnmpUpdatePartContext : public antlr4::ParserRuleContext {
  public:
    SnmpUpdatePartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LAST_UPDATED();
    antlr4::tree::TerminalNode *QUOTED_STRING();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SnmpUpdatePartContext* snmpUpdatePart();

  class  SnmpVarPartContext : public antlr4::ParserRuleContext {
  public:
    SnmpVarPartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VARIABLES();
    ElementTypeListContext *elementTypeList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SnmpVarPartContext* snmpVarPart();

  class  SnmpWritePartContext : public antlr4::ParserRuleContext {
  public:
    SnmpWritePartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WRITE_SYNTAX();
    TypeContext *type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SnmpWritePartContext* snmpWritePart();


  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

}  // namespace kmx::mib
