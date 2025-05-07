#include "packageReductionDiscount.hpp"
#include "thuesdayDiscount.hpp"
#include <iostream>


int main()
{
    Articles a1("a1",25);
    Articles a2("a2",20);
    Articles a3("a3",21);
    Articles a4("a4",29);
    Articles a5("a5",16);
    Articles a6("a6",12);
    Articles a7("a7",30);
    Articles a8("a8",8);
    Articles a9("a9",15);
    Articles a10("a10",10);

    std::set<Articles *> ss;

    ss.insert(&a1);
    ss.insert(&a2);
    ss.insert(&a3);
    ss.insert(&a4);
    ss.insert(&a5);

    command co0(1,"11","11",ss);

    std::cout << "command 0 get_total_price = " << co0.get_total_price() << std::endl;

    packageReductionDiscount pa0(1,"11","11",ss);

    std::cout << "packageReductionDiscount 0 get_total_price = " << pa0.get_total_price() << std::endl;

    ss.insert(&a6);
    ss.insert(&a7);
    ss.insert(&a8);
    ss.insert(&a9);
    ss.insert(&a10);

    command co(1,"11","11",ss);

    std::cout << "command get_total_price = " << co.get_total_price() << std::endl;

    packageReductionDiscount pa(1,"11","11",ss);

    std::cout << "packageReductionDiscount get_total_price = " << pa.get_total_price() << std::endl;

    thuesdayDiscount th(1,"11","11",ss);

    std::cout << "thuesdayDiscount get_total_price = " << th.get_total_price() << std::endl;

    return 0;
}