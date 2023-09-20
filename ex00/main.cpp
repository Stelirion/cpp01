#include "zombie.hpp"

int main() {
    Zombie *zombie = Zombie::newZombie("Zombie 1");
    Zombie::randomChump("Zombie 2");
    zombie->announce();
    delete zombie;
    return 0;
}