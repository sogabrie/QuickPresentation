#ifndef _PACKAGEREDUCTIONDISCOUNT_HPP_
#define _PACKAGEREDUCTIONDISCOUNT_HPP_

#include "command.hpp"

class packageReductionDiscount : public command
{
public:
    packageReductionDiscount(unsigned int id, std::string date, std::string client, std::set<Articles *> articles):
        command(id, date, client, articles)
        {

        }
    double get_total_price()
    {
        if(command::get_total_price() > 150)
            return command::get_total_price() - 10;
        return command::get_total_price();
    }
};


#endif