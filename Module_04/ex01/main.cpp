#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	// {
	// 	const Animal *meta = new Animal();
	// 	const Animal *j = new Dog();
	// 	const Animal *i = new Cat();

	// 	meta->makeSound();
	// 	j->makeSound();
	// 	i->makeSound();

	// 	delete j;
	// 	delete i;
	// 	delete meta;
	// }
	
	// {
	// 	const WrongAnimal *meta = new WrongAnimal();
	// 	const WrongAnimal *i = new WrongCat();

	// 	meta->makeSound();
	// 	i->makeSound();

	// 	delete meta;
	// 	delete i;
	// }

	// {
	// 	int N = 2;
	// 	Animal *animals[N];

	// 	for(int i = 0; i < N / 2; i++)
	// 		animals[i] = new Dog();

	// 	for(int i = N / 2; i < N; i++)
	// 		animals[i] = new Cat();

	// 	for(int i = 0; i < N; i++)
	// 	 	delete animals[i];
	// }

	// {

	// 	Dog a;
	// 	Dog b(a);  // Construtor de cópia

	// 	Dog c;
	// 	c = a;     // Operador de atribuição
	// 	std::cout << "a: " << &a.getBrain() << std::endl;	
	// 	std::cout << "b: " << &b.getBrain() << std::endl;
	// 	std::cout << "c: " << &c.getBrain() << std::endl;
	// }

}