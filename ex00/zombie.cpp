#include "Zombie.hpp"

Zombie::Zombie(std::string name) {
    this->_Name = name;
}

Zombie::~Zombie() {
}

void Zombie::announce(void) {
    std::cout << this->_Name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
