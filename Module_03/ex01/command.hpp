#ifndef _COMMAND_CPP_
#define _COMMAND_CPP_

#include <string>
#include <map>

class  Articles
{
public:

    Articles(std::string name, double price) : _name(name), _price(price)
    {

    }

    std::string getName()
    {
        return this->_name;
    }

    double  getPrice()
    {
        return this->_price;
    }

private:
    std::string _name;
    double      _price;
};

class command
{
public:
    command ()

private:

    unsigned int                _id;
    std::string                 _date;
    std::string                 _client;
    std::map<Articles *,int>    _articles;
};

#endif
