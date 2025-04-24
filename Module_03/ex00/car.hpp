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
        // std::cout << "Engine start\n"; 
    }

    void stop()
    {
        _eng = false;
        // std::cout << "Engine stop\n";
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
            // std::cout << "Engine stopet\n";
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
        // std::cout << "Spedd = " << this->_speed << std::endl;
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
        case G5:
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
        case N:
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
        // std::cout << "Angle = " << this->_angle << std::endl;
    }

    int getAngle()
    {
        return this->_angle;
    }
private:
    int _angle;
};

class Brakes
{
public:

    Brakes (Engine * engine, Speed * speed, Transmission * transmission)
    {
        this->_engine = engine;
        this->_spead = speed;
        this->_transmission = transmission;
    }

    void    apply_force_on_brakes(int force)
    {
        this->_spead->accelerate(-force);
    }

    void apply_emergency_brakes()
    {
        this->_engine->stop();
        this->_spead->accelerate(-SPEEDMAX);
        this->_transmission->shift_gears_up_n();
    }

private:
    Engine *        _engine;
    Speed *         _spead;
    Transmission *  _transmission;
};

class Car
{
public:
    Car() : _engin(), _speed(&_engin), _transmission(), _steeringwheel(), _brakes(&_engin, &_speed, &_transmission)
    {
    }

    void    start()
    {
        this->_engin.start();
        std::cout << "funqcion start" << std::endl;
        std::cout << "\tsped = " << this->_speed.getSpeed() << " Steering Wheel = " << \
            this->_steeringwheel.getAngle() << std::endl;
    }

    void    stop()
    {
        this->_engin.stop();
        std::cout << "funqcion stop" << std::endl;
        std::cout << "\tsped = " << this->_speed.getSpeed() << " Steering Wheel = " << \
            this->_steeringwheel.getAngle() << std::endl;
    }

    void    accelerate(int speed)
    {
        this->_speed.accelerate(speed);
        std::cout << "funqcion accelerate" << std::endl;
        std::cout << "\tsped = " << this->_speed.getSpeed() << " Steering Wheel = " << \
            this->_steeringwheel.getAngle() << std::endl;
    }

    void    shift_gears_up()
    {
        this->_transmission.shift_gears_up();
        std::cout << "funqcion shift_gears_up" << std::endl;
        std::cout << "\tsped = " << this->_speed.getSpeed() << " Steering Wheel = " << \
            this->_steeringwheel.getAngle() << std::endl;
    }

    void    shift_gears_down()
    {
        this->_transmission.shift_gears_down();
        std::cout << "funqcion shift_gears_down" << std::endl;
        std::cout << "\tsped = " << this->_speed.getSpeed() << " Steering Wheel = " << \
            this->_steeringwheel.getAngle() << std::endl;
    }

    void    reverse()
    {
        this->_transmission.reverse();
        std::cout << "funqcion reverse" << std::endl;
        std::cout << "\tsped = " << this->_speed.getSpeed() << " Steering Wheel = " << \
            this->_steeringwheel.getAngle() << std::endl;
    }

    void    turn_wheel(int angle)
    {
        this->_steeringwheel.turn_wheel(angle);
        std::cout << "funqcion turn_wheel" << std::endl;
        std::cout << "\tsped = " << this->_speed.getSpeed() << " Steering Wheel = " << \
            this->_steeringwheel.getAngle() << std::endl;
    }

    void    straighten_wheels()
    {
        this->_steeringwheel.straighten_wheels();
        std::cout << "funqcion straighten_wheels" << std::endl;
        std::cout << "\tsped = " << this->_speed.getSpeed() << " Steering Wheel = " << \
            this->_steeringwheel.getAngle() << std::endl;
    }

    void    apply_force_on_brakes(int force)
    {
        this->_brakes.apply_force_on_brakes(force);
        std::cout << "funqcion apply_force_on_brakes" << std::endl;
        std::cout << "\tsped = " << this->_speed.getSpeed() << " Steering Wheel = " << \
            this->_steeringwheel.getAngle() << std::endl;
    }

    void    apply_emergency_brakes()
    {
        this->_brakes.apply_emergency_brakes();
        std::cout << "funqcion apply_emergency_brakes" << std::endl;
        std::cout << "\tsped = " << this->_speed.getSpeed() << " Steering Wheel = " << \
            this->_steeringwheel.getAngle() << std::endl;
    }

private:
    Engine          _engin;
    Speed           _speed;
    Transmission    _transmission;
    SteeringWheel   _steeringwheel;
    Brakes          _brakes;
};

#endif