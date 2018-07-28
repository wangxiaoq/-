#ifndef AGENT_H
#define AGENT_H

#include <vector>
#include "subject-observer.h"

class Agent: public Subject {
private:
    std::vector<Observer *> observers;
    bool has_new_house;

public:
    Agent() { has_new_house = false; }
    virtual void register_observer(Observer *observer);
    virtual void unregister_observer(Observer *observer);
    virtual void notify_observers(void);
    void new_house_coming(void);
    void clear_new_house(void);
};

#endif
