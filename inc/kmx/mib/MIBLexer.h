
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
    AGENT_CAPABILITIES = 19, ANY = 20, APPLICATION = 21, AUGMENTS = 22, 
    BEGIN = 23, BIT = 24, BITS = 25, BOOLEAN = 26, BY = 27, CHOICE = 28, 
    COMPONENT = 29, COMPONENTS = 30, CONTACT_INFO = 31, DEFAULT = 32, DEFINED = 33, 
    DEFINITIONS = 34, DEFVAL = 35, DESCRIPTION = 36, DISPLAY_HINT = 37, 
    END = 38, ENTERPRISE = 39, ENUMERATED = 40, EXPLICIT = 41, EXPORTS = 42, 
    FALSE = 43, FROM = 44, GROUP = 45, IDENTIFIER = 46, IMPLICIT = 47, IMPORTS = 48, 
    INCLUDES = 49, INDEX = 50, INTEGER = 51, LAST_UPDATED = 52, MANDATORY_GROUPS = 53, 
    MACRO = 54, MAX = 55, MAX_ACCESS = 56, MIN = 57, MINUS_INFINITY = 58, 
    MODULE = 59, MODULES = 60, MODULE_COMPLIANCE = 61, MODULE_IDENTITY = 62, 
    NOT_ACCESSIBLE = 63, NOTIFICATION_GROUP = 64, NOTIFICATION_TYPE = 65, 
    NOTIFICATIONS = 66, NULL_ = 67, OBJECT = 68, OBJECT_GROUP = 69, OBJECT_IDENTITY = 70, 
    OBJECT_TYPE = 71, OBJECTS = 72, OCTET = 73, OF = 74, OPTIONAL = 75, 
    ORGANIZATION = 76, PLUS_INFINITY = 77, PRESENT = 78, PRIVATE = 79, PRODUCT_RELEASE = 80, 
    READ_CREATE = 81, READ_ONLY = 82, READ_WRITE = 83, REAL = 84, REFERENCE = 85, 
    REVISION = 86, SEQUENCE = 87, SET = 88, SIZE = 89, STATUS = 90, STRING = 91, 
    SUPPORTS = 92, SYNTAX = 93, TAGS = 94, TEXTUAL_CONVENTION = 95, TRAP_TYPE = 96, 
    TRUE = 97, UNITS = 98, UNIVERSAL = 99, VARIABLES = 100, VARIATION = 101, 
    WITH = 102, WRITE_SYNTAX = 103, BINARY_STRING = 104, HEXADECIMAL_STRING = 105, 
    QUOTED_STRING = 106, IDENTIFIER_STRING = 107, INTEGER_STRING = 108, 
    NUMBER_STRING = 109, WHITESPACE = 110, COMMENT = 111
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
