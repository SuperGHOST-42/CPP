#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name), weapon(NULL)
{
}

HumanB::HumanB(std::string name, Weapon &weapon) : name(name), weapon(&weapon)
{
}

void HumanB::attack()
{
	if (this->weapon)
	{
		std::cout << this->name 
				  << " attacks with their "
				  << this->weapon->getType()
				  << std::endl;
	}
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}