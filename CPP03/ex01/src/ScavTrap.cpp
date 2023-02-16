#include "../includes/ScavTrap.hpp"

std::string ScavTrap::getName(void)
{
    return (_name);
}

int ScavTrap::getAttack(void)
{
    return (_attack);
}

int ScavTrap::getHits(void)
{
    return(_hits);
}

int ScavTrap::getEnergy(void)
{
    return(_energy);
}

void ScavTrap::attack(const std::string& target)
{
    if (_hits == 0)
     {
        std::cout << "You are dead " << _name << std::endl;
        return ;
     }
    if (_energy == 0)
     {
        std::cout << "You do not have enough energy" << std::endl;
        return ;
     }
    std::cout << "ScravpTrap " << _name << "attacks " << target <<", causing " << _hits << " points of damage !" << std::endl;
    _energy--;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap : " << _name << " turned into gate keeper mode" << std::endl;
}
/*
std::ostream &operator<<(std::ostream &out, ScavTrap const &elem)
{
    out << "Claptrap Name : " << elem.getName() << std::endl;
    out << "Claptrap Hit Points : " << elem.getHits() << std::endl;
    out << "Claptrap Energy Points : " << elem.getEnergy() << std::endl;
    out << "Claptrap Damages : " << elem.getAttack() << std::endl;
    return (out);
}
*/