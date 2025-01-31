#include "Shovelshop.hpp"

Shovelshop::Shovelshop() : Workshops("Shovelshop")
{
}

Shovelshop::~Shovelshop()
{
}

bool Shovelshop::hasTool(Worker *wor)
{
    return wor->getTool<Shovel>() != NULL;
}
