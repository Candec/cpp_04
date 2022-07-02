#ifndef ZOO_HPP
# define ZOO_HPP

# include <iostream>
# include "Animal.hpp"
# include "WrongAnimal.hpp"

class Dog : public Animal
{
	public:

	Dog();
	Dog(const Dog& src);
	Dog& operator = (const Dog& src);
	~Dog();

	void makeSound() const;

};

class Cat : public Animal
{
	public:

	Cat();
	Cat(const Cat& src);
	Cat& operator = (const Cat& src);
	~Cat();

	void makeSound() const;

};

class WrongCat : public WrongAnimal
{
	public:

	WrongCat();
	WrongCat(const WrongCat& src);
	WrongCat& operator = (const WrongCat& src);
	~WrongCat();

	void makeSound() const;
};

#endif
