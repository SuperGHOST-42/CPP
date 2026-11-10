#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
	: ClapTrap()
{
	std::cout << "ScavTrap Default constructor called" << std::endl;

	_hitPoints = 100;
	_energyPoint = 50;
	_attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name)
	: ClapTrap()
{
	_name = name;
	_hitPoints = 100;
	_energyPoint = 50;
	_attackDamage = 20;

	std::cout << "ScavTrap " << _name << " created"
	<< std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other)
	: ClapTrap(other)
{
	std::cout << "ScavTrap Copy constructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	if (this != &other)
		ClapTrap::operator=(other);
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (_hitPoints > 0 && _energyPoint > 0)
	{
		_energyPoint--;
		std::cout << "ScavTrap " << _name
		<< " attacks " << target
		<< ", causing " << _attackDamage
		<< " points of damage!" << std::endl;
	}
	else
	{
		std::cout << "ScavTrap " << _name
			<< " cannot attack!" << std::endl;
	}
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << _name
	<< " is now in Gate Keeper Mode!"
	<< std::endl;
}