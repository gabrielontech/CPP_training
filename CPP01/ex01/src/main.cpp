#include "../includes/Zombie.hpp"

int	main(){

	Zombie	*horde;
	
	horde = zombieHorde(5, "rodrigo");
	 for (int i = 0; i < 5; i++)
    {
        std::cout  << i ;
        horde->announce();
    }
	delete[] horde;
	return 0;
}