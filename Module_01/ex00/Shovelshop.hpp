#ifndef _SHOVERSHOP_HPP_
#define _SHOVERSHOP_HPP_

#include "Workshops.hpp"

class Shovelshop : public Workshops
{
public:
    Shovelshop();
    ~Shovelshop();
    bool hasTool(Worker *wor);
};



#endif