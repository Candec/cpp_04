#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class A_Animal
{
	public:

	A_Animal();
	A_Animal(const A_Animal &src);
	A_Animal& operator=(const A_Animal &src);
	virtual ~A_Animal();

	virtual std::string getType() const = 0;
	virtual void makeSound() const = 0;

	protected:

	std::string type;

};

#endif
