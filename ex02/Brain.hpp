#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
	public:

	Brain();
	Brain(const Brain& src);
	Brain& operator = (const Brain& src);
	~Brain();

	void		setIdea(size_t i, std::string idea);
	std::string	getIdea(size_t i) const;
	void		printIdea(const std::string idea);

	private:

	std::string ideas[100];

};

#endif
