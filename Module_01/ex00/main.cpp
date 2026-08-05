#include "Zombie.hpp"

int main()
{
	Zombie *zombie;

	zombie = newZombie("Ariclenes");
	zombie->announce();
	//delete zombie;
}