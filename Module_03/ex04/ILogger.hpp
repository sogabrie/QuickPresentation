#ifndef _ILOGGER_HPP_
#define _ILOGGER_HPP_

#include <iostream>

class ILogger
{
public:
    virtual ~ILogger() = 0;
    virtual void write(const std::string & mess) = 0;

};

#endif