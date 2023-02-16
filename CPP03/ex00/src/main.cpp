
#include "ClapTrap.hpp"

int main(void)
{
   ClapTrap NiceStud("NiceStud");
   ClapTrap Random("Random");

   NiceStud.attack("Random");
   Random.takeDamage(NiceStud.getAttack());
   NiceStud.attack("Random");
   Random.takeDamage(NiceStud.getAttack());
   Random.beRepaired(1);
   NiceStud.attack("Random");
   Random.takeDamage(NiceStud.getAttack());
   ClapTrap testcanon(NiceStud);
   testcanon.attack("Random");
   Random.takeDamage(testcanon.getAttack());
   testcanon.attack("Random");
   Random.takeDamage(testcanon.getAttack());
}