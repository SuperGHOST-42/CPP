#include "HumanA.hpp"
#include "Weapon.hpp"

int main()
{
	Weapon weapon("Sniper");

	HumanA soldier("GHOST", weapon);

	soldier.attack();

	return 0;
}