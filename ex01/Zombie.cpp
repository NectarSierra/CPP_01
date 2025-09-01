#include "Zombie.h"

void Zombie::set_name( std::string rname )
{
	Zombie::name = rname;
}

void Zombie::announce( void )
{
	std::cout << name << ": ";
	std::cout << "BraiiiiiiinnnzzzZ..." << std::endl;
}