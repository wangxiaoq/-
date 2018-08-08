#ifndef FACTORY_METHOD_H
#define FACTORY_METHOD_H

#include <string>

class Computer {
public:
    Computer(std::string name) { this->name = name; keyboard_light = false; }
    virtual void turn_on_computer(void) = 0;
    const std::string &get_name(void) const { return name; }

protected:
    std::string name;
    bool keyboard_light;
};

class ChinaT460P: public Computer {
public:
    ChinaT460P(): Computer("china t460p") { keyboard_light = false; }
    virtual void turn_on_computer(void);
};

class USAT460P: public Computer {
public:
    USAT460P(): Computer("USA t460p") { keyboard_light = true; }
    virtual void turn_on_computer();
};

class Factory {
public:
    virtual Computer *create_computer(std::string type) = 0;
};

class ChinaFactory: public Factory {
public:
    virtual Computer *create_computer(std::string type);
};

class USAFactory: public Factory {
public:
    virtual Computer *create_computer(std::string type);
};
#endif
