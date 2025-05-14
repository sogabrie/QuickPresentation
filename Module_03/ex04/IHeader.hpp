#ifndef _IHEADER_HPP_
#define _IHEADER_HPP_

#include <iostream>

class IHeader
{
public:
    ~IHeader() {};
    virtual const std::string head() = 0;
};

#endif