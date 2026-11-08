#include "ScavTrap.hpp"

int main()
{
	ScavTrap a("Alpha");

	a.attack("Enemy");
	a.takeDamage(30);
	a.beRepaired(10);
	a.guardGate();

	ScavTrap b(a);
	ScavTrap c;
	c = a;

	a.takeDamage(100);
	a.attack("Enemy"); // Deve falhar: sem vida
	a.beRepaired(10);  // Deve falhar: sem vida

	return (0);
}