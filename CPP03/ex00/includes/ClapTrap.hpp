#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP
#include <iostream>
#include <cmath>
#include <string>

class ClapTrap
{
    private:
        std::string _name;
        int _hits;
        int _attack;
        int _energy;
    public:
        //constructors and destructors
        ClapTrap();
        ClapTrap(std::string name);
        unsigned int getAttack(void);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        ClapTrap(const ClapTrap& other);
        ~ClapTrap();
        //overloads
        ClapTrap& operator=(const ClapTrap& rhs);
};

#endif