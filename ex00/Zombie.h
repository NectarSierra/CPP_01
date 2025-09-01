#include <iomanip>
#include <iostream>

class Zombie
{
	private:
		std::string name;
	public:
		Zombie(std::string rname){
			name = rname;
		}
		~Zombie(){
			std::cout << "[Debug] Destructor called for: " << name << std::endl;
		}
		void announce( void );
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );