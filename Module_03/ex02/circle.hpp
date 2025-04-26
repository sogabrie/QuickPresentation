#ifndef _CIRCLE_HPP_
#define _CIRCLE_HPP_

#include "shape.hpp"
#include <cmath>

class circle : public shape
{
public:
    circle(): _r(0){}

    circle(double r) : _r(r)
    {}

    circle (const circle & other)
    {
        this->_r = other._r;
    }

    double area ()
    {
        return pow(this->_r, 2) * static_cast<double>(M_PI);
    }
    void setR(const double & r)
    {
        this->_r = r;
    }
    double getR()
    {
        return this->_r;
    }
private:
    double _r;
};


#endif