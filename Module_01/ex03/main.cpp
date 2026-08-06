#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	{
		Weapon weapon("SMG");
		HumanA a("GHOST", weapon);

		a.attack();
		
		weapon.setType("SHOTGUN");
			
		a.attack();
	}

	{
		Weapon weapon("Sniper");
		HumanB b("SuperGHOST");

		b.setWeapon(weapon);
		
		b.attack();
		
		weapon.setType("AR");
		
		b.attack();
	}
	return (0);
}