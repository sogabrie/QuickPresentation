#ifndef _WOEKSHOPS_HPP_
#define _WOEKSHOPS_HPP_

#include "Worker.hpp"

class Workshops
{
private:
    std::string             _name;
    std::vector<Worker *>   _workers;
public:
    Workshops(const std::string & name);
    virtual ~Workshops();
    virtual bool hasTool(Worker *wor);

    const std::string getName() const;
    bool    addWorker(Worker *wor);
    bool    remuvWorker(Worker *wor);
    void    executeWorkDay();
    
};



#endif