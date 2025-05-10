#ifndef _EMPLOYEEMANAGEMENT_HPP_
#define _EMPLOYEEMANAGEMENT_HPP_

#include <iostream>
#include <list>
#include "employee.hpp"

class employeeManagement
{
public:
    ~employeeManagement()
    {
        this->_employees.clear();
    }

    void addEmployee(employee* emp)
    {
        this->_employees.push_back(emp);
    }

    void removeEmployee(employee* emp)
    {
        this->_employees.remove(emp);
    }

    void executeWorkday()
    {
        for (std::list<employee *>::iterator i = this->_employees.begin(); i != this->_employees.end(); i++)
        {
            (*i)->executeWorkday();
        }
    }

    void calculatePayroll()
    {
        int res = 0;
        for (std::list<employee *>::iterator i = this->_employees.begin(); i != this->_employees.end(); i++)
        {
            res += (*i)->getHourlyValu();
        }
        std::cout << "Hourly = " << res << std::endl;
    }

private:

    std::list<employee *>   _employees;

};


#endif