#include "vehicle.h"
#include "run-behavior.h"

int main(void)
{
    TwoWheelsRunBehavior two_wheels;
    ThreeWheelsRunBehavior three_wheels;
    FourWheelsRunBehavior four_wheels;

    Bicycle b("bicycle", &two_wheels);
    Tricycle t("tricycle", &three_wheels);
    Car c("car", &four_wheels);

    b.set_run_behavior(&two_wheels);
    t.set_run_behavior(&three_wheels);
    c.set_run_behavior(&four_wheels);

    b.run();
    t.run();
    c.run();

    std::cout << std::endl << "change bicycle to tricycle:" << std::endl;
    b.set_run_behavior(&three_wheels);
    b.run();

    return 0;
}
