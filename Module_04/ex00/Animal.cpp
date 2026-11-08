#include "Animal.hpp"

Animal::Animal()
	:type("Default")
{
	std::cout << "Default constructor called" << std::endl;
}

Animal::Animal(std::string name)
	:type(name)
{
	std::cout << "Animal " << this->type
	<< "created!" 
	<< std::endl;
}

Animal::Animal(const Animal &other)
{
	std::cout << "Copy constructor called" << std::endl;
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
	std::cout << "Destructor called" << std::endl;
}

void Animal::makeSound()
{
	
}