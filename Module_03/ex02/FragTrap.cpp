#include "FragTrap.hpp"

FragTrap::FragTrap()
	: ClapTrap()
{
	_hitPoints = 100;
	_energyPoint = 100;
	_attackDamage = 30;

	std::cout << "FragTrap Default constructor called" << std::endl;
}

FragTrap::FragTrap(const std::string name)
	: ClapTrap(name)
{
	_hitPoints = 100;
	_energyPoint = 100;
	_attackDamage = 30;

	std::cout << "FragTrap " << this->_name 
	<< " created!"
	<< std::endl;
}

FragTrap::FragTrap(const FragTrap &other)
	: ClapTrap(other)
{
	std::cout << "FragTrap Copy constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
	if (this != &other)
		ClapTrap::operator=(other);
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor called" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << " FragTrap " << this->_name 
	<< "request a High Five!" 
	<< std::endl;
}