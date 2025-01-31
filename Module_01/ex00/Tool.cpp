#include "Tool.hpp"

Tool::Tool(std::string type, int number) : _type(type), _numberOfUses(number)
{
    std::cout << "Canstructor Tool\n";
}

Tool::~Tool()
{
    std::cout << "Destruktor Tool\n";
}

const std::string &Tool::getType() const
{
    return this->_type;
}

const int &Tool::getUses() const
{
    return this->_numberOfUses;
}
