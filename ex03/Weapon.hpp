#pragma once

#include <string>

class Weapon
{
    public:
        Weapon();
        Weapon(std::string type);
        Weapon(const Weapon &other);
        Weapon &operator=(const Weapon &other);
        ~Weapon();

        const std::string &getType() const;
        void setType(const std::string &type);

    private:
        std::string _type;
};
