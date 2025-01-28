#include "Worker.hpp"

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
    if (std::find(this->_tools.begin(), this->_tools.end(), tool) == this->_tools.end());
        return false;
    this->_tools.erase(std::find(this->_tools.begin(), this->_tools.end(), tool));
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
