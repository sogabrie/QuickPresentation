#include "Worker.hpp"
#include "Hammershop.hpp"
#include "Shovelshop.hpp"

Worker::Worker(std::string name, const Position &coord) : _name(name), _coord(coord)
{
}

Worker::~Worker()
{
}

bool Worker::addTool(Tool *tool)
{
    this->_tools.push_back(tool);
    return true;
}

bool Worker::removeTool(Tool *tool)
{
    if (std::find(this->_tools.begin(), this->_tools.end(), tool) == this->_tools.end())
        return false;
    this->_tools.erase(std::find(this->_tools.begin(), this->_tools.end(), tool));
    return true;
}

bool Worker::addWorkshop(Workshops *shop)
{
    this->_shops.push_back(shop);
    return true;
}

bool Worker::removeshop(Workshops *shop)
{
    if (std::find(this->_shops.begin(), this->_shops.end(), shop) == this->_shops.end())
        return false;
    this->_shops.erase(std::find(this->_shops.begin(), this->_shops.end(), shop));
    return true;
}

const std::string &Worker::getName() const
{
    return this->_name;
}

const Position &Worker::getCoord() const
{
    return this->_coord;
}

const Statistic &Worker::getstat() const
{
    return this->_stat;
}

void Worker::work(Workshops *shop)
{
    for (std::vector<Workshops *>::iterator i = this->_shops.begin(); i != this->_shops.end(); ++i) 
    {
        if (shop == *i)
        {
            std::cout << "Worker " << this->_name << " hav tools and Her works in " << shop->getName() << std::endl;
            return;
        }
    }
    std::cout  << "there is no such place of work" << std::endl;
}
