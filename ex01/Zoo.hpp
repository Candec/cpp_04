#ifndef ZOO_HPP
# define ZOO_HPP

# include <iostream>
# include "Animal.hpp"
# include "WrongAnimal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	public:

	Dog();
	Dog(const Dog& src);
	Dog& operator = (const Dog& src);
	~Dog();

	void			makeSound() const;
	Dog&			setIdea(size_t i, const std::string &idea);
	std::string		getIdea(size_t i);
	void 			printIdea(const std::string idea);



	private:

	Brain* mind;

};

class Cat : public Animal
{
	public:

	Cat();
	Cat(const Cat& src);
	Cat& operator = (const Cat& src);
	~Cat();

	void makeSound() const;

	private:

	Brain* mind;

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
