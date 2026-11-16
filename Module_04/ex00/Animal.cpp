#include "Animal.hpp"

Animal::Animal()
	:type("Default")
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(std::string name)
	:type(name)
{
	std::cout << "Animal " << this->type
	<< " created!" 
	<< std::endl;
}

Animal::Animal(const Animal &other)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = other;
}

Animal &Animal::operator=(const Animal &other)
{
	if (this != &other)
		this->type = other.type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

std::string	Animal::getType(void) const
{
	return (this->type);
}

void Animal::makeSound() const
{
	std::cout << "Animal sound" << std::endl;
}