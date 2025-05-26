#pragma once

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanA
{
    public:
        HumanA();
        HumanA(std::string name, Weapon &weapon);
        HumanA(const HumanA &other);
        HumanA &operator=(const HumanA &other);
        ~HumanA();

        void attack() const;

    private:
        std::string _name;
        Weapon &_weapon;
};
