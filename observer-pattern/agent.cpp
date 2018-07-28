#include "agent.h"
#include <vector>

void Agent::register_observer(Observer *observer)
{
    observers.push_back(observer);
}

void Agent::unregister_observer(Observer *observer)
{
    std::vector<Observer *>::iterator iter;

    for (iter = observers.begin(); iter != observers.end(); ++iter) {
        if (*iter == observer) {
            observers.erase(iter);
            break;
        }
    }
}

void Agent::notify_observers(void)
{
    std::vector<Observer *>::iterator iter;

    for (iter = observers.begin(); iter != observers.end(); ++iter) {
        (*iter)->update();
    }
}

void Agent::clear_new_house(void)
{
    has_new_house = 0;
}

void Agent::new_house_coming(void)
{
    has_new_house = 1;
    notify_observers();
}
