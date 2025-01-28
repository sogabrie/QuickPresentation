#ifndef _SHOVEL_HPP_
#define _SHOVEL_HPP_


#include "Tool.hpp"

class Shovel : public Tool
{
private:
public:
    Shovel();
    ~Shovel();

    void    use();
};



#endif