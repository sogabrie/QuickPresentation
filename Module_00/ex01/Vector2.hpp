#ifndef _VECTOR_HPP_
#define _VECTOR_HPP_

class Vector2
{
private:
    float   _x;
    float   _y;
public:
            Vector2(float x, float y);
            ~Vector2();
    float   x() const;
    float   y() const;
    bool    operator==(const Vector2 &other) const;

};

#endif