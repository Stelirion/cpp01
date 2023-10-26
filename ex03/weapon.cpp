#include "weapon.hpp"

Weapon::Weapon(std::string name) : _Type(name){
}

Weapon::~Weapon() {
}

void Weapon::setType(std::string type) {
    this->_Type = type;
}

const std::string& Weapon::getType(void) const {
    return this->_Type;
}