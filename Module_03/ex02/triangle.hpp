#ifndef _TRIANGLE_HPP_
#define _TRIANGLE_HPP_

#include "shape.hpp"

class triangle : public shape    
{
public:
    triangle(): _a(0), _b(0) {}
    triangle(const triangle & other)
    {
        this->_a = other._a;
        this->_b = other._b;
    }
    triangle(double a, double b) : _a(a), _b(b) {}
    double area ()
    {
        return (this->_a * this->_b) / 2;
    }
    void setA(const double & a)
    {
        this->_a = a;
    }
    void setB(const double & b)
    {
        this->_b = b;
    }
    double getA()
    {
        return this->_a;
    }
    double getB()
    {
        return this->_b;
    }
private:
    double _a;
    double _b;
};

#endif