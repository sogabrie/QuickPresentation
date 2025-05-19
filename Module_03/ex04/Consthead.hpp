#ifndef _CONSTHEAD_HPP_
#define _CONSTHEAD_HPP_

#include "IHeader.hpp"

class Consthead : public IHeader
{
public:
    Consthead(const std::string &mess) : _mess(mess)
    {}
    const std::string head()
    {
        return _mess;
    }

private:

    std::string _mess;

};

#endif