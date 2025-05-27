#pragma once

#include <iostream>
#include <string>

class Harl
{
public:
    Harl();
    Harl(const Harl &other);
    Harl &operator=(const Harl &other);
    ~Harl();

    // Public Member Functions
    void complain(const std::string &level);

private:
    void debug();
    void info();
    void warning();
    void error();

    void (Harl::*functions[4])();
    std::string levels[4];
};
