#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap robot("GHOST");

	robot.print();
	robot.attack("Snowden");
	robot.print();

	robot.takeDamage(3);
	robot.print();

	robot.beRepaired(2);
	robot.print();

}