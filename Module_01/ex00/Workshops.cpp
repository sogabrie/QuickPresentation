#include "Workshops.hpp"

Workshops::Workshops(const std::string &name) : _name(name)
{
    std::cout << "Canstructor Workershops\n";
}

Workshops::~Workshops()
{
    std::cout << "Destruktor Workshops\n";
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
    for (std::vector<Worker *>::iterator i = this->_workers.begin(); i != this->_workers.end(); ++i)
    {
        if (this->hasTool(*i))
        {
            (*i)->work(this);
        }else{
            this->remuvWorker(*i);
        }
    }
    
}
