#ifndef _CAR_HPP_
#define _CAR_HPP_

#include <iostream>

#define MINANGLE -45
#define MAXENGLE 45
#define SPEEDMAX 360

enum t_gear
{
    N,
    G1,
    G2,
    G3,
    G4,
    G5,
    R

};

#define Gear enum t_gear

class Engine{
public:

    Engine()
    {
        this->_eng = false;
    }

    void    start()
    {
        _eng = true;
        std::cout << "Engine start\n"; 
    }

    void stop()
    {
        _eng = false;
        std::cout << "Engine stop\n";
    }

    bool    getstatus()
    {
        return _eng;
    }

private:
    bool    _eng;
};


class Speed
{
public:

    Speed(Engine *engien)
    {
        this->_engien = engien; 
        this->_speed = 0;
    }

    void accelerate(int speed)
    {
        if (!(this->_engien))
        {
            std::cout << "Engine stopet\n";
            return ;
        }
        if (speed + this->_speed <= SPEEDMAX && speed + this->_speed >= 0) 
        {
            this->_speed += speed;
        }else
        {
            if (speed > 0)
            {
                this->_speed = SPEEDMAX;
            }else
            {
                this->_speed = 0;
            }
        }
        std::cout << "Spedd = " << this->_speed << std::endl;
    }

    int getSpeed()
    {
        return this->_speed;
    }

    Engine * getEngine()
    {
        return this->_engien;
    }

private:

    int _speed;
    Engine *_engien;

};

class Transmission
{
public:
    Transmission()
    {
        this->_gear = N;
    }

    void shift_gears_up_n()
    {
        this->_gear = N;
    }

    void shift_gears_up()
    {
        switch (this->_gear)
        {
        case N:
            this->_gear = G1;
            break;
        case G1:
            this->_gear = G2;
            break;
        case G2:
            this->_gear = G3;
            break;
        case G3:
            this->_gear = G4;
            break;
        case G4:
            this->_gear = G5;
            break;
        case R:
            this->_gear = G1;
            break;
        }
    }

    void shift_gears_down()
    {
        switch (this->_gear)
        {
        case G1:
            this->_gear = N;
            break;
        case G2:
            this->_gear = G1;
            break;
        case G3:
            this->_gear = G2;
            break;
        case G4:
            this->_gear = G3;
            break;
        case G5:
            this->_gear = G4;
            break;
        case R:
            this->_gear = N;
            break;
        }
    }

    void reverse()
    {
        this->_gear = R;
    }

    Gear getGear()
    {
        return this->_gear;
    }

private:

    Gear _gear;
};

class SteeringWheel
{
public:
    SteeringWheel()
    {
        this->_angle = 0;
    }

    void straighten_wheels()
    {
        this->_angle = 0;
    }

    void turn_wheel(int angle)
    {
        if (angle < MINANGLE)
        {
            this->_angle = MINANGLE;
        }else if (angle > MAXENGLE) 
        {
            this->_angle = MAXENGLE;
        }else
        {
            this->_angle = angle;
        }
        std::cout << "Angle = " << this->_angle << std::endl;
    }
private:
    int _angle;
};

class Brakes
{
public:
private:
};

#endif