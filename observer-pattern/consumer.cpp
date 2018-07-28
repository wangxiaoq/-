#include <iostream>
#include "consumer.h"
#include "agent.h"

void Consumer::update(void)
{
    Agent *agent = (Agent *)subject;
    agent->clear_new_house();
    std::cout << "receive notify from agent" << std::endl;
}
