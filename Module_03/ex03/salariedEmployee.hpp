#ifndef _SALARIEDEMPLOYEE_HPP_
#define _SALARIEDEMPLOYEE_HPP_

#include "employee.hpp"

class TempWorker : public employee
{
public:
    int executeWorkday()
    {
        if (Day == SUNDAY || Day == SATURDAY)
            return employee::getHourlyValu();
        else 
        {
            return employee::executeWorkday();
        }
    }
};

#endif