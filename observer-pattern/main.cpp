#include <iostream>
#include "agent.h"
#include "consumer.h"

int main(void)
{
    Agent agent;
    Consumer c1(&agent), c2(&agent);

    agent.new_house_coming();

    std::cout << std::endl << "unregister a consumer..." << std::endl;

    agent.unregister_observer(&c1);

    agent.new_house_coming();

    std::cout << std::endl << "register a new consumer..." << std::endl;

    agent.register_observer(&c1);
    agent.new_house_coming();

    return 0;
}
