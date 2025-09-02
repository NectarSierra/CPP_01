#include "HumanA.h"


int main(void)
{
	Weapon club = Weapon("TEst");
	club.setType("test");
	std::cout << club.getType();
	return (0);
}