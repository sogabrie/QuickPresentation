#ifndef _LOGFILE_HPP_
#define _LOGFILE_HPP_

#include <fstream>
#include <iostream>

#include "IHeader.hpp"
#include "ILogger.hpp"


class Logfile : public ILogger
{
public:
    Logfile(const std::string & name, IHeader * head = NULL) : _head(head) 
    {
        this->_file.open(name.c_str(), std::ios::app);
    }
    ~Logfile()
    {
        this->_file.close();
    };
    void write(const std::string & mess)
    {
        if(!this->_head)
        {
            this->_file << mess << std::endl;
        }else{
            this->_file << this->_head->head() << " " << mess << std::endl;
        }
    }
private:
    std::ofstream    _file;
    IHeader *       _head;
};
#endif