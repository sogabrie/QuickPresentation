#ifndef _WORKER_HPP_
#define _WORKER_HPP_

#include "Position.hpp"
#include "Statistic.hpp"
#include <vector>
#include  <algorithm>

#include "Shovel.hpp"
#include "Hammer.hpp"

class Worker
{
private:
    std::string         _name;
    Position            _coord;
    Statistic           _stat;
    std::vector<Tool *> _tools;
    // Shovel      *_shovel;
public:
    Worker(std::string name, const Position & coord = Position(1,1,1));
    ~Worker();

    bool    addTool(Tool *tool);
    bool    removeTool(Tool * tool);

    const   std::string& getName() const;
    const   Position& getCoord() const;
    const   Statistic& getstat() const;
    template<class T>
    Tool* getTool() {
        for (std::vector<Tool *>::iterator i = tools_.begin(); i != tools_.end(); ++i) {
            if (dynamic_cast<T*>(*i))
                return *i;
        }
        return NULL;
    }
};


#endif