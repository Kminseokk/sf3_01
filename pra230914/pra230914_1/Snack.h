#pragma once

#include <iostream>
#include <string>

class Snack {
protected:
    int price;
    std::string name;
    std::string maker;
    static int count;

public:
    Snack();
    virtual ~Snack();

    static int get_count();
    std::string get_name();

    virtual void show_info(); //자식에게 오버라이딩

};

class Candy : public Snack {
    std::string flavor;

public:
    Candy(std::string flavor);

    void show_info();

};

class Chocolate : public Snack {
    std::string shape;

public:
    Chocolate(std::string shape);
    void show_info() override;
};