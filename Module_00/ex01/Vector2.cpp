#include "Vector2.hpp"

Vector2::Vector2(float x, float y) : _x(x), _y(y)
{
}

Vector2::~Vector2()
{
}

float Vector2::x() const
{
    return this->_x;
}


float Vector2::y() const
{
    return this->_y;
}

bool Vector2::operator==(const Vector2 &other) const
{
    return this->_x == other._x && this->_y == other._y;
}
