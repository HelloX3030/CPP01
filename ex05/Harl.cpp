#include "Harl.hpp"

Harl::Harl()
{
    functions[0] = &Harl::debug;
    functions[1] = &Harl::info;
    functions[2] = &Harl::warning;
    functions[3] = &Harl::error;

    levels[0] = "DEBUG";
    levels[1] = "INFO";
    levels[2] = "WARNING";
    levels[3] = "ERROR";
}

Harl::Harl(const Harl &other)
{
    for (int i = 0; i < 4; ++i)
    {
        functions[i] = other.functions[i];
        levels[i] = other.levels[i];
    }
}

Harl &Harl::operator=(const Harl &other)
{
    if (this != &other)
    {
        for (int i = 0; i < 4; ++i)
        {
            functions[i] = other.functions[i];
            levels[i] = other.levels[i];
        }
    }
    return *this;
}

Harl::~Harl()
{
}

void Harl::complain(const std::string &level)
{
    for (int i = 0; i < 4; ++i)
    {
        if (levels[i] == level)
        {
            (this->*functions[i])();
            return;
        }
    }
}

void Harl::debug()
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info()
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t putenough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning()
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << std::endl;
}

void Harl::error()
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
