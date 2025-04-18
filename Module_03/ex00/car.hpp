#include <iostream>

class Engine{
public:
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

};
