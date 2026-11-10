#include "FragTrap.hpp"

int main()
{
	FragTrap a("GHOST");
	a.print();

	a.attack("Snowden");
	a.print();

	a.takeDamage(30);
	a.print();

	a.beRepaired(10);
	a.print();

	a.highFivesGuys();
	a.print();

	a.takeDamage(100);
	a.print();

	a.attack("Enemy");
	a.print();

	a.beRepaired(10);
	a.print();

	return (0);
}