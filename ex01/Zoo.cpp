#include "Zoo.hpp"

//Dog class creation

Dog::Dog() : Animal()
{
	std::cout << "Dog instance" << std::endl;
	type = "Dog";
	this->mind = new Brain();
}

Dog::Dog(const Dog& src) : Animal()
{
	std::cout << "Dog copying instance" << std::endl;
	this->mind = new Brain();
	*this = src;
}

Dog& Dog::operator = (const Dog& src)
{
	std::cout << "Dog assigment" << std::endl;
	if (this != &src)
	{
		this->type = src.type;
		for (size_t i = 0; i < 100; i++)
			this->mind->setIdea(i, src.mind->getIdea(i));
	}
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog destrution" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Guau Guau" << std::endl;
}

Dog& Dog::setIdea(size_t i, const std::string &idea)
{
	this->mind->setIdea(i, idea);
	return (*this);
}

std::string Dog::getIdea(size_t i)
{
	return (this->mind->getIdea(i));
}

void Dog::printIdea(const std::string idea)
{
	std::cout << idea << std::endl;
}


//Cat class creation

Cat::Cat() : Animal()
{
	std::cout << "Cat instance" << std::endl;
	type = "Cat";
	this->mind = new Brain();
}

Cat::Cat(const Cat& src) : Animal()
{
	std::cout << "Cat copying instance" << std::endl;
	this->mind = new Brain();
	*this = src;
}

Cat& Cat::operator = (const Cat& src)
{
	std::cout << "Cat assigment" << std::endl;
	if (this != &src)
	{
		this->type = src.type;
		for (size_t i = 0; i < 100; i++)
			this->mind->setIdea(i, src.mind->getIdea(i));
	}
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat destrution" << std::endl;
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
