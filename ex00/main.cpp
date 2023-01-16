#include "Zoo.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"

void AnimalExam(const Animal* _animal)
{
	std::cout << _animal->getType() << ": ";
	_animal->makeSound();
	std::cout << std::endl;
}

void AnimalExam(const WrongAnimal* _animal)
{
	std::cout << _animal->getType() << ": ";
	_animal->makeSound();
	std::cout << std::endl;
}

int main()
{
	const Animal* Meta = new Animal();
	const Animal* Kitty = new Dog();
	const Animal* Doggy = new Cat();
	const WrongAnimal* W_Meta = new WrongAnimal();
	const WrongAnimal* W_Kitty = new WrongCat();


	AnimalExam(Meta);
	AnimalExam(Kitty);
	AnimalExam(Doggy);
	AnimalExam(W_Meta);
	AnimalExam(W_Kitty);

	delete W_Meta;
	delete W_Kitty;
	delete Doggy;
	delete Kitty;
	delete Meta;

	return (0);
}
