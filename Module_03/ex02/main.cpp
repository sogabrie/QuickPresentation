#include "shape.hpp"
#include "circle.hpp"
#include "rectangle.hpp"
#include "triangle.hpp"
#include <vector>
#include <iostream>

int main()
{
    std::vector<shape *> shp;
    shape a ;
    shp.push_back(&a);
    circle b(5);
    shp.push_back(&b);
    rectangle c(5, 10);
    shp.push_back(&c);
    triangle d(5, 10);
    shp.push_back(&d);
    for (std::vector<shape *>::iterator i = shp.begin(); i != shp.end(); i++)
    {
        std::cout << "AREA = " << (*i)->area() << std::endl;
    }
    
    return 0;
}