#include "hourlyEmployee.hpp"
#include "salariedEmployee.hpp"
#include "employeeManagement.hpp"

int main()
{
    ContractEmployee    emp1;
    ContractEmployee    emp2;

    TempWorker          emp3;
    TempWorker          emp4;

    Apprentice          emp5;
    Apprentice          emp6;

    employeeManagement  me;

    me.addEmployee(&emp1);
    me.addEmployee(&emp2);
    me.addEmployee(&emp3);
    me.addEmployee(&emp4);
    me.addEmployee(&emp5);
    me.addEmployee(&emp6);
    
    me.calculatePayroll();

    me.executeWorkday();

    me.calculatePayroll();

    Day = THURSDAY;

    me.executeWorkday();

    std::cout << "emp1 hous = " << emp1.getHourlyValu() << std::endl;
    std::cout << "emp3 hous = " << emp3.getHourlyValu() << std::endl;
    std::cout << "emp5 hous = " << emp5.getHourlyValu() << std::endl;
    std::cout << "emp5 shcol = " << emp5.getSchool() << std::endl;

    Day = SATURDAY;
    me.calculatePayroll();
    me.executeWorkday();

    std::cout << "emp1 hous = " << emp1.getHourlyValu() << std::endl;
    std::cout << "emp3 hous = " << emp3.getHourlyValu() << std::endl;
    std::cout << "emp5 hous = " << emp5.getHourlyValu() << std::endl;
    std::cout << "emp5 shcol = " << emp5.getSchool() << std::endl;
    me.calculatePayroll();
    return 0;
}