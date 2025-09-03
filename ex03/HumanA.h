#include <iomanip>
#include <iostream>
#include <string>
#include "Weapon.h"

class HumanA
{
	private:
		std::string name;
	public:
		HumanA(std::string name, std::string rweapon)
		{
			Weapon weapon(rweapon);
			HumanA::name = name;
		}
};