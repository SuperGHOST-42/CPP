#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	{
		const Animal *meta = new Animal();
		const Animal *j = new Dog();
		const Animal *i = new Cat();

		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		
		meta->makeSound();
		j->makeSound();
		i->makeSound();

		delete j;
		delete i;
		delete meta;
	}
	
	// {
	// 	const WrongAnimal *meta = new WrongAnimal();
	// 	const WrongAnimal *i = new WrongCat();

	// 	meta->makeSound();
	// 	i->makeSound();

	// 	delete meta;
	// 	delete i;
	// }
}