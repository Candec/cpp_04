#include "Zoo.hpp"
#include "A_Animal.hpp"
#include "WrongAnimal.hpp"
#include "Brain.hpp"

void BrainStorm(Dog* _dog, size_t i)
{
	std::cout << "Though number " << i << ": ";
	_dog->printIdea(_dog->getIdea(i));
}

void BrainStorm(Dog _dog, size_t i)
{
	std::cout << "Though number " << i << ": ";
	_dog.printIdea(_dog.getIdea(i));
}

void ExamAnimal(Dog *_dog)
{
	std::cout << std::endl;

	BrainStorm(_dog, 0);
	BrainStorm(_dog, 21);
	BrainStorm(_dog, 42);
	BrainStorm(_dog, 69);
	BrainStorm(_dog, 99);
}

void ExamAnimal(Dog _dog)
{
	std::cout << std::endl;

	BrainStorm(_dog, 0);
	BrainStorm(_dog, 21);
	BrainStorm(_dog, 42);
	BrainStorm(_dog, 69);
	BrainStorm(_dog, 99);
}

int main()
{
	std::cout << std::endl;
	std::cout << "===========================" << std::endl;
	std::cout << "======Population Test======" << std::endl;
	std::cout << "===========================" << std::endl;

	size_t size = 6;

	A_Animal *animals[size];

	for (size_t i = 0; i < size; i++)
	{
		if (i < size / 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}

	for (size_t i = 0; i < size; i++)
	{
		std::cout << "[" << animals[i]->getType() << " " << i << "]: ";
		animals[i]->makeSound();
		delete animals[i];
	}

	std::cout << std::endl;
	std::cout << "===========================" << std::endl;
	std::cout << "======DeepMind Test========" << std::endl;
	std::cout << "===========================" << std::endl;

	std::cout << std::endl << "<--- SCOOBY --->" << std::endl;
	Dog *Scooby = new Dog();

	Scooby->setIdea(0, "Scooby cookies");
	Scooby->setIdea(42, "The mystery we will resolved");
	Scooby->setIdea(99, "Saggy");


	ExamAnimal(Scooby);

	std::cout << std::endl << "<--- PLUTO --->" << std::endl;
	Dog *Pluto = new Dog(*Scooby);

	ExamAnimal(Pluto);

	std::cout << std::endl << "<--- BARTON --->" << std::endl;
	Dog Barton(*Scooby);

	ExamAnimal(Barton);

	std::cout << std::endl << "<--- SPOILER: *Scooby dies* --->" << std::endl;
	delete Scooby;

	std::cout << std::endl << "<--- (DEL)PLUTO --->" << std::endl;
	ExamAnimal(Pluto);
	
	delete Pluto;
	std::cout << std::endl << "<--- (DEL)BARTON --->" << std::endl;
	ExamAnimal(Barton);

	std::cout << std::endl << "<--- DELETING ANIMALS --->" << std::endl;
	return (0);
}
