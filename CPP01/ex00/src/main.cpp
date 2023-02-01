#include "../includes/Zombie.hpp"

int main(void)
{
    Zombie* zombie = newZombie("Zombie");
    zombie->announce();
    delete zombie;
    return 0;
}