#include "../includes/Zombie.hpp"

Zombie::Zombie()
{
    return;
}

Zombie::~Zombie()
{
    std::cout << this->_name << " has been destroyed" << std::endl;
    return;
}

void Zombie::set_name(std::string name)
{
    this->_name = name;
    return;
}

void Zombie::announce(void)
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}