#include <iostream>
#include <string>

#include "simple-factory.h"

void T450::turn_on_computer(void)
{
    std::cout << get_name() << " run..." << std::endl;
}

void T460::turn_on_computer(void)
{
    std::cout << get_name() << " run..." << std::endl;
}

int main(void)
{
    Computer *computer = SimpleFactory::create_computer("t450");
    computer->turn_on_computer();

    computer = SimpleFactory::create_computer("t460");
    computer->turn_on_computer();

    return 0;
}
