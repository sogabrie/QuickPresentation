#include "Graph.hpp"

int Graph::getRaz(float nu)
{
    int i = 0;
    int n(nu);
    if (n == 0 || n < 0) return 1;
    for (; n > 0; n = n / 10, ++i);
    return i;
}

Graph::Graph(const Vector2 &size) : _size(size)
{
}

Graph::~Graph()
{
}

Vector2 Graph::getSize()
{
    return this->_size;
}

bool Graph::addPoint(const Vector2 &po)
{
    if(po.x() < 0 || po.x() > this->_size.x() || po.y() < 0 || po.y() > this->_size.y())
        return false;
    this->_points.push_back(po);
    return true;
}

void Graph::print()
{
    std::cout << "Graph size = [" << this->_size.x() << "," << this->_size.y() << "]\n";
    int raz = this->getRaz(this->_size.y());
    for (float i = this->_size.y(); i >= 0; --i)
    {
        std::cout << "<&";
        for (int r = this->getRaz(i); r < raz; ++r)
        {
            std::cout << "_";
        }
        std::cout << i;
        for (float j = 0 ; j <= this->_size.x() ; ++j)
        {
            if (std::find(this->_points.begin(),this->_points.end(), Vector2(j,i)) == this->_points.end())
            {
                std::cout << ".";
            }else{
                std::cout << "x";
            }
        }
        std::cout << std::endl;
    }
    for (int i = 0; i < this->getRaz(this->_size.x()); i++)
    {
        int j = 0;
        std::cout << "<&   ";
        for (; j < int(pow(10,i)) && i != 0; ++j)
        {
            std::cout << " ";
        }
        for (; j <= int(this->_size.x()) ; ++j)
        {
            int y = 0;
            y = j / int(pow(10,i)) % 10;
            std::cout << y;
        }
        std::cout << std::endl;
    }
}
