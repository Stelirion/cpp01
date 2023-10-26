#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
    public:
        Zombie();
        Zombie(std::string name);
        ~Zombie();
        void announce(void);
        static void randomChump( std::string name );
        void setName(std::string name);

    private:
        std::string _Name;
};

Zombie *zombieHorde(int N, std::string name);
Zombie *newZombie(std::string name);

#endif