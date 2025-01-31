#include "Hammershop.hpp"

Hammershop::Hammershop() : Workshops("Hammershop")
{
}

Hammershop::~Hammershop()
{
}

bool Hammershop::hasTool(Worker *wor)
{
    return wor->getTool<Hammer>() != NULL;
}
