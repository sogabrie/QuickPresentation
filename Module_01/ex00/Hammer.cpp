#include "Hammer.hpp"

Hammer::Hammer() : Tool("Hammer", 0)
{
}

Hammer::~Hammer()
{
}

void Hammer::use()
{
    if (this->_numberOfUses < 3)
    {
        ++this->_numberOfUses;
        std::cout << "Use Hammer, numberOfUses = " << this->_numberOfUses << std::endl;
    }else{
        ++this->_numberOfUses;
        std::cout << "Use Hammer, numberOfUses = " << this->_numberOfUses  << ": tool repair."<< std::endl;
        this->_numberOfUses = 0;
    }
}
