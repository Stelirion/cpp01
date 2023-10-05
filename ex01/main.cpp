#include "zombie.hpp"

int main() {
    int N;
    N = 10;
    Zombie *zombie = zombieHorde(N, "Zombie");
    for (int i = 0; i < N; i++) {
        zombie[i].announce();
    }
    delete[] zombie;
    return 0;
}