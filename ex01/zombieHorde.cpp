#include "Zombie.h"

Zombie* zombieHorde( int N, std::string name )
{
	int i = 0;
	Zombie *zombie_horde = new Zombie[N];
	while (i < N)
	{
		zombie_horde[i].set_name(name);
		std::cout << "[Debug] " << i << " ";
		zombie_horde[i].announce();
		i++;
	}
	return &zombie_horde[0];
}