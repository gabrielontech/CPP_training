#include "../includes/ClapTrap.hpp"

ClapTrap::ClapTrap(): _name("No Name"), _hits(10), _attack(0), _energy(10)
{
    std::cout << "Default constructor of ClapTrap called" << std::endl;
    return ;
}

ClapTrap::ClapTrap(std::string name): _hits(10), _attack(0), _energy(10)
{
    _name = name;
    std::cout << "constructor with name of ClapTrap called" << std::endl;
    return ;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor of ClapTrap called" << std::endl;
    return ;
}

ClapTrap:: ClapTrap( const ClapTrap &copy )
{
    std::cout << "Constructor by copy called" << std::endl;
    *this = copy;
}

void ClapTrap::attack(const std::string& target)
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
    std::cout << "ClapTrap " << _name << "attacks " << target <<", causing " << _hits << " points of damage !" << std::endl;
    _energy--;
}

void ClapTrap::beRepaired(unsigned int amount)
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
    _hits += (int)amount;
    std::cout << "ClapTrap " << _name << " has " << amount << ", of life repair !" << std::endl;
    _energy--;
}

void ClapTrap::takeDamage(unsigned int amount)
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
    _hits -= (int)amount;
    std::cout << "ClapTrap " << _name << " has received " << amount <<", of damage !" << std::endl;
}

unsigned int   ClapTrap::getAttack( void )
{
   return (this->_attack);
}

ClapTrap & ClapTrap::operator=( ClapTrap const & src )
{
   std::cout << "Copy assignment operator called" << std::endl;

   _name = src._name + "_copy";
   _hits = src._hits;
   _attack = src._attack;
   _energy = src._energy;

   return *this;
}