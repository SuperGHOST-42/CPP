#ifndef WRONG_ANIMAL_HPP
#define WRONG_ANIMAL_HPP

#include <iostream>

class WrongAnimal
{
	protected:
		std::string type;
	public:
		WrongAnimal();
		WrongAnimal(std::string name);
		WrongAnimal(const WrongAnimal &other);
		WrongAnimal &operator=(const WrongAnimal &other);
		virtual ~WrongAnimal();

		std::string		getType(void) const;
		void 	makeSound() const;
};

#endif