#include "Zoo.hpp"

//Dog class creation

Dog::Dog() : Animal()
{
	std::cout << "[DOG]: Creating..." << std::endl;
	type = "Dog";
}

Dog::Dog(const Dog& src) : Animal()
{
	std::cout << "[DOG]: Instance..." << std::endl;
	*this = src;
}

Dog& Dog::operator = (const Dog& src)
{
	std::cout << "[DOG]: Assigning..." << std::endl;
	if (this != &src)
		this->type = src.type;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "[DOG]: Destroying..." << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Guau Guau" << std::endl;
}


//Cat class creation

Cat::Cat() : Animal()
{
	std::cout << "[CAT]: Creating..." << std::endl;
	type = "Cat";
}

Cat::Cat(const Cat& src) : Animal()
{
	std::cout << "[CAT]: Creating..." << std::endl;
	*this = src;
}

Cat& Cat::operator = (const Cat& src)
{
	std::cout << "[CAT]: Creating..." << std::endl;
	if (this != &src)
		this->type = src.type;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "[CAT]: Destroying..." << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Miau Miau" << std::endl;
}


//WrongCat class creation

WrongCat::WrongCat() : WrongAnimal()
{
	std::cout << "[W_CAT]: Creating..." << std::endl;
	type = "Cat";
}

WrongCat::WrongCat(const WrongCat& src) : WrongAnimal()
{
	std::cout << "[W_CAT]: Instance..." << std::endl;
	*this = src;
}

WrongCat& WrongCat::operator = (const WrongCat& src)
{
	std::cout << "[W_CAT]: Assigning..." << std::endl;
	if (this != &src)
		this->type = src.type;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "[W_CAT]: Destroying..." << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "Miau Miau" << std::endl;
}
