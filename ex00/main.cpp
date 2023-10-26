#include "Zombie.hpp"

int main() {
    Zombie *zombie1 = newZombie("Zombie 1");
    randomChump("Zombie 2");
    zombie1->announce();
    delete zombie1;
    return 0;
}
