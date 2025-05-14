#ifndef _LOGSTREAM_HPP_
#define _LOGSTREAM_HPP_

#include <fstream>
#include <iostream>

#include "IHeader.hpp"
#include "ILogger.hpp"

class Logsteam
{
public:
    Logsteam(std::ostream & ss, IHeader * head) : _ss(ss), _head(head)
    {

    }
    void write(const std::string & mess)
    {
        if(this->_head)
        {
            this->_ss << mess << std::endl;
        }else{
            this->_ss << this->_head->head() << mess << std::endl;
        }
    }
private:
    std::ostream & _ss;
    IHeader     * _head;
};

#endif
