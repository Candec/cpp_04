#include "A_Animal.hpp"

A_Animal::A_Animal()
{
	std::cout << "[ABS_ANIMAL]: Creating..." << std::endl;
}

A_Animal& A_Animal::operator = (const A_Animal& src)
{
	std::cout << "[ABS_ANIMAL]: Assining..." << std::endl;
	if (this != &src)
		this->type = src.type;
	return (*this);
}

A_Animal::A_Animal(const A_Animal &src)
{
	std::cout << "[ABS_ANIMAL]: Copying..." << std::endl;
	*this = src;
}

A_Animal::~A_Animal()
{
	std::cout << "[ABS_ANIMAL]: Destroying..." << std::endl;
}
