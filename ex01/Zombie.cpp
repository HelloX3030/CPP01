#include "Zombie.hpp"

Zombie::Zombie() : _name("Unnamed Zombie") {}

Zombie::Zombie(std::string name) : _name(name) {}

Zombie::Zombie(const Zombie &other) : _name(other._name) {}

Zombie &Zombie::operator=(const Zombie &other) {
    if (this != &other) {
        _name = other._name;
    }
    return *this;
}

Zombie::~Zombie() {}

void Zombie::announce() const {
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
