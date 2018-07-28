#ifndef RUN_BEHAVIOR_H
#define RUN_BEHAVIOR_H

/*
 * 车行驶方式的接口
 */
class RunBehavior {
public:
    virtual void perform_run(void) = 0;
};

class TwoWheelsRunBehavior: public RunBehavior {
public:
    virtual void perform_run(void);
};

class FourWheelsRunBehavior: public RunBehavior {
public:
    virtual void perform_run(void);
};

class ThreeWheelsRunBehavior: public RunBehavior {
public:
    virtual void perform_run(void);
};

#endif
