#ifndef _DATEHEAD_HPP_
#define _DATEHEAD_HPP_

#include "IHeader.hpp"
#include <ctime>

class Datehead : public IHeader
{
public:
    Datehead(){};
    const std::string head()
    {
        std::time_t now = std::time(NULL);
        char buffer[100];
        std::strftime(buffer, sizeof(buffer), "%A %c", std::localtime(&now));
        return std::string(buffer);
    }
private:
};

#endif