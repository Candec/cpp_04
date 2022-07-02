#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{

}

WrongAnimal::WrongAnimal(const WrongAnimal& src)
{
	*this = src;
}

WrongAnimal& WrongAnimal::operator = (const WrongAnimal& src)
{
	if (this != &src)
		this->type = src.type;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{

}

std::string WrongAnimal::getType() const
{
	return (this->type);
}

void WrongAnimal::makeSound() const
{
	std::cout << "Clearly this is wrong" << std::endl;
}
