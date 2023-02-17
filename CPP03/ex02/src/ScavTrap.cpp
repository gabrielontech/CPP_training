#include "../includes/ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "Default Constructor of ScavTrap Trap called" << std::endl;
    return ;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
    std::cout << "Default Constructor of ScavTrap Trap called" << std::endl;
    return ;
}

ScavTrap::~ScavTrap()
{
    std::cout << "Destructor of ClapTrap called" << std::endl;
    return ;
}

void ScavTrap::attack(const std::string& target)
{
    if (_hits == 0)
     {
        std::cout << _name << " you are dead " << _name << std::endl;
        return ;
     }
    if (_energy == 0)
     {
        std::cout << _name << " you do not have enough energy" << std::endl;
        return ;
     }
    std::cout << "ScravpTrap " << _name << " attacks " << target <<", causing " << _hits << " points of damage !" << std::endl;
    _energy--;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap : " << _name << " turned into gate keeper mode" << std::endl;
}


std::ostream &operator<<(std::ostream &out, ScavTrap const &elem)
{
    out << "Scravtrap Name : " << elem.getName() << std::endl;
    out << "Scravtrap Hit Points : " << elem.getHits() << std::endl;
    out << "Scravtrap Energy Points : " << elem.getEnergy() << std::endl;
    out << "Scravtrap Damages : " << elem.getAttack() << std::endl;
    return (out);
}
