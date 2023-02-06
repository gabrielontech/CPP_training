#include "../includes/Weapon.hpp"

Weapon::Weapon(std::string type)
{
    this->_type = type;
}

Weapon::~Weapon()
{
    return ;
}

void Weapon::setType(std::string type)
{
    this->_type = type;
    return ;
}

const std::string &Weapon::getType()
{
    return (this->_type);
}