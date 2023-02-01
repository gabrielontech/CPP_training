#include "../includes/Zombie.hpp"

void randomChump(std::string name)
{
    Zombie* newZombie = new Zombie();
    newZombie->set_name(name);
    newZombie->announce();
    delete newZombie;
}