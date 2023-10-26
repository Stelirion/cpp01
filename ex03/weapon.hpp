#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon
{
    public:
        Weapon(std::string name);
        ~Weapon();
        void setType(std::string type);
        const std::string& getType(void) const;

    private:
        std::string _Type;
};

#endif