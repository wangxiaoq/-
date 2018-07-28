#include <iostream>
#include "run-behavior.h"

void TwoWheelsRunBehavior::perform_run(void)
{
    std::cout << "Use **2** wheels run" << std::endl;
}

void FourWheelsRunBehavior::perform_run(void)
{
    std::cout << "Use **4** wheels run" << std::endl;
}

void ThreeWheelsRunBehavior::perform_run(void)
{
    std::cout << "Use **3** wheels run" << std::endl;
}
