#include <iostream>
#include <string>

class Zombie
{
    public:
        Zombie();
        ~Zombie();
        void announce(void);
        void setName(std::string name);
        static Zombie* newZombie( std::string name );
        static void randomChump( std::string name );

    private:
        std::string _Name;
};

Zombie *zombieHorde( int N, std::string name );