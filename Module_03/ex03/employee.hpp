#ifndef _EMPLOYEE_HPP_
#define _EMPLOYEE_HPP_


enum Week
{
    MONDAY,
    TUESDAY,
    WEDNSEDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
}; Week Day = MONDAY;


class employee
{
public:
    employee ()
    {
        this->_hourlyValu = 0;
    }

    virtual int executeWorkday()
    {
        this->_hourlyValu += 7;
        return this->_hourlyValu;
    }

    int getHourlyValu()
    {
        return this->_hourlyValu;
    }

private:

    int _hourlyValu;
};

#endif