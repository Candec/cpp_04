#include "Zoo.hpp"

//Dog class creation

Dog::Dog() : Animal()
{
	type = "Dog";
}

Dog::Dog(const Dog& src) : Animal()
{
	*this = src;
}

Dog& Dog::operator = (const Dog& src)
{
	if (this != &src)
		this->type = src.type;
	return (*this);
}

Dog::~Dog()
{

}

void Dog::makeSound() const
{
	std::cout << "Guau Guau" << std::endl;
}


//Cat class creation

Cat::Cat() : Animal()
{
	type = "Cat";
}

Cat::Cat(const Cat& src) : Animal()
{
	*this = src;
}

Cat& Cat::operator = (const Cat& src)
{
	if (this != &src)
		this->type = src.type;
	return (*this);
}

Cat::~Cat()
{

}

void Cat::makeSound() const
{
	std::cout << "Miau Miau" << std::endl;
}


//WrongCat class creation

WrongCat::WrongCat() : WrongAnimal()
{
	type = "Cat";
}

WrongCat::WrongCat(const WrongCat& src) : WrongAnimal()
{
	*this = src;
}

WrongCat& WrongCat::operator = (const WrongCat& src)
{
	if (this != &src)
		this->type = src.type;
	return (*this);
}

WrongCat::~WrongCat()
{

}

void WrongCat::makeSound() const
{
	std::cout << "Miau Miau" << std::endl;
}
