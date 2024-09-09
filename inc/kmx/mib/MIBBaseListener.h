
// Generated from MIB.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "MIBListener.h"


namespace kmx::mib {

/**
 * This class provides an empty implementation of MIBListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  MIBBaseListener : public MIBListener {
public:

  virtual void enterData(MIBParser::DataContext * /*ctx*/) override { }
  virtual void exitData(MIBParser::DataContext * /*ctx*/) override { }

  virtual void enterModuleDefinition(MIBParser::ModuleDefinitionContext * /*ctx*/) override { }
  virtual void exitModuleDefinition(MIBParser::ModuleDefinitionContext * /*ctx*/) override { }

  virtual void enterModuleIdentifier(MIBParser::ModuleIdentifierContext * /*ctx*/) override { }
  virtual void exitModuleIdentifier(MIBParser::ModuleIdentifierContext * /*ctx*/) override { }

  virtual void enterModuleReference(MIBParser::ModuleReferenceContext * /*ctx*/) override { }
  virtual void exitModuleReference(MIBParser::ModuleReferenceContext * /*ctx*/) override { }

  virtual void enterTagDefault(MIBParser::TagDefaultContext * /*ctx*/) override { }
  virtual void exitTagDefault(MIBParser::TagDefaultContext * /*ctx*/) override { }

  virtual void enterModuleBody(MIBParser::ModuleBodyContext * /*ctx*/) override { }
  virtual void exitModuleBody(MIBParser::ModuleBodyContext * /*ctx*/) override { }

  virtual void enterExportList(MIBParser::ExportListContext * /*ctx*/) override { }
  virtual void exitExportList(MIBParser::ExportListContext * /*ctx*/) override { }

  virtual void enterImportList(MIBParser::ImportListContext * /*ctx*/) override { }
  virtual void exitImportList(MIBParser::ImportListContext * /*ctx*/) override { }

  virtual void enterSymbolsFromModule(MIBParser::SymbolsFromModuleContext * /*ctx*/) override { }
  virtual void exitSymbolsFromModule(MIBParser::SymbolsFromModuleContext * /*ctx*/) override { }

  virtual void enterSymbolList(MIBParser::SymbolListContext * /*ctx*/) override { }
  virtual void exitSymbolList(MIBParser::SymbolListContext * /*ctx*/) override { }

  virtual void enterSymbolListBraced(MIBParser::SymbolListBracedContext * /*ctx*/) override { }
  virtual void exitSymbolListBraced(MIBParser::SymbolListBracedContext * /*ctx*/) override { }

  virtual void enterSymbol(MIBParser::SymbolContext * /*ctx*/) override { }
  virtual void exitSymbol(MIBParser::SymbolContext * /*ctx*/) override { }

  virtual void enterAssignmentList(MIBParser::AssignmentListContext * /*ctx*/) override { }
  virtual void exitAssignmentList(MIBParser::AssignmentListContext * /*ctx*/) override { }

  virtual void enterAssignment(MIBParser::AssignmentContext * /*ctx*/) override { }
  virtual void exitAssignment(MIBParser::AssignmentContext * /*ctx*/) override { }

  virtual void enterMacroDefinition(MIBParser::MacroDefinitionContext * /*ctx*/) override { }
  virtual void exitMacroDefinition(MIBParser::MacroDefinitionContext * /*ctx*/) override { }

  virtual void enterMacroReference(MIBParser::MacroReferenceContext * /*ctx*/) override { }
  virtual void exitMacroReference(MIBParser::MacroReferenceContext * /*ctx*/) override { }

  virtual void enterMacroBody(MIBParser::MacroBodyContext * /*ctx*/) override { }
  virtual void exitMacroBody(MIBParser::MacroBodyContext * /*ctx*/) override { }

  virtual void enterMacroBodyElement(MIBParser::MacroBodyElementContext * /*ctx*/) override { }
  virtual void exitMacroBodyElement(MIBParser::MacroBodyElementContext * /*ctx*/) override { }

  virtual void enterTypeAssignment(MIBParser::TypeAssignmentContext * /*ctx*/) override { }
  virtual void exitTypeAssignment(MIBParser::TypeAssignmentContext * /*ctx*/) override { }

  virtual void enterType(MIBParser::TypeContext * /*ctx*/) override { }
  virtual void exitType(MIBParser::TypeContext * /*ctx*/) override { }

  virtual void enterDefinedType(MIBParser::DefinedTypeContext * /*ctx*/) override { }
  virtual void exitDefinedType(MIBParser::DefinedTypeContext * /*ctx*/) override { }

  virtual void enterBuiltinType(MIBParser::BuiltinTypeContext * /*ctx*/) override { }
  virtual void exitBuiltinType(MIBParser::BuiltinTypeContext * /*ctx*/) override { }

  virtual void enterNullType(MIBParser::NullTypeContext * /*ctx*/) override { }
  virtual void exitNullType(MIBParser::NullTypeContext * /*ctx*/) override { }

  virtual void enterBooleanType(MIBParser::BooleanTypeContext * /*ctx*/) override { }
  virtual void exitBooleanType(MIBParser::BooleanTypeContext * /*ctx*/) override { }

  virtual void enterRealType(MIBParser::RealTypeContext * /*ctx*/) override { }
  virtual void exitRealType(MIBParser::RealTypeContext * /*ctx*/) override { }

  virtual void enterAccessLevel(MIBParser::AccessLevelContext * /*ctx*/) override { }
  virtual void exitAccessLevel(MIBParser::AccessLevelContext * /*ctx*/) override { }

  virtual void enterIntegerType(MIBParser::IntegerTypeContext * /*ctx*/) override { }
  virtual void exitIntegerType(MIBParser::IntegerTypeContext * /*ctx*/) override { }

  virtual void enterObjectIdentifierType(MIBParser::ObjectIdentifierTypeContext * /*ctx*/) override { }
  virtual void exitObjectIdentifierType(MIBParser::ObjectIdentifierTypeContext * /*ctx*/) override { }

  virtual void enterStringType(MIBParser::StringTypeContext * /*ctx*/) override { }
  virtual void exitStringType(MIBParser::StringTypeContext * /*ctx*/) override { }

  virtual void enterBitStringType(MIBParser::BitStringTypeContext * /*ctx*/) override { }
  virtual void exitBitStringType(MIBParser::BitStringTypeContext * /*ctx*/) override { }

  virtual void enterBitsType(MIBParser::BitsTypeContext * /*ctx*/) override { }
  virtual void exitBitsType(MIBParser::BitsTypeContext * /*ctx*/) override { }

  virtual void enterSequenceContent(MIBParser::SequenceContentContext * /*ctx*/) override { }
  virtual void exitSequenceContent(MIBParser::SequenceContentContext * /*ctx*/) override { }

  virtual void enterSequenceType(MIBParser::SequenceTypeContext * /*ctx*/) override { }
  virtual void exitSequenceType(MIBParser::SequenceTypeContext * /*ctx*/) override { }

  virtual void enterSequenceOfType(MIBParser::SequenceOfTypeContext * /*ctx*/) override { }
  virtual void exitSequenceOfType(MIBParser::SequenceOfTypeContext * /*ctx*/) override { }

  virtual void enterSetType(MIBParser::SetTypeContext * /*ctx*/) override { }
  virtual void exitSetType(MIBParser::SetTypeContext * /*ctx*/) override { }

  virtual void enterSetOfType(MIBParser::SetOfTypeContext * /*ctx*/) override { }
  virtual void exitSetOfType(MIBParser::SetOfTypeContext * /*ctx*/) override { }

  virtual void enterChoiceType(MIBParser::ChoiceTypeContext * /*ctx*/) override { }
  virtual void exitChoiceType(MIBParser::ChoiceTypeContext * /*ctx*/) override { }

  virtual void enterEnumeratedType(MIBParser::EnumeratedTypeContext * /*ctx*/) override { }
  virtual void exitEnumeratedType(MIBParser::EnumeratedTypeContext * /*ctx*/) override { }

  virtual void enterSelectionType(MIBParser::SelectionTypeContext * /*ctx*/) override { }
  virtual void exitSelectionType(MIBParser::SelectionTypeContext * /*ctx*/) override { }

  virtual void enterTaggedType(MIBParser::TaggedTypeContext * /*ctx*/) override { }
  virtual void exitTaggedType(MIBParser::TaggedTypeContext * /*ctx*/) override { }

  virtual void enterTag(MIBParser::TagContext * /*ctx*/) override { }
  virtual void exitTag(MIBParser::TagContext * /*ctx*/) override { }

  virtual void enterClass_(MIBParser::Class_Context * /*ctx*/) override { }
  virtual void exitClass_(MIBParser::Class_Context * /*ctx*/) override { }

  virtual void enterExplicitOrImplicitTag(MIBParser::ExplicitOrImplicitTagContext * /*ctx*/) override { }
  virtual void exitExplicitOrImplicitTag(MIBParser::ExplicitOrImplicitTagContext * /*ctx*/) override { }

  virtual void enterAnyType(MIBParser::AnyTypeContext * /*ctx*/) override { }
  virtual void exitAnyType(MIBParser::AnyTypeContext * /*ctx*/) override { }

  virtual void enterElementTypeList(MIBParser::ElementTypeListContext * /*ctx*/) override { }
  virtual void exitElementTypeList(MIBParser::ElementTypeListContext * /*ctx*/) override { }

  virtual void enterElementType(MIBParser::ElementTypeContext * /*ctx*/) override { }
  virtual void exitElementType(MIBParser::ElementTypeContext * /*ctx*/) override { }

  virtual void enterOptionalOrDefaultElement(MIBParser::OptionalOrDefaultElementContext * /*ctx*/) override { }
  virtual void exitOptionalOrDefaultElement(MIBParser::OptionalOrDefaultElementContext * /*ctx*/) override { }

  virtual void enterValueOrConstraintList(MIBParser::ValueOrConstraintListContext * /*ctx*/) override { }
  virtual void exitValueOrConstraintList(MIBParser::ValueOrConstraintListContext * /*ctx*/) override { }

  virtual void enterNamedNumberList(MIBParser::NamedNumberListContext * /*ctx*/) override { }
  virtual void exitNamedNumberList(MIBParser::NamedNumberListContext * /*ctx*/) override { }

  virtual void enterNamedNumber(MIBParser::NamedNumberContext * /*ctx*/) override { }
  virtual void exitNamedNumber(MIBParser::NamedNumberContext * /*ctx*/) override { }

  virtual void enterNumber(MIBParser::NumberContext * /*ctx*/) override { }
  virtual void exitNumber(MIBParser::NumberContext * /*ctx*/) override { }

  virtual void enterConstraintList(MIBParser::ConstraintListContext * /*ctx*/) override { }
  virtual void exitConstraintList(MIBParser::ConstraintListContext * /*ctx*/) override { }

  virtual void enterConstraint(MIBParser::ConstraintContext * /*ctx*/) override { }
  virtual void exitConstraint(MIBParser::ConstraintContext * /*ctx*/) override { }

  virtual void enterValueConstraintList(MIBParser::ValueConstraintListContext * /*ctx*/) override { }
  virtual void exitValueConstraintList(MIBParser::ValueConstraintListContext * /*ctx*/) override { }

  virtual void enterValueConstraint(MIBParser::ValueConstraintContext * /*ctx*/) override { }
  virtual void exitValueConstraint(MIBParser::ValueConstraintContext * /*ctx*/) override { }

  virtual void enterValueRange(MIBParser::ValueRangeContext * /*ctx*/) override { }
  virtual void exitValueRange(MIBParser::ValueRangeContext * /*ctx*/) override { }

  virtual void enterLowerEndPoint(MIBParser::LowerEndPointContext * /*ctx*/) override { }
  virtual void exitLowerEndPoint(MIBParser::LowerEndPointContext * /*ctx*/) override { }

  virtual void enterUpperEndPoint(MIBParser::UpperEndPointContext * /*ctx*/) override { }
  virtual void exitUpperEndPoint(MIBParser::UpperEndPointContext * /*ctx*/) override { }

  virtual void enterSizeConstraint(MIBParser::SizeConstraintContext * /*ctx*/) override { }
  virtual void exitSizeConstraint(MIBParser::SizeConstraintContext * /*ctx*/) override { }

  virtual void enterAlphabetConstraint(MIBParser::AlphabetConstraintContext * /*ctx*/) override { }
  virtual void exitAlphabetConstraint(MIBParser::AlphabetConstraintContext * /*ctx*/) override { }

  virtual void enterContainedTypeConstraint(MIBParser::ContainedTypeConstraintContext * /*ctx*/) override { }
  virtual void exitContainedTypeConstraint(MIBParser::ContainedTypeConstraintContext * /*ctx*/) override { }

  virtual void enterInnerTypeConstraint(MIBParser::InnerTypeConstraintContext * /*ctx*/) override { }
  virtual void exitInnerTypeConstraint(MIBParser::InnerTypeConstraintContext * /*ctx*/) override { }

  virtual void enterComponentsList(MIBParser::ComponentsListContext * /*ctx*/) override { }
  virtual void exitComponentsList(MIBParser::ComponentsListContext * /*ctx*/) override { }

  virtual void enterComponentsListTail(MIBParser::ComponentsListTailContext * /*ctx*/) override { }
  virtual void exitComponentsListTail(MIBParser::ComponentsListTailContext * /*ctx*/) override { }

  virtual void enterComponentConstraint(MIBParser::ComponentConstraintContext * /*ctx*/) override { }
  virtual void exitComponentConstraint(MIBParser::ComponentConstraintContext * /*ctx*/) override { }

  virtual void enterComponentValuePresence(MIBParser::ComponentValuePresenceContext * /*ctx*/) override { }
  virtual void exitComponentValuePresence(MIBParser::ComponentValuePresenceContext * /*ctx*/) override { }

  virtual void enterComponentPresence(MIBParser::ComponentPresenceContext * /*ctx*/) override { }
  virtual void exitComponentPresence(MIBParser::ComponentPresenceContext * /*ctx*/) override { }

  virtual void enterValueAssignment(MIBParser::ValueAssignmentContext * /*ctx*/) override { }
  virtual void exitValueAssignment(MIBParser::ValueAssignmentContext * /*ctx*/) override { }

  virtual void enterValue(MIBParser::ValueContext * /*ctx*/) override { }
  virtual void exitValue(MIBParser::ValueContext * /*ctx*/) override { }

  virtual void enterDefinedValue(MIBParser::DefinedValueContext * /*ctx*/) override { }
  virtual void exitDefinedValue(MIBParser::DefinedValueContext * /*ctx*/) override { }

  virtual void enterBuiltinValue(MIBParser::BuiltinValueContext * /*ctx*/) override { }
  virtual void exitBuiltinValue(MIBParser::BuiltinValueContext * /*ctx*/) override { }

  virtual void enterNullValue(MIBParser::NullValueContext * /*ctx*/) override { }
  virtual void exitNullValue(MIBParser::NullValueContext * /*ctx*/) override { }

  virtual void enterBooleanValue(MIBParser::BooleanValueContext * /*ctx*/) override { }
  virtual void exitBooleanValue(MIBParser::BooleanValueContext * /*ctx*/) override { }

  virtual void enterSpecialRealValue(MIBParser::SpecialRealValueContext * /*ctx*/) override { }
  virtual void exitSpecialRealValue(MIBParser::SpecialRealValueContext * /*ctx*/) override { }

  virtual void enterNumberValue(MIBParser::NumberValueContext * /*ctx*/) override { }
  virtual void exitNumberValue(MIBParser::NumberValueContext * /*ctx*/) override { }

  virtual void enterBinaryValue(MIBParser::BinaryValueContext * /*ctx*/) override { }
  virtual void exitBinaryValue(MIBParser::BinaryValueContext * /*ctx*/) override { }

  virtual void enterHexadecimalValue(MIBParser::HexadecimalValueContext * /*ctx*/) override { }
  virtual void exitHexadecimalValue(MIBParser::HexadecimalValueContext * /*ctx*/) override { }

  virtual void enterStringValue(MIBParser::StringValueContext * /*ctx*/) override { }
  virtual void exitStringValue(MIBParser::StringValueContext * /*ctx*/) override { }

  virtual void enterBitOrObjectIdentifierValue(MIBParser::BitOrObjectIdentifierValueContext * /*ctx*/) override { }
  virtual void exitBitOrObjectIdentifierValue(MIBParser::BitOrObjectIdentifierValueContext * /*ctx*/) override { }

  virtual void enterBitValue(MIBParser::BitValueContext * /*ctx*/) override { }
  virtual void exitBitValue(MIBParser::BitValueContext * /*ctx*/) override { }

  virtual void enterObjectIdentifierValue(MIBParser::ObjectIdentifierValueContext * /*ctx*/) override { }
  virtual void exitObjectIdentifierValue(MIBParser::ObjectIdentifierValueContext * /*ctx*/) override { }

  virtual void enterNameValueList(MIBParser::NameValueListContext * /*ctx*/) override { }
  virtual void exitNameValueList(MIBParser::NameValueListContext * /*ctx*/) override { }

  virtual void enterNameValueComponent(MIBParser::NameValueComponentContext * /*ctx*/) override { }
  virtual void exitNameValueComponent(MIBParser::NameValueComponentContext * /*ctx*/) override { }

  virtual void enterNameOrNumber(MIBParser::NameOrNumberContext * /*ctx*/) override { }
  virtual void exitNameOrNumber(MIBParser::NameOrNumberContext * /*ctx*/) override { }

  virtual void enterNameAndNumber(MIBParser::NameAndNumberContext * /*ctx*/) override { }
  virtual void exitNameAndNumber(MIBParser::NameAndNumberContext * /*ctx*/) override { }

  virtual void enterDefinedMacroType(MIBParser::DefinedMacroTypeContext * /*ctx*/) override { }
  virtual void exitDefinedMacroType(MIBParser::DefinedMacroTypeContext * /*ctx*/) override { }

  virtual void enterDefinedMacroName(MIBParser::DefinedMacroNameContext * /*ctx*/) override { }
  virtual void exitDefinedMacroName(MIBParser::DefinedMacroNameContext * /*ctx*/) override { }

  virtual void enterSnmpStatusDescrReferPart(MIBParser::SnmpStatusDescrReferPartContext * /*ctx*/) override { }
  virtual void exitSnmpStatusDescrReferPart(MIBParser::SnmpStatusDescrReferPartContext * /*ctx*/) override { }

  virtual void enterSnmpObjectStatusDescrReferPart(MIBParser::SnmpObjectStatusDescrReferPartContext * /*ctx*/) override { }
  virtual void exitSnmpObjectStatusDescrReferPart(MIBParser::SnmpObjectStatusDescrReferPartContext * /*ctx*/) override { }

  virtual void enterSnmpModuleIdentityMacroType(MIBParser::SnmpModuleIdentityMacroTypeContext * /*ctx*/) override { }
  virtual void exitSnmpModuleIdentityMacroType(MIBParser::SnmpModuleIdentityMacroTypeContext * /*ctx*/) override { }

  virtual void enterSnmpObjectIdentityMacroType(MIBParser::SnmpObjectIdentityMacroTypeContext * /*ctx*/) override { }
  virtual void exitSnmpObjectIdentityMacroType(MIBParser::SnmpObjectIdentityMacroTypeContext * /*ctx*/) override { }

  virtual void enterSnmpObjectTypeMacroType(MIBParser::SnmpObjectTypeMacroTypeContext * /*ctx*/) override { }
  virtual void exitSnmpObjectTypeMacroType(MIBParser::SnmpObjectTypeMacroTypeContext * /*ctx*/) override { }

  virtual void enterSnmpNotificationTypeMacroType(MIBParser::SnmpNotificationTypeMacroTypeContext * /*ctx*/) override { }
  virtual void exitSnmpNotificationTypeMacroType(MIBParser::SnmpNotificationTypeMacroTypeContext * /*ctx*/) override { }

  virtual void enterSnmpTrapTypeMacroType(MIBParser::SnmpTrapTypeMacroTypeContext * /*ctx*/) override { }
  virtual void exitSnmpTrapTypeMacroType(MIBParser::SnmpTrapTypeMacroTypeContext * /*ctx*/) override { }

  virtual void enterSnmpTextualConventionMacroType(MIBParser::SnmpTextualConventionMacroTypeContext * /*ctx*/) override { }
  virtual void exitSnmpTextualConventionMacroType(MIBParser::SnmpTextualConventionMacroTypeContext * /*ctx*/) override { }

  virtual void enterSnmpObjectGroupMacroType(MIBParser::SnmpObjectGroupMacroTypeContext * /*ctx*/) override { }
  virtual void exitSnmpObjectGroupMacroType(MIBParser::SnmpObjectGroupMacroTypeContext * /*ctx*/) override { }

  virtual void enterSnmpNotificationGroupMacroType(MIBParser::SnmpNotificationGroupMacroTypeContext * /*ctx*/) override { }
  virtual void exitSnmpNotificationGroupMacroType(MIBParser::SnmpNotificationGroupMacroTypeContext * /*ctx*/) override { }

  virtual void enterSnmpModuleComplianceMacroType(MIBParser::SnmpModuleComplianceMacroTypeContext * /*ctx*/) override { }
  virtual void exitSnmpModuleComplianceMacroType(MIBParser::SnmpModuleComplianceMacroTypeContext * /*ctx*/) override { }

  virtual void enterSnmpAgentCapabilitiesMacroType(MIBParser::SnmpAgentCapabilitiesMacroTypeContext * /*ctx*/) override { }
  virtual void exitSnmpAgentCapabilitiesMacroType(MIBParser::SnmpAgentCapabilitiesMacroTypeContext * /*ctx*/) override { }

  virtual void enterSnmpSupportPart(MIBParser::SnmpSupportPartContext * /*ctx*/) override { }
  virtual void exitSnmpSupportPart(MIBParser::SnmpSupportPartContext * /*ctx*/) override { }

  virtual void enterSnmpInclusionPart(MIBParser::SnmpInclusionPartContext * /*ctx*/) override { }
  virtual void exitSnmpInclusionPart(MIBParser::SnmpInclusionPartContext * /*ctx*/) override { }

  virtual void enterSnmpVariationPart(MIBParser::SnmpVariationPartContext * /*ctx*/) override { }
  virtual void exitSnmpVariationPart(MIBParser::SnmpVariationPartContext * /*ctx*/) override { }

  virtual void enterSnmpGroupPart(MIBParser::SnmpGroupPartContext * /*ctx*/) override { }
  virtual void exitSnmpGroupPart(MIBParser::SnmpGroupPartContext * /*ctx*/) override { }

  virtual void enterSnmpAccessPart(MIBParser::SnmpAccessPartContext * /*ctx*/) override { }
  virtual void exitSnmpAccessPart(MIBParser::SnmpAccessPartContext * /*ctx*/) override { }

  virtual void enterSnmpContactPart(MIBParser::SnmpContactPartContext * /*ctx*/) override { }
  virtual void exitSnmpContactPart(MIBParser::SnmpContactPartContext * /*ctx*/) override { }

  virtual void enterSnmpDefValPart(MIBParser::SnmpDefValPartContext * /*ctx*/) override { }
  virtual void exitSnmpDefValPart(MIBParser::SnmpDefValPartContext * /*ctx*/) override { }

  virtual void enterSnmpDescrPart(MIBParser::SnmpDescrPartContext * /*ctx*/) override { }
  virtual void exitSnmpDescrPart(MIBParser::SnmpDescrPartContext * /*ctx*/) override { }

  virtual void enterSnmpDisplayPart(MIBParser::SnmpDisplayPartContext * /*ctx*/) override { }
  virtual void exitSnmpDisplayPart(MIBParser::SnmpDisplayPartContext * /*ctx*/) override { }

  virtual void enterSnmpEnterprisePart(MIBParser::SnmpEnterprisePartContext * /*ctx*/) override { }
  virtual void exitSnmpEnterprisePart(MIBParser::SnmpEnterprisePartContext * /*ctx*/) override { }

  virtual void enterSnmpIndexPart(MIBParser::SnmpIndexPartContext * /*ctx*/) override { }
  virtual void exitSnmpIndexPart(MIBParser::SnmpIndexPartContext * /*ctx*/) override { }

  virtual void enterSnmpMaxAccessPart(MIBParser::SnmpMaxAccessPartContext * /*ctx*/) override { }
  virtual void exitSnmpMaxAccessPart(MIBParser::SnmpMaxAccessPartContext * /*ctx*/) override { }

  virtual void enterSnmpMandatoryGroupsPart(MIBParser::SnmpMandatoryGroupsPartContext * /*ctx*/) override { }
  virtual void exitSnmpMandatoryGroupsPart(MIBParser::SnmpMandatoryGroupsPartContext * /*ctx*/) override { }

  virtual void enterSnmpMibGroupsPart(MIBParser::SnmpMibGroupsPartContext * /*ctx*/) override { }
  virtual void exitSnmpMibGroupsPart(MIBParser::SnmpMibGroupsPartContext * /*ctx*/) override { }

  virtual void enterSnmpMibCompliancePart(MIBParser::SnmpMibCompliancePartContext * /*ctx*/) override { }
  virtual void exitSnmpMibCompliancePart(MIBParser::SnmpMibCompliancePartContext * /*ctx*/) override { }

  virtual void enterSnmpModulesPart(MIBParser::SnmpModulesPartContext * /*ctx*/) override { }
  virtual void exitSnmpModulesPart(MIBParser::SnmpModulesPartContext * /*ctx*/) override { }

  virtual void enterSnmpNotificationPart(MIBParser::SnmpNotificationPartContext * /*ctx*/) override { }
  virtual void exitSnmpNotificationPart(MIBParser::SnmpNotificationPartContext * /*ctx*/) override { }

  virtual void enterSnmpObjectsPart(MIBParser::SnmpObjectsPartContext * /*ctx*/) override { }
  virtual void exitSnmpObjectsPart(MIBParser::SnmpObjectsPartContext * /*ctx*/) override { }

  virtual void enterSnmpOrganizationPart(MIBParser::SnmpOrganizationPartContext * /*ctx*/) override { }
  virtual void exitSnmpOrganizationPart(MIBParser::SnmpOrganizationPartContext * /*ctx*/) override { }

  virtual void enterSnmpProductPart(MIBParser::SnmpProductPartContext * /*ctx*/) override { }
  virtual void exitSnmpProductPart(MIBParser::SnmpProductPartContext * /*ctx*/) override { }

  virtual void enterSnmpReferPart(MIBParser::SnmpReferPartContext * /*ctx*/) override { }
  virtual void exitSnmpReferPart(MIBParser::SnmpReferPartContext * /*ctx*/) override { }

  virtual void enterSnmpRevisionPart(MIBParser::SnmpRevisionPartContext * /*ctx*/) override { }
  virtual void exitSnmpRevisionPart(MIBParser::SnmpRevisionPartContext * /*ctx*/) override { }

  virtual void enterSnmpStatusPart(MIBParser::SnmpStatusPartContext * /*ctx*/) override { }
  virtual void exitSnmpStatusPart(MIBParser::SnmpStatusPartContext * /*ctx*/) override { }

  virtual void enterSnmpSyntaxPart(MIBParser::SnmpSyntaxPartContext * /*ctx*/) override { }
  virtual void exitSnmpSyntaxPart(MIBParser::SnmpSyntaxPartContext * /*ctx*/) override { }

  virtual void enterSnmpUnitsPart(MIBParser::SnmpUnitsPartContext * /*ctx*/) override { }
  virtual void exitSnmpUnitsPart(MIBParser::SnmpUnitsPartContext * /*ctx*/) override { }

  virtual void enterSnmpUpdatePart(MIBParser::SnmpUpdatePartContext * /*ctx*/) override { }
  virtual void exitSnmpUpdatePart(MIBParser::SnmpUpdatePartContext * /*ctx*/) override { }

  virtual void enterSnmpVarPart(MIBParser::SnmpVarPartContext * /*ctx*/) override { }
  virtual void exitSnmpVarPart(MIBParser::SnmpVarPartContext * /*ctx*/) override { }

  virtual void enterSnmpWritePart(MIBParser::SnmpWritePartContext * /*ctx*/) override { }
  virtual void exitSnmpWritePart(MIBParser::SnmpWritePartContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

}  // namespace kmx::mib
