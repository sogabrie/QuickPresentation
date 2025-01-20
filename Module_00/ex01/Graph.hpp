#ifndef _GRAPH_HPP_
#define _GRAPH_HPP_

#include <iostream>
#include "Vector2.hpp"
#include <vector>

class Graph
{
private:
    const Vector2           _size;
    std::vector<Vector2>    _points;
    int     getRaz(float nu);
public:
            Graph(const Vector2 & size);
            ~Graph();
    Vector2 getSize();
    bool    addPoint(const Vector2 & po);
    void    print();   

};

#endif