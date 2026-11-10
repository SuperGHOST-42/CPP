#include "ScavTrap.hpp"

int main()
{
	ScavTrap a("GHOST");
	a.print();

	a.attack("Snowden");
	a.print();

	a.takeDamage(30);
	a.print();

	a.beRepaired(10);
	a.print();

	a.guardGate();
	a.print();

	a.takeDamage(100);
	a.print();

	a.attack("Enemy");
	a.print();

	a.beRepaired(10);
	a.print();

	return (0);
}