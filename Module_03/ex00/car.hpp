#include <iostream>
#define SPEEDMAX 360

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

private:

    int _speed;
    Engine *_engien;

};

class Transmission
{
public:

private:
}

class SteeringWheel
{
public:

private:
}

class Brakes
{
public:
private:
}
