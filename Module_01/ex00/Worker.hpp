#ifndef _WORKER_HPP_
#define _WORKER_HPP_

#include "Position.hpp"
#include "Statistic.hpp"

class Worker
{
private:
    Position    _coord;
    Statistic   _stat;
public:
    Worker(const Position & coord = Position(1,1,1));
    ~Worker();

    const   Position& getCoord() const;
    const   Statistic& getstat() const;
};


#endif