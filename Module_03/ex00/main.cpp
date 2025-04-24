#include "car.hpp"

int main()
{
    Car car1;
    car1.start();
    car1.shift_gears_up();
    car1.accelerate(20);
    car1.reverse();
    car1.shift_gears_up();
    car1.shift_gears_up();
    car1.accelerate(50);
    car1.shift_gears_up();
    car1.accelerate(50);
    car1.turn_wheel(20);
    car1.straighten_wheels();
    car1.shift_gears_down();
    car1.apply_force_on_brakes(50);
    car1.apply_emergency_brakes();
    car1.stop();
    return 0;
}