#include "Zombie.hpp"

int main()
{
	Zombie *horde;

	horde = zombieHorde(2, "Ghost");
	if (!horde)
		return (1);
	
	for (int i = 0; i < 2; i++)
	{
		horde[i].announce();
	}

	delete[] horde;
	
	return (0);
}