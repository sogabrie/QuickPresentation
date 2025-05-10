#ifndef _HOURLYEMPLOYEE_HPP_
#define _HOURLYEMPLOYEE_HPP_

#include "employee.hpp"

class ContractEmployee : public employee
{
public:
    int executeWorkday()
    {
        return employee::executeWorkday();
    }
};

class Apprentice : public ContractEmployee
{
public:
    Apprentice()
    {
        this->_school = 0;
    }
    
    int executeWorkday()
    {
        this->_school += 4;
        return employee::executeWorkday();
    }

    int getSchool()
    {
        return this->_school;
    }
private:
    int _school;

};


#endif