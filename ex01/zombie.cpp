#include "zombie.hpp"

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

Zombie* zombieHorde( int N, std::string name ) {
    Zombie *zombies = new Zombie[N];
    for (int i=0; i<N; i++)
        zombies[i].setName(name);
    return zombies;
}
