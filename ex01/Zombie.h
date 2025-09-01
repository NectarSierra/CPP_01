#include <iomanip>
#include <iostream>

class Zombie
{
	private:
		std::string name;
	public:
		void set_name( std::string rname );
		void announce( void );
};

Zombie* newZombie( std::string name );
Zombie* zombieHorde( int N, std::string name );