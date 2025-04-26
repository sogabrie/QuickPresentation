#ifndef _RECTANGLE_HPP_
#define _RECTANGLE_HPP_

#include "shape.hpp"

class rectangle : public shape
{
public:
    rectangle() : _x(0), _y(0) {}
    rectangle(const rectangle & other)
    {
        this->_x = other._x;
        this->_y = other._y;
    }
    rectangle(double x, double y) : _x(x), _y(y) {}

    void setX(const double & x)
    {
        this->_x = x;
    }
    void setY(const double & y)
    {
        this->_y = y;
    }
    double getX()
    {
        return this->_x;
    }
    double getY()
    {
        return this->_y;
    }
    double area ()
    {
        return this->_x * this->_y;
    }

private:
    double _x;
    double _y;
};

#endif