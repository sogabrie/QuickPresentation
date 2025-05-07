#ifndef _THUESDAYDISCOUNT_HPP_
#define _THUESDAYDISCOUNT_HPP_

#include "command.hpp"

class thuesdayDiscount : public command
{
public:

    thuesdayDiscount(unsigned int id, std::string date, std::string client, std::set<Articles *> articles):
    command(id, date, client, articles)
    {

    }
    double get_total_price()
    {
        return command::get_total_price() * 0.9;
    }

};

#endif