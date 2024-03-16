#ifndef AST_ENTITY_TYPE_HPP
#define AST_ENTITY_TYPE_HPP

const int INT_MEM = 4;
const int RA_MEM = 4;
// TODO: look into using the parser enum for data types
enum entity_type
{
    INVALID,
    FUNCTION,
    VARIABLE,
    VARIABLE_ASSIGN,
    ARRAY,
    ENUM_SPECIFIER,
    ENUMERATOR,
    POINTER,
    UNARY,
    // todo add more entity types
};

enum data_type
{
    _INVALID,
    _int,
    _void,
    _unsigned,
    _char,
    _float,
    _double
    // _ptr TODO: somewhere else.
};

// MIGHT DELETE
struct function_properties
{
    std::unordered_map<std::string, entity_type>
        funct_params;         //(change : just storing identifiers) //Change to
                              //<string, param>
    entity_type return_type;  // todo
};

#endif