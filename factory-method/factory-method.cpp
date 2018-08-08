#include <iostream>
#include <string>
#include "factory-method.h"

void ChinaT460P::turn_on_computer(void)
{
    std::cout << get_name() << ":" << std::endl;
    std::cout << "Do not support keyboard light" << std::endl;
}

void USAT460P::turn_on_computer(void)
{
    std::cout << get_name() << ":" << std::endl;
    std::cout << "Support keyboard light" << std::endl;
}

Computer *ChinaFactory::create_computer(std::string type)
{
    if (!type.compare("t460p")) {
        return new ChinaT460P();
    } else {
        return NULL;
    }
}

Computer *USAFactory::create_computer(std::string type)
{
    if (!type.compare("t460p")) {
        return new USAT460P();
    } else {
        return NULL;
    }
}

int main(void)
{
    ChinaFactory china_factory;
    USAFactory usa_factory;

    Factory *factory = &china_factory;
    Computer *computer = factory->create_computer("t460p");
    computer->turn_on_computer();

    factory = &usa_factory;
    computer = factory->create_computer("t460p");
    computer->turn_on_computer();

    return 0;
}
