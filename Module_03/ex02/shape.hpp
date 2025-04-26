#ifndef _SHAPE_HPP_
#define _SHAPE_HPP_

class shape
{
public:
    shape(){}

    // shape(const shape & other)
    // {
    //     (void)other;
    // }

    virtual double area ()
    {
        return 0.0;
    }
private:

};

#endif