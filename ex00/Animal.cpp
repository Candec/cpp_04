#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "[ANIMAL]: Creating..." << std::endl;
}

Animal& Animal::operator = (const Animal& src)
{
	std::cout << "[ANIMAL]: Assining..." << std::endl;
	if (this != &src)
		this->type = src.type;
	return (*this);
}

Animal::Animal(const Animal &src)
{
	std::cout << "[ANIMAL]: Copying..." << std::endl;
	*this = src;
}

Animal::~Animal()
{
	std::cout << "[ANIMAL]: Destroying..." << std::endl;
}

std::string Animal::getType() const
{
	return this->type;
}

void Animal::makeSound() const
{
	std::cout << "*crii crii noises*" << std::endl;
}
