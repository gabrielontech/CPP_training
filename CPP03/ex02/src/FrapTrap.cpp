#include "../includes/FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "Default Constructor of FragTrap Trap called" << std::endl;
    return ;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
    std::cout << "Default Constructor of FragTrap Trap called" << std::endl;
    return ;
}

FragTrap::~FragTrap()
{
    std::cout << "Destructor of ClapTrap called" << std::endl;
    return ;
}

void FragTrap::attack(const std::string& target)
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

void FragTrap::highFivesGuys( void )
{
    std::cout << "Hey " << this->getName() << " ! Give me high five!" << std::endl;
}

std::ostream &operator<<(std::ostream &out, FragTrap const &elem)
{
    out << "FlagTrap Name : " << elem.getName() << std::endl;
    out << "Flagtrap Hit Points : " << elem.getHits() << std::endl;
    out << "Flagtrap Energy Points : " << elem.getEnergy() << std::endl;
    out << "Flagtrap Damages : " << elem.getAttack() << std::endl;
    return (out);
}
