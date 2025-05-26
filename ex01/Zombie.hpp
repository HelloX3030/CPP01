#pragma once

#include <iostream>
#include <string>

class Zombie
{
    public:
        Zombie();
        Zombie(std::string name);
        Zombie(const Zombie &other);
        Zombie &operator=(const Zombie &other);
        ~Zombie();

        void announce() const;

    private:
        std::string _name;
};

Zombie* zombieHorde(int N, std::string name);
