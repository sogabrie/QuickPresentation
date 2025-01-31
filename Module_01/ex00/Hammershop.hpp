#ifndef _HUMMERSHOP_HPP_
#define _HUMMERSHOP_HPP_

#include "Workshops.hpp"

class Hammershop : public Workshops
{
public:
    Hammershop();
    ~Hammershop();
    bool hasTool(Worker *wor);
};



#endif