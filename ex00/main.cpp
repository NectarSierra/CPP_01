#include "Zombie.h"

int main( void )
{
	Zombie *test = newZombie("Zombie_1");
	randomChump("Zombie_2");
	delete test;
	return (0);
}