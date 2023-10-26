#include <iostream>
#include <string>

class Zombie
{
    public:
        Zombie(std::string name);
        ~Zombie();
        void announce(void);
        static void randomChump( std::string name );

    private:
        std::string _Name;
};
        
Zombie *newZombie(std::string name );