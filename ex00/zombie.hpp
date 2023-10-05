#include <iostream>
#include <string>

class Zombie
{
    public:
        Zombie();
        ~Zombie();
        void announce(void);
        static Zombie* newZombie( std::string name );
        static void randomChump( std::string name );

    private:
        std::string _Name;
};