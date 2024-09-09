
// Generated from MIB.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"


namespace kmx::mib {


class  MIBLexer : public antlr4::Lexer {
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

  explicit MIBLexer(antlr4::CharStream *input);

  ~MIBLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

}  // namespace kmx::mib
