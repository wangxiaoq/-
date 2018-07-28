#ifndef CONSUMER_H
#define CONSUMER_H

#include "subject-observer.h"

class Consumer: public Observer {
private:
    Subject *subject;
public:
    Consumer(Subject *subject) { this->subject = subject; subject->register_observer(this); }
    virtual void update(void);
    void set_subject(Subject *subject) { this->subject = subject; }
};

#endif
