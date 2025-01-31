#include "Workshops.hpp"

Workshops::Workshops(const std::string &name) : _name(name)
{
}

Workshops::~Workshops()
{
}

bool Workshops::hasTool(Worker *wor)
{
    return wor->getTool<Tool>() != NULL;
}

const std::string Workshops::getName() const
{
    return this->_name;
}

bool Workshops::addWorker(Worker *wor)
{
    if (this->hasTool(wor))
    {
        wor->addWorkshop(this);
        this->_workers.push_back(wor);
        return false;
    }
    return false;
}

bool Workshops::remuvWorker(Worker *wor)
{
    wor->removeshop(this);
    if (std::find(this->_workers.begin(), this->_workers.end(), wor) == this->_workers.end())
    {
        return false;
    }
    this->_workers.erase(std::find(this->_workers.begin(), this->_workers.end(), wor));
    return true;
}

void Workshops::executeWorkDay()
{
    
}
