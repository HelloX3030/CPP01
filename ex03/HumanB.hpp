#pragma once

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
    public:
        HumanB();
        HumanB(std::string name);
        HumanB(const HumanB &other);
        HumanB &operator=(const HumanB &other);
        ~HumanB();

        void attack() const;
        void setWeapon(Weapon &weapon);

    private:
        std::string _name;
        Weapon *_weapon;
};
