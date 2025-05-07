#ifndef _COMMAND_CPP_
#define _COMMAND_CPP_

#include <string>
#include <set>

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
    command (unsigned int id, std::string date, std::string client, std::set<Articles *> articles) : \
            _id(id), _date(date), _client(client), _articles(articles)
            {
                
            }
    
    virtual ~command()
    {
        this->_articles.clear();
    }
    virtual double get_total_price()
    {
        double ret = 0;
        for (std::set<Articles *>::iterator i = this->_articles.begin(); i !=  this->_articles.end(); i++)
        {
            ret += (*i)->getPrice();
        }
        return (ret);
    }

    unsigned int getId()
    {
        return this->_id;
    }

    std::string getDate()
    {
        return this->_date;
    }

    std::string getClient()
    {
        return this->_client;
    }  

private:

    unsigned int            _id;
    std::string             _date;
    std::string             _client;
    std::set<Articles *>    _articles;
};

#endif
