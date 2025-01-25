#include "Worker.hpp"

Worker::Worker(const Position &coord) : _coord(coord)
{
}

Worker::~Worker()
{
}

const Position &Worker::getCoord() const
{
    return this->_coord;
}

const Statistic &Worker::getstat() const
{
    return this->_stat;
}
