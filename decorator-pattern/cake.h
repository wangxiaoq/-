#ifndef CAKE_H
#define CAKE_H

#include <cstring>

#define MAX_BUF 4096

class Cake {
public:
    Cake(int p = 4, char *d = "Normal"):price(p) { strcpy(description, d); }
    virtual int get_price() { return price; }
    virtual char *get_description() { return description; }
protected:
    int price;
    char description[MAX_BUF];
};

class SpicyCake: public Cake {
public:
    SpicyCake(): Cake(4, "Spicy") {}
};

class NoSpicyCake: public Cake {
public:
    NoSpicyCake(): Cake(4, "NoSpicy") {}
};

/* all decorators should inherit this class */
class DecoratorCake:public Cake {
};

class EggCake: public DecoratorCake {
public:
    EggCake(Cake *c) { cake = c; }
    int get_price() { return 1 + cake->get_price(); }
    char *get_description();
private:
    Cake *cake;
};

char *EggCake::get_description()
{
    strcpy(description, cake->get_description());
    strcat(description, ", ");
    strcat(description, "egg");

    return description;
}

class HotdogCake: public DecoratorCake {
public:
    HotdogCake(Cake *c) { cake = c; }
    int get_price() { return 1 + cake->get_price(); }
    char *get_description();
private:
    Cake *cake;
};

char *HotdogCake::get_description()
{
    strcpy(description, cake->get_description());
    strcat(description, ", ");
    strcat(description, "hotdog");

    return description;
}

#endif
