#include "Shovel.hpp"

Shovel::Shovel() : Tool("Shovel", 0)
{
}

Shovel::~Shovel()
{
}

void Shovel::use()
{
    if (this->_numberOfUses < 3)
    {
        ++this->_numberOfUses;
        std::cout << "Use shovel, numberOfUses = " << this->_numberOfUses << std::endl;
    }else{
        ++this->_numberOfUses;
        std::cout << "Use shovel, numberOfUses = " << this->_numberOfUses  << ": tool repair."<< std::endl;
        this->_numberOfUses = 0;
    }
}
