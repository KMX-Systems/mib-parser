
// Generated from MIB.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "MIBParser.h"


namespace kmx::mib {

/**
 * This interface defines an abstract listener for a parse tree produced by MIBParser.
 */
class  MIBListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterData(MIBParser::DataContext *ctx) = 0;
  virtual void exitData(MIBParser::DataContext *ctx) = 0;

  virtual void enterModuleDefinition(MIBParser::ModuleDefinitionContext *ctx) = 0;
  virtual void exitModuleDefinition(MIBParser::ModuleDefinitionContext *ctx) = 0;

  virtual void enterModuleIdentifier(MIBParser::ModuleIdentifierContext *ctx) = 0;
  virtual void exitModuleIdentifier(MIBParser::ModuleIdentifierContext *ctx) = 0;

  virtual void enterModuleReference(MIBParser::ModuleReferenceContext *ctx) = 0;
  virtual void exitModuleReference(MIBParser::ModuleReferenceContext *ctx) = 0;

  virtual void enterTagDefault(MIBParser::TagDefaultContext *ctx) = 0;
  virtual void exitTagDefault(MIBParser::TagDefaultContext *ctx) = 0;

  virtual void enterModuleBody(MIBParser::ModuleBodyContext *ctx) = 0;
  virtual void exitModuleBody(MIBParser::ModuleBodyContext *ctx) = 0;

  virtual void enterExportList(MIBParser::ExportListContext *ctx) = 0;
  virtual void exitExportList(MIBParser::ExportListContext *ctx) = 0;

  virtual void enterImportList(MIBParser::ImportListContext *ctx) = 0;
  virtual void exitImportList(MIBParser::ImportListContext *ctx) = 0;

  virtual void enterSymbolsFromModule(MIBParser::SymbolsFromModuleContext *ctx) = 0;
  virtual void exitSymbolsFromModule(MIBParser::SymbolsFromModuleContext *ctx) = 0;

  virtual void enterSymbolList(MIBParser::SymbolListContext *ctx) = 0;
  virtual void exitSymbolList(MIBParser::SymbolListContext *ctx) = 0;

  virtual void enterSymbol(MIBParser::SymbolContext *ctx) = 0;
  virtual void exitSymbol(MIBParser::SymbolContext *ctx) = 0;

  virtual void enterAssignmentList(MIBParser::AssignmentListContext *ctx) = 0;
  virtual void exitAssignmentList(MIBParser::AssignmentListContext *ctx) = 0;

  virtual void enterAssignment(MIBParser::AssignmentContext *ctx) = 0;
  virtual void exitAssignment(MIBParser::AssignmentContext *ctx) = 0;

  virtual void enterMacroDefinition(MIBParser::MacroDefinitionContext *ctx) = 0;
  virtual void exitMacroDefinition(MIBParser::MacroDefinitionContext *ctx) = 0;

  virtual void enterMacroReference(MIBParser::MacroReferenceContext *ctx) = 0;
  virtual void exitMacroReference(MIBParser::MacroReferenceContext *ctx) = 0;

  virtual void enterMacroBody(MIBParser::MacroBodyContext *ctx) = 0;
  virtual void exitMacroBody(MIBParser::MacroBodyContext *ctx) = 0;

  virtual void enterMacroBodyElement(MIBParser::MacroBodyElementContext *ctx) = 0;
  virtual void exitMacroBodyElement(MIBParser::MacroBodyElementContext *ctx) = 0;

  virtual void enterTypeAssignment(MIBParser::TypeAssignmentContext *ctx) = 0;
  virtual void exitTypeAssignment(MIBParser::TypeAssignmentContext *ctx) = 0;

  virtual void enterType(MIBParser::TypeContext *ctx) = 0;
  virtual void exitType(MIBParser::TypeContext *ctx) = 0;

  virtual void enterDefinedType(MIBParser::DefinedTypeContext *ctx) = 0;
  virtual void exitDefinedType(MIBParser::DefinedTypeContext *ctx) = 0;

  virtual void enterBuiltinType(MIBParser::BuiltinTypeContext *ctx) = 0;
  virtual void exitBuiltinType(MIBParser::BuiltinTypeContext *ctx) = 0;

  virtual void enterNullType(MIBParser::NullTypeContext *ctx) = 0;
  virtual void exitNullType(MIBParser::NullTypeContext *ctx) = 0;

  virtual void enterBooleanType(MIBParser::BooleanTypeContext *ctx) = 0;
  virtual void exitBooleanType(MIBParser::BooleanTypeContext *ctx) = 0;

