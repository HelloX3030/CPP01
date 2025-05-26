#include "HumanB.hpp"

HumanB::HumanB() : _name("default"), _weapon(nullptr) {}

HumanB::HumanB(std::string name) : _name(name), _weapon(nullptr) {}
HumanB::HumanB(const HumanB &other) : _name(other._name), _weapon(other._weapon) {}
HumanB &HumanB::operator=(const HumanB &other) {
    if (this != &other) {
        _name = other._name;
        _weapon = other._weapon;
    }
    return *this;
}
HumanB::~HumanB() {}
void HumanB::setWeapon(Weapon &weapon) {
    _weapon = &weapon;
}
void HumanB::attack() const {
    if (_weapon) {
        std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
    } else {
        std::cout << _name << " has no weapon to attack with!" << std::endl;
    }
}
