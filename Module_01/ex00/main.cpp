#include "Worker.hpp"
#include "Hammershop.hpp"
#include "Shovelshop.hpp"


int main(void)
{
    Shovel Sho1;
    Hammer ham1;

    {
        Worker Arm("Arm");
        Arm.addTool(&Sho1);

        std::cout << "Shell 0\n";

        Worker Art("Art");
        Art.addTool(&Sho1);
    }
    std::cout << "Shell 1\n";

    Worker Arm("Arm");
    Arm.addTool(&Sho1);

    Worker Art("Art");
    Art.addTool(&Sho1);

    Worker Arm2("Arm2");
    Arm.addTool(&ham1);

    Worker Art2("Art2");
    Art.addTool(&ham1);

    Hammershop shopH;
    Shovelshop shopS;

    shopH.addWorker(&Arm);
    shopH.addWorker(&Art);
    shopH.addWorker(&Arm2);
    shopH.addWorker(&Arm2);

    shopS.addWorker(&Arm);
    shopS.addWorker(&Art);
    shopS.addWorker(&Arm2);
    shopS.addWorker(&Arm2);

    std::cout << "Shell 2\n";

    shopH.executeWorkDay();

    std::cout << "Shel 3\n";

    shopS.executeWorkDay();

    std::cout << "Shel 4\n";

    return (0);
}