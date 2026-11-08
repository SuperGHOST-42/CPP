#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
	:_name("Default"), _hitPoints(10), _energyPoint(10), _attackDamage(0)
{
	std::cout << "Default constuctor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
	: _name(name), _hitPoints(10), _energyPoint(10), _attackDamage(0)
{
	std::cout << "ClapTrap " << this->_name << " created!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	if (this != &other)
	{
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoint = other._energyPoint;
		this->_attackDamage = other._attackDamage;
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (_hitPoints > 0 && _energyPoint > 0)
	{
		_energyPoint--;
		std::cout << "ClapTrap " << _name
		<< " attacks " << target
		<< ", causing " << _attackDamage
		<< " points of damage!" << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << _name
			<< " cannot attack!" << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints <= 0)
	{
		std::cout << "ClapTrap" << _name 
		<< "is already destroyed" << std::endl;
		return ;
	}

	if (amount >= static_cast<unsigned int>(_hitPoints))
		_hitPoints = 0;
	else
		_hitPoints -= static_cast<int>(amount);

	std::cout << "ClapTrap " << _name 
	<< " takes " << amount 
	<< " damage points" << std::endl;
	return ;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_hitPoints > 0 && _energyPoint > 0)
	{
		_energyPoint--;
		_hitPoints += static_cast<int>(amount);

		std::cout << "ClapTrap" << _name
		<< "repairs" << amount
		<< "hitPoints" 
		<< std::endl;
	}
	else
	{
		std::cout << "ClapTrap" << _name 
		<< "can't repair itself" 
		<< std::endl;
	}
}