  virtual void enterRealType(MIBParser::RealTypeContext *ctx) = 0;
  virtual void exitRealType(MIBParser::RealTypeContext *ctx) = 0;

  virtual void enterAccessLevel(MIBParser::AccessLevelContext *ctx) = 0;
  virtual void exitAccessLevel(MIBParser::AccessLevelContext *ctx) = 0;

  virtual void enterIntegerType(MIBParser::IntegerTypeContext *ctx) = 0;
  virtual void exitIntegerType(MIBParser::IntegerTypeContext *ctx) = 0;

  virtual void enterObjectIdentifierType(MIBParser::ObjectIdentifierTypeContext *ctx) = 0;
  virtual void exitObjectIdentifierType(MIBParser::ObjectIdentifierTypeContext *ctx) = 0;

  virtual void enterStringType(MIBParser::StringTypeContext *ctx) = 0;
  virtual void exitStringType(MIBParser::StringTypeContext *ctx) = 0;

  virtual void enterBitStringType(MIBParser::BitStringTypeContext *ctx) = 0;
  virtual void exitBitStringType(MIBParser::BitStringTypeContext *ctx) = 0;

  virtual void enterBitsType(MIBParser::BitsTypeContext *ctx) = 0;
  virtual void exitBitsType(MIBParser::BitsTypeContext *ctx) = 0;

  virtual void enterSequenceContent(MIBParser::SequenceContentContext *ctx) = 0;
  virtual void exitSequenceContent(MIBParser::SequenceContentContext *ctx) = 0;

  virtual void enterSequenceType(MIBParser::SequenceTypeContext *ctx) = 0;
  virtual void exitSequenceType(MIBParser::SequenceTypeContext *ctx) = 0;

  virtual void enterSequenceOfType(MIBParser::SequenceOfTypeContext *ctx) = 0;
  virtual void exitSequenceOfType(MIBParser::SequenceOfTypeContext *ctx) = 0;

  virtual void enterSetType(MIBParser::SetTypeContext *ctx) = 0;
  virtual void exitSetType(MIBParser::SetTypeContext *ctx) = 0;

  virtual void enterSetOfType(MIBParser::SetOfTypeContext *ctx) = 0;
  virtual void exitSetOfType(MIBParser::SetOfTypeContext *ctx) = 0;

  virtual void enterChoiceType(MIBParser::ChoiceTypeContext *ctx) = 0;
  virtual void exitChoiceType(MIBParser::ChoiceTypeContext *ctx) = 0;

  virtual void enterEnumeratedType(MIBParser::EnumeratedTypeContext *ctx) = 0;
  virtual void exitEnumeratedType(MIBParser::EnumeratedTypeContext *ctx) = 0;

  virtual void enterSelectionType(MIBParser::SelectionTypeContext *ctx) = 0;
  virtual void exitSelectionType(MIBParser::SelectionTypeContext *ctx) = 0;

  virtual void enterTaggedType(MIBParser::TaggedTypeContext *ctx) = 0;
  virtual void exitTaggedType(MIBParser::TaggedTypeContext *ctx) = 0;

  virtual void enterTag(MIBParser::TagContext *ctx) = 0;
  virtual void exitTag(MIBParser::TagContext *ctx) = 0;

  virtual void enterClass_(MIBParser::Class_Context *ctx) = 0;
  virtual void exitClass_(MIBParser::Class_Context *ctx) = 0;

  virtual void enterExplicitOrImplicitTag(MIBParser::ExplicitOrImplicitTagContext *ctx) = 0;
  virtual void exitExplicitOrImplicitTag(MIBParser::ExplicitOrImplicitTagContext *ctx) = 0;

  virtual void enterAnyType(MIBParser::AnyTypeContext *ctx) = 0;
  virtual void exitAnyType(MIBParser::AnyTypeContext *ctx) = 0;

  virtual void enterElementTypeList(MIBParser::ElementTypeListContext *ctx) = 0;
  virtual void exitElementTypeList(MIBParser::ElementTypeListContext *ctx) = 0;

  virtual void enterElementType(MIBParser::ElementTypeContext *ctx) = 0;
  virtual void exitElementType(MIBParser::ElementTypeContext *ctx) = 0;

  virtual void enterOptionalOrDefaultElement(MIBParser::OptionalOrDefaultElementContext *ctx) = 0;
  virtual void exitOptionalOrDefaultElement(MIBParser::OptionalOrDefaultElementContext *ctx) = 0;

  virtual void enterValueOrConstraintList(MIBParser::ValueOrConstraintListContext *ctx) = 0;
  virtual void exitValueOrConstraintList(MIBParser::ValueOrConstraintListContext *ctx) = 0;

  virtual void enterNamedNumberList(MIBParser::NamedNumberListContext *ctx) = 0;
  virtual void exitNamedNumberList(MIBParser::NamedNumberListContext *ctx) = 0;

  virtual void enterNamedNumber(MIBParser::NamedNumberContext *ctx) = 0;
  virtual void exitNamedNumber(MIBParser::NamedNumberContext *ctx) = 0;

  virtual void enterNumber(MIBParser::NumberContext *ctx) = 0;
  virtual void exitNumber(MIBParser::NumberContext *ctx) = 0;

  virtual void enterConstraintList(MIBParser::ConstraintListContext *ctx) = 0;
  virtual void exitConstraintList(MIBParser::ConstraintListContext *ctx) = 0;

  virtual void enterConstraint(MIBParser::ConstraintContext *ctx) = 0;
  virtual void exitConstraint(MIBParser::ConstraintContext *ctx) = 0;

  virtual void enterValueConstraintList(MIBParser::ValueConstraintListContext *ctx) = 0;
  virtual void exitValueConstraintList(MIBParser::ValueConstraintListContext *ctx) = 0;

  virtual void enterValueConstraint(MIBParser::ValueConstraintContext *ctx) = 0;
  virtual void exitValueConstraint(MIBParser::ValueConstraintContext *ctx) = 0;

  virtual void enterValueRange(MIBParser::ValueRangeContext *ctx) = 0;
  virtual void exitValueRange(MIBParser::ValueRangeContext *ctx) = 0;

  virtual void enterLowerEndPoint(MIBParser::LowerEndPointContext *ctx) = 0;
  virtual void exitLowerEndPoint(MIBParser::LowerEndPointContext *ctx) = 0;

  virtual void enterUpperEndPoint(MIBParser::UpperEndPointContext *ctx) = 0;
  virtual void exitUpperEndPoint(MIBParser::UpperEndPointContext *ctx) = 0;

  virtual void enterSizeConstraint(MIBParser::SizeConstraintContext *ctx) = 0;
  virtual void exitSizeConstraint(MIBParser::SizeConstraintContext *ctx) = 0;

  virtual void enterAlphabetConstraint(MIBParser::AlphabetConstraintContext *ctx) = 0;
  virtual void exitAlphabetConstraint(MIBParser::AlphabetConstraintContext *ctx) = 0;

  virtual void enterContainedTypeConstraint(MIBParser::ContainedTypeConstraintContext *ctx) = 0;
  virtual void exitContainedTypeConstraint(MIBParser::ContainedTypeConstraintContext *ctx) = 0;

  virtual void enterInnerTypeConstraint(MIBParser::InnerTypeConstraintContext *ctx) = 0;
  virtual void exitInnerTypeConstraint(MIBParser::InnerTypeConstraintContext *ctx) = 0;

  virtual void enterComponentsList(MIBParser::ComponentsListContext *ctx) = 0;
  virtual void exitComponentsList(MIBParser::ComponentsListContext *ctx) = 0;

  virtual void enterComponentsListTail(MIBParser::ComponentsListTailContext *ctx) = 0;
  virtual void exitComponentsListTail(MIBParser::ComponentsListTailContext *ctx) = 0;

  virtual void enterComponentConstraint(MIBParser::ComponentConstraintContext *ctx) = 0;
  virtual void exitComponentConstraint(MIBParser::ComponentConstraintContext *ctx) = 0;

  virtual void enterComponentValuePresence(MIBParser::ComponentValuePresenceContext *ctx) = 0;
  virtual void exitComponentValuePresence(MIBParser::ComponentValuePresenceContext *ctx) = 0;

  virtual void enterComponentPresence(MIBParser::ComponentPresenceContext *ctx) = 0;
  virtual void exitComponentPresence(MIBParser::ComponentPresenceContext *ctx) = 0;

  virtual void enterValueAssignment(MIBParser::ValueAssignmentContext *ctx) = 0;
  virtual void exitValueAssignment(MIBParser::ValueAssignmentContext *ctx) = 0;

  virtual void enterValue(MIBParser::ValueContext *ctx) = 0;
  virtual void exitValue(MIBParser::ValueContext *ctx) = 0;

  virtual void enterDefinedValue(MIBParser::DefinedValueContext *ctx) = 0;
  virtual void exitDefinedValue(MIBParser::DefinedValueContext *ctx) = 0;

  virtual void enterBuiltinValue(MIBParser::BuiltinValueContext *ctx) = 0;
  virtual void exitBuiltinValue(MIBParser::BuiltinValueContext *ctx) = 0;

  virtual void enterNullValue(MIBParser::NullValueContext *ctx) = 0;
  virtual void exitNullValue(MIBParser::NullValueContext *ctx) = 0;

  virtual void enterBooleanValue(MIBParser::BooleanValueContext *ctx) = 0;
  virtual void exitBooleanValue(MIBParser::BooleanValueContext *ctx) = 0;

  virtual void enterSpecialRealValue(MIBParser::SpecialRealValueContext *ctx) = 0;
  virtual void exitSpecialRealValue(MIBParser::SpecialRealValueContext *ctx) = 0;

  virtual void enterNumberValue(MIBParser::NumberValueContext *ctx) = 0;
  virtual void exitNumberValue(MIBParser::NumberValueContext *ctx) = 0;

  virtual void enterBinaryValue(MIBParser::BinaryValueContext *ctx) = 0;
  virtual void exitBinaryValue(MIBParser::BinaryValueContext *ctx) = 0;

  virtual void enterHexadecimalValue(MIBParser::HexadecimalValueContext *ctx) = 0;
  virtual void exitHexadecimalValue(MIBParser::HexadecimalValueContext *ctx) = 0;

  virtual void enterStringValue(MIBParser::StringValueContext *ctx) = 0;
  virtual void exitStringValue(MIBParser::StringValueContext *ctx) = 0;

  virtual void enterBitOrObjectIdentifierValue(MIBParser::BitOrObjectIdentifierValueContext *ctx) = 0;
  virtual void exitBitOrObjectIdentifierValue(MIBParser::BitOrObjectIdentifierValueContext *ctx) = 0;

  virtual void enterBitValue(MIBParser::BitValueContext *ctx) = 0;
  virtual void exitBitValue(MIBParser::BitValueContext *ctx) = 0;

  virtual void enterObjectIdentifierValue(MIBParser::ObjectIdentifierValueContext *ctx) = 0;
  virtual void exitObjectIdentifierValue(MIBParser::ObjectIdentifierValueContext *ctx) = 0;

  virtual void enterNameValueList(MIBParser::NameValueListContext *ctx) = 0;
  virtual void exitNameValueList(MIBParser::NameValueListContext *ctx) = 0;

  virtual void enterNameValueComponent(MIBParser::NameValueComponentContext *ctx) = 0;
  virtual void exitNameValueComponent(MIBParser::NameValueComponentContext *ctx) = 0;

  virtual void enterNameOrNumber(MIBParser::NameOrNumberContext *ctx) = 0;
  virtual void exitNameOrNumber(MIBParser::NameOrNumberContext *ctx) = 0;

  virtual void enterNameAndNumber(MIBParser::NameAndNumberContext *ctx) = 0;
  virtual void exitNameAndNumber(MIBParser::NameAndNumberContext *ctx) = 0;

  virtual void enterDefinedMacroType(MIBParser::DefinedMacroTypeContext *ctx) = 0;
  virtual void exitDefinedMacroType(MIBParser::DefinedMacroTypeContext *ctx) = 0;

  virtual void enterDefinedMacroName(MIBParser::DefinedMacroNameContext *ctx) = 0;
  virtual void exitDefinedMacroName(MIBParser::DefinedMacroNameContext *ctx) = 0;

  virtual void enterSnmpStatusDescrReferPart(MIBParser::SnmpStatusDescrReferPartContext *ctx) = 0;
  virtual void exitSnmpStatusDescrReferPart(MIBParser::SnmpStatusDescrReferPartContext *ctx) = 0;

  virtual void enterSnmpModuleIdentityMacroType(MIBParser::SnmpModuleIdentityMacroTypeContext *ctx) = 0;
  virtual void exitSnmpModuleIdentityMacroType(MIBParser::SnmpModuleIdentityMacroTypeContext *ctx) = 0;

  virtual void enterSnmpObjectIdentityMacroType(MIBParser::SnmpObjectIdentityMacroTypeContext *ctx) = 0;
  virtual void exitSnmpObjectIdentityMacroType(MIBParser::SnmpObjectIdentityMacroTypeContext *ctx) = 0;

  virtual void enterSnmpObjectTypeMacroType(MIBParser::SnmpObjectTypeMacroTypeContext *ctx) = 0;
  virtual void exitSnmpObjectTypeMacroType(MIBParser::SnmpObjectTypeMacroTypeContext *ctx) = 0;

  virtual void enterSnmpNotificationTypeMacroType(MIBParser::SnmpNotificationTypeMacroTypeContext *ctx) = 0;
  virtual void exitSnmpNotificationTypeMacroType(MIBParser::SnmpNotificationTypeMacroTypeContext *ctx) = 0;

  virtual void enterSnmpTrapTypeMacroType(MIBParser::SnmpTrapTypeMacroTypeContext *ctx) = 0;
  virtual void exitSnmpTrapTypeMacroType(MIBParser::SnmpTrapTypeMacroTypeContext *ctx) = 0;

  virtual void enterSnmpTextualConventionMacroType(MIBParser::SnmpTextualConventionMacroTypeContext *ctx) = 0;
  virtual void exitSnmpTextualConventionMacroType(MIBParser::SnmpTextualConventionMacroTypeContext *ctx) = 0;

  virtual void enterSnmpObjectGroupMacroType(MIBParser::SnmpObjectGroupMacroTypeContext *ctx) = 0;
  virtual void exitSnmpObjectGroupMacroType(MIBParser::SnmpObjectGroupMacroTypeContext *ctx) = 0;

  virtual void enterSnmpNotificationGroupMacroType(MIBParser::SnmpNotificationGroupMacroTypeContext *ctx) = 0;
  virtual void exitSnmpNotificationGroupMacroType(MIBParser::SnmpNotificationGroupMacroTypeContext *ctx) = 0;

  virtual void enterSnmpModuleComplianceMacroType(MIBParser::SnmpModuleComplianceMacroTypeContext *ctx) = 0;
  virtual void exitSnmpModuleComplianceMacroType(MIBParser::SnmpModuleComplianceMacroTypeContext *ctx) = 0;

  virtual void enterSnmpAgentCapabilitiesMacroType(MIBParser::SnmpAgentCapabilitiesMacroTypeContext *ctx) = 0;
  virtual void exitSnmpAgentCapabilitiesMacroType(MIBParser::SnmpAgentCapabilitiesMacroTypeContext *ctx) = 0;

  virtual void enterSnmpSupportPart(MIBParser::SnmpSupportPartContext *ctx) = 0;
  virtual void exitSnmpSupportPart(MIBParser::SnmpSupportPartContext *ctx) = 0;

  virtual void enterSnmpInclusionPart(MIBParser::SnmpInclusionPartContext *ctx) = 0;
  virtual void exitSnmpInclusionPart(MIBParser::SnmpInclusionPartContext *ctx) = 0;

  virtual void enterSnmpVariationPart(MIBParser::SnmpVariationPartContext *ctx) = 0;
  virtual void exitSnmpVariationPart(MIBParser::SnmpVariationPartContext *ctx) = 0;

  virtual void enterSnmpGroupPart(MIBParser::SnmpGroupPartContext *ctx) = 0;
  virtual void exitSnmpGroupPart(MIBParser::SnmpGroupPartContext *ctx) = 0;

  virtual void enterSnmpAccessPart(MIBParser::SnmpAccessPartContext *ctx) = 0;
  virtual void exitSnmpAccessPart(MIBParser::SnmpAccessPartContext *ctx) = 0;

  virtual void enterSnmpAugmentsPart(MIBParser::SnmpAugmentsPartContext *ctx) = 0;
  virtual void exitSnmpAugmentsPart(MIBParser::SnmpAugmentsPartContext *ctx) = 0;

  virtual void enterSnmpContactPart(MIBParser::SnmpContactPartContext *ctx) = 0;
  virtual void exitSnmpContactPart(MIBParser::SnmpContactPartContext *ctx) = 0;

  virtual void enterSnmpDefValPart(MIBParser::SnmpDefValPartContext *ctx) = 0;
  virtual void exitSnmpDefValPart(MIBParser::SnmpDefValPartContext *ctx) = 0;

  virtual void enterSnmpDescrPart(MIBParser::SnmpDescrPartContext *ctx) = 0;
  virtual void exitSnmpDescrPart(MIBParser::SnmpDescrPartContext *ctx) = 0;

  virtual void enterSnmpDisplayPart(MIBParser::SnmpDisplayPartContext *ctx) = 0;
  virtual void exitSnmpDisplayPart(MIBParser::SnmpDisplayPartContext *ctx) = 0;

  virtual void enterSnmpEnterprisePart(MIBParser::SnmpEnterprisePartContext *ctx) = 0;
  virtual void exitSnmpEnterprisePart(MIBParser::SnmpEnterprisePartContext *ctx) = 0;

  virtual void enterSnmpIndexPart(MIBParser::SnmpIndexPartContext *ctx) = 0;
  virtual void exitSnmpIndexPart(MIBParser::SnmpIndexPartContext *ctx) = 0;

  virtual void enterSnmpMaxAccessPart(MIBParser::SnmpMaxAccessPartContext *ctx) = 0;
  virtual void exitSnmpMaxAccessPart(MIBParser::SnmpMaxAccessPartContext *ctx) = 0;

  virtual void enterSnmpMandatoryGroupsPart(MIBParser::SnmpMandatoryGroupsPartContext *ctx) = 0;
  virtual void exitSnmpMandatoryGroupsPart(MIBParser::SnmpMandatoryGroupsPartContext *ctx) = 0;

  virtual void enterSnmpMibGroupsPart(MIBParser::SnmpMibGroupsPartContext *ctx) = 0;
  virtual void exitSnmpMibGroupsPart(MIBParser::SnmpMibGroupsPartContext *ctx) = 0;

  virtual void enterSnmpMibCompliancePart(MIBParser::SnmpMibCompliancePartContext *ctx) = 0;
  virtual void exitSnmpMibCompliancePart(MIBParser::SnmpMibCompliancePartContext *ctx) = 0;

  virtual void enterSnmpModulesPart(MIBParser::SnmpModulesPartContext *ctx) = 0;
  virtual void exitSnmpModulesPart(MIBParser::SnmpModulesPartContext *ctx) = 0;

  virtual void enterSnmpNotificationPart(MIBParser::SnmpNotificationPartContext *ctx) = 0;
  virtual void exitSnmpNotificationPart(MIBParser::SnmpNotificationPartContext *ctx) = 0;

  virtual void enterSnmpObjectsPart(MIBParser::SnmpObjectsPartContext *ctx) = 0;
  virtual void exitSnmpObjectsPart(MIBParser::SnmpObjectsPartContext *ctx) = 0;

  virtual void enterSnmpOrganizationPart(MIBParser::SnmpOrganizationPartContext *ctx) = 0;
  virtual void exitSnmpOrganizationPart(MIBParser::SnmpOrganizationPartContext *ctx) = 0;

  virtual void enterSnmpProductPart(MIBParser::SnmpProductPartContext *ctx) = 0;
  virtual void exitSnmpProductPart(MIBParser::SnmpProductPartContext *ctx) = 0;

  virtual void enterSnmpReferPart(MIBParser::SnmpReferPartContext *ctx) = 0;
  virtual void exitSnmpReferPart(MIBParser::SnmpReferPartContext *ctx) = 0;

  virtual void enterSnmpRevisionPart(MIBParser::SnmpRevisionPartContext *ctx) = 0;
  virtual void exitSnmpRevisionPart(MIBParser::SnmpRevisionPartContext *ctx) = 0;

  virtual void enterSnmpStatusPart(MIBParser::SnmpStatusPartContext *ctx) = 0;
  virtual void exitSnmpStatusPart(MIBParser::SnmpStatusPartContext *ctx) = 0;

  virtual void enterSnmpSyntaxPart(MIBParser::SnmpSyntaxPartContext *ctx) = 0;
  virtual void exitSnmpSyntaxPart(MIBParser::SnmpSyntaxPartContext *ctx) = 0;

  virtual void enterSnmpUnitsPart(MIBParser::SnmpUnitsPartContext *ctx) = 0;
  virtual void exitSnmpUnitsPart(MIBParser::SnmpUnitsPartContext *ctx) = 0;

  virtual void enterSnmpUpdatePart(MIBParser::SnmpUpdatePartContext *ctx) = 0;
  virtual void exitSnmpUpdatePart(MIBParser::SnmpUpdatePartContext *ctx) = 0;

  virtual void enterSnmpVarPart(MIBParser::SnmpVarPartContext *ctx) = 0;
  virtual void exitSnmpVarPart(MIBParser::SnmpVarPartContext *ctx) = 0;

  virtual void enterSnmpWritePart(MIBParser::SnmpWritePartContext *ctx) = 0;
  virtual void exitSnmpWritePart(MIBParser::SnmpWritePartContext *ctx) = 0;


};

}  // namespace kmx::mib
