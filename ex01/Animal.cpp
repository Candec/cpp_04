#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal instance" << std::endl;
}

Animal& Animal::operator = (const Animal& src)
{
	std::cout << "Animal assigment" << std::endl;
	if (this != &src)
		this->type = src.type;
	return (*this);
}

Animal::Animal(const Animal &src)
{
	std::cout << "Animal copy" << std::endl;
	*this = src;
}

Animal::~Animal()
{
	std::cout << "Animal destruction" << std::endl;
}

std::string Animal::getType() const
{
	return this->type;
}

void Animal::makeSound() const
{
	std::cout << "*crii crii noises*" << std::endl;
}
