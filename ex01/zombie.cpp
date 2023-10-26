#include "Zombie.hpp"

Zombie::Zombie(std::string name) {
    this->_Name = name;
}

Zombie::Zombie() {
}

Zombie::~Zombie() {
}

void Zombie::announce(void) {
    std::cout << this->_Name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name) {
    this->_Name = name;
}

Zombie *newZombie( std::string name ) {
    Zombie *zombie = new Zombie(name);
    return zombie;
}

void Zombie::randomChump( std::string name ) {
    Zombie zombie(name);
    zombie.announce();
}
