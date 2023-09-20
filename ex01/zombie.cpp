#include "zombie.hpp"

Zombie::Zombie() {
}

Zombie::~Zombie() {
}

void Zombie::announce(void) {
    std::cout << this->_Name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie* Zombie::newZombie( std::string name ) {
    Zombie *zombie = new Zombie();
    zombie->_Name = name;
    return zombie;
}

void Zombie::randomChump( std::string name ) {
    Zombie zombie;
    zombie._Name = name;
    zombie.announce();
}

Zombie* Zombie::zombieHorde( int N, std::string name ) {
    Zombie *zombies = new Zombie[N];
    for (int i = 0; i < N; i++) {
        zombies[i]._Name = name;
    }
    return zombies;
}
