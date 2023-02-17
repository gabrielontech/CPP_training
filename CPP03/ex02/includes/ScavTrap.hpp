#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP
#include "ClapTrap.hpp"
#include <iostream>
#include <cmath>
#include <string>


class ScavTrap : public ClapTrap
{

    public:
        //constructors and destructors
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap& other);
        ~ScavTrap();
        void attack(const std::string& target);
        void guardGate();
        int energy(void);
        //overloads
        ScavTrap& operator=(const ScavTrap& rhs);
};
std::ostream &operator<<(std::ostream &out, ScavTrap const &elem);
#endif