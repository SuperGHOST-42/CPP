#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap robot("Ariclenes");

	robot.print();

	robot.attack("Snowden");
	robot.takeDamage(3);
	robot.beRepaired(2);

	robot.print();

}