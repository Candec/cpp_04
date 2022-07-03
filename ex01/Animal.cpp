#include "Animal.hpp"

Animal::Animal()
{

}

Animal& Animal::operator = (const Animal& src)
{
	if (this != &src)
		this->type = src.type;
	return (*this);
}

Animal::Animal(const Animal &src)
{
	*this = src;
}

Animal::~Animal()
{

}

std::string Animal::getType() const
{
	return this->type;
}

void Animal::makeSound() const
{
	std::cout << "*crii crii noises*" << std::endl;
}
