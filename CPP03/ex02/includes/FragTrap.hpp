#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP
#include "ClapTrap.hpp"
#include <iostream>
#include <cmath>
#include <string>


class FragTrap : public ClapTrap
{

    public:
        //constructors and destructors
        FragTrap();
        FragTrap(std::string name);
        FragTrap(const FragTrap& other);
        ~FragTrap();
        void attack(const std::string& target);
        int energy(void);
        void highFivesGuys(void);
        //overloads
        FragTrap& operator=(const FragTrap& rhs);
};
std::ostream &operator<<(std::ostream &out, FragTrap const &elem);

#endif