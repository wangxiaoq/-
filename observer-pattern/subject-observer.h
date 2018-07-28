#ifndef SUBJECT_OBSERVER_H
#define SUBJECT_OBSERVER_H

/*
 * 观察者接口
 */
class Observer {
public:
    virtual void update(void) = 0;
};

/*
 * 主题接口
 */
class Subject {
public:
    virtual void register_observer(Observer *observer) = 0;
    virtual void unregister_observer(Observer *observer) = 0;
    virtual void notify_observers(void) = 0;
};

#endif
