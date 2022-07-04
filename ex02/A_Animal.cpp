#include "A_Animal.hpp"

A_Animal::A_Animal()
{
	std::cout << "A_Animal instance" << std::endl;
}

A_Animal& A_Animal::operator = (const A_Animal& src)
{
	std::cout << "A_Animal assigment" << std::endl;
	if (this != &src)
		this->type = src.type;
	return (*this);
}

A_Animal::A_Animal(const A_Animal &src)
{
	std::cout << "A_Animal copy" << std::endl;
	*this = src;
}

A_Animal::~A_Animal()
{
	std::cout << "A_Animal destruction" << std::endl;
}
