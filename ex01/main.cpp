#include "Zombie.h"

int main( void )
{
	Zombie* horde = zombieHorde(100, "OK");
	horde->announce();
	delete[] horde;
}