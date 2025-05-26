#include "HumanA.hpp"

static Weapon default_weapon("default Weapon");

HumanA::HumanA() : _name("default"), _weapon(default_weapon) {}

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon) {}

HumanA::HumanA(const HumanA &other) : _name(other._name), _weapon(other._weapon) {}

HumanA &HumanA::operator=(const HumanA &other) {
    if (this != &other) {
        _name = other._name;
        _weapon = other._weapon;
    }
    return *this;
}

HumanA::~HumanA() {}

void HumanA::attack() const {
    std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}
