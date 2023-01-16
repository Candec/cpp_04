#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "[W_ANIMAL] Creating..." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& src)
{
	std::cout << "[W_ANIMAL] Copying..." << std::endl;
	*this = src;
}

WrongAnimal& WrongAnimal::operator = (const WrongAnimal& src)
{
	std::cout << "[W_ANIMAL] Assigning..." << std::endl;
	if (this != &src)
		this->type = src.type;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "[W_ANIMAL] Destroying..." << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (this->type);
}

void WrongAnimal::makeSound() const
{
	std::cout << "Clearly this is wrong" << std::endl;
}
