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
	// population test
	size_t size = 6;

	Dog *Dogs[size/2];
	Cat *Cats[size/2];

	for (size_t i = 0; i < size / 2; i++)
	{
		Dogs[i] = new Dog();
		Cats[i] = new Cat();
	}

	for (size_t i = 0; i < size / 2; i++)
	{
		std::cout << "[" << Dogs[i]->getType() << " " << i << "]: ";
		Dogs[i]->makeSound();
		delete Dogs[i];
		std::cout << "[" << Cats[i]->getType() << " " << i << "]: ";
		Cats[i]->makeSound();
		delete Cats[i];
	}

	// DeepMind test
	Dog *Scooby = new Dog();

	Scooby->setIdea(0, "Scooby cookies");
	Scooby->setIdea(42, "Education had a bug. We fixed it");
	Scooby->setIdea(99, "Saggy");

	ExamAnimal(Scooby);

	Dog *Pluto = new Dog(*Scooby);

	ExamAnimal(Pluto);

	Dog Barton(*Scooby);

	ExamAnimal(Barton);

	delete Scooby;

	ExamAnimal(Pluto);
	ExamAnimal(Barton);

	return (0);
}
