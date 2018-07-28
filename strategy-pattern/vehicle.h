#ifndef VEHICLE_H
#define VEHICLE_H

#include <cstring>
#include <iostream>

#include "run-behavior.h"

#define NAMELEN (512)

/*
 * 车的基类
 */
class Vehicle {
private:
    RunBehavior *run_behavior;
    char name[NAMELEN];    /* 车名 */

public:
    void run() const { std::cout << name << ":" << std::endl; run_behavior->perform_run(); }
    void set_run_behavior(RunBehavior *r) { run_behavior = r; }
    void set_name(char *n) { strcpy(name, n); }
};

class Bicycle: public Vehicle {
public:
    Bicycle(char *n, RunBehavior *r) { set_name(n); set_run_behavior(r); }
};

class Car: public Vehicle {
public:
    Car(char *n, RunBehavior *r) { set_name(n); set_run_behavior(r); }
};

class Tricycle: public Vehicle {
public:
    Tricycle(char *n, RunBehavior *r) { set_name(n); set_run_behavior(r); }
};
#endif
