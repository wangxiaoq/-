#ifndef SIMPLE_FACTORY_H
#define SIMPLE_FACTORY_H
#include <string>
#include <iostream>

class Computer {
public:
    Computer(std::string s) { name = s; }
    const std::string &get_name(void) const { return name; }
    virtual void turn_on_computer(void) = 0;

protected:
    std::string name;
};

class T450: public Computer {
public:
    T450(): Computer("t450") {}
    virtual void turn_on_computer(void);
};

class T460: public Computer {
public:
    T460(): Computer("t460") {}
    virtual void turn_on_computer(void);
};

class SimpleFactory {
public:
    static Computer *create_computer(std::string s)
    {
        if (!s.compare("t450")) {
            return new T450();
        } else if (!s.compare("t460")) {
            return new T460();
        } else {
            return NULL;
        }
    }
};

#endif
