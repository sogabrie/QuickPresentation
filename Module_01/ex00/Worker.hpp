#ifndef _WORKER_HPP_
#define _WORKER_HPP_

#include "Position.hpp"
#include "Statistic.hpp"
#include <vector>
#include  <algorithm>

#include "Shovel.hpp"
#include "Hammer.hpp"

class Workshops;

class Worker
{
private:
    std::string         _name;
    Position            _coord;
    Statistic           _stat;
    std::vector<Tool *> _tools;
    std::vector<Workshops *> _shops;
    // Shovel      *_shovel;
public:
    Worker(std::string name, const Position & coord = Position(1,1,1));
    ~Worker();

    bool    addTool(Tool *tool);
    bool    removeTool(Tool * tool);

    bool    addWorkshop(Workshops *shop);
    bool    removeshop(Workshops *shop);

    const   std::string& getName() const;
    const   Position& getCoord() const;
    const   Statistic& getstat() const;
    template<class T>
    Tool* getTool() {
        for (std::vector<Tool *>::iterator i = this->_tools.begin(); i != this->_tools.end(); ++i) {
            if (dynamic_cast<T*>(*i))
                return *i;
        }
        return NULL;
    }

    void    work(Workshops * shop);
};


#endif