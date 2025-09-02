#include "Weapon.h"

void Weapon::setType(std::string type)
{
	Weapon::type = type;
}

std::string Weapon::getType()
{
	return(Weapon::type);
}