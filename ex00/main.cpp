#include "zombie.hpp"

int main() {
    Zombie *zombie1 = newZombie("Zombie 1");
    Zombie::randomChump("Zombie 2");
    zombie1->announce();
    delete zombie1;
    return 0;
}