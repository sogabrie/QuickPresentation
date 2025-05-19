#include "Consthead.hpp"
#include "Datehead.hpp"
#include "Logfile.hpp"
#include "Logsteam.hpp"
#include <vector>
#include <string>
#include <unistd.h>
// #include <stdlib.h>
// #include <fcntl.h>
// #include <string.h>

int main()
{


    // ILogger* il1 = new Logfile("log.txt");
    // ILogger* il2 = new Logsteam(std::cout);

    std::vector<ILogger *> IL;

    IL.push_back(new Logfile("log.txt"));
    IL.push_back(new Logsteam(std::cout));
    IL.push_back(new Logsteam(std::cerr));

    std::vector<std::string> ms;
    ms.push_back("messeg 1");
    ms.push_back("messeg 2");
    ms.push_back("messeg 3");

    for (std::vector<std::string>::iterator j = ms.begin(); j != ms.end(); j++)
    {
        for (std::vector<ILogger *>::iterator i = IL.begin(); i != IL.end(); i++)
        {
            (*i)->write(*j);
        }
        
    }
    for (std::vector<ILogger *>::iterator i = IL.begin(); i != IL.end(); i++)
    {
        delete *i;
    }

    IL.clear();

    Consthead a("M Mes");
    
    IL.push_back(new Logfile("log.txt", &a));
    IL.push_back(new Logsteam(std::cout, &a));
    IL.push_back(new Logsteam(std::cerr, &a));

    for (std::vector<std::string>::iterator j = ms.begin(); j != ms.end(); j++)
    {
        for (std::vector<ILogger *>::iterator i = IL.begin(); i != IL.end(); i++)
        {
            (*i)->write(*j);
        }
        
    }
    for (std::vector<ILogger *>::iterator i = IL.begin(); i != IL.end(); i++)
    {
        delete *i;
    }

    IL.clear();

    Datehead b;
    
    IL.push_back(new Logfile("log.txt", &b));
    IL.push_back(new Logsteam(std::cout, &b));
    IL.push_back(new Logsteam(std::cerr, &b));

    for (std::vector<std::string>::iterator j = ms.begin(); j != ms.end(); j++)
    {
        for (std::vector<ILogger *>::iterator i = IL.begin(); i != IL.end(); i++)
        {
            (*i)->write(*j);
        }
        
    }
    for (std::vector<ILogger *>::iterator i = IL.begin(); i != IL.end(); i++)
    {
        delete *i;
    }


    return 0;
}