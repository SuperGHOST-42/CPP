#include "ScavTrap.hpp"

int main()
{
	ScavTrap a("Alpha");

	a.print();

	a.attack("Enemy");
	a.takeDamage(30);
	a.beRepaired(10);
	a.guardGate();
	a.print();

	a.takeDamage(100);
	a.print();

	a.attack("Enemy");
	a.beRepaired(10);

	a.print();

	return (0);
}