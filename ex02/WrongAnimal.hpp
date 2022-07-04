#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

/*
** The function makeSound() Lacks the "virtual" keyword,
** therefor it won't be override by other function definitions
*/

class WrongAnimal
{
	public:

	WrongAnimal();
	WrongAnimal(const WrongAnimal& src);
	WrongAnimal& operator = (const WrongAnimal& src);
	~WrongAnimal();

	void makeSound() const;
	std::string getType() const;

	protected:

	std::string type;
};

#endif
