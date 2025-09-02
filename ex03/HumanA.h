#include <iomanip>
#include <iostream>
#include <string>
#include "Weapon.h"

class HumanA
{
	private:
		Weapon weapon("");
		std::string name;
	public:
		HumanA(std::string name, std::string weapon)
		{
			HumanA::weapon.setType(weapon);
			HumanA::name = name;
		}
};