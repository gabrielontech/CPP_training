#include "../includes/Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	int	i = 0;
    if (N <= 0)
        return (NULL);
	Zombie	*zombieHorde = new Zombie[N];
    if (!zombieHorde)
        return (NULL);
	while (i < N){

		zombieHorde[i].set_name(name);
		zombieHorde[i].announce();		
		i++;
	}
	return (zombieHorde);
}