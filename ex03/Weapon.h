#include <iomanip>
#include <iostream>
#include <string>


class Weapon
{
	private:
		std::string type;
	public:
		Weapon(std::string type){
			Weapon::type = type;
		}
		std::string getType();
		void setType(std::string type);
};