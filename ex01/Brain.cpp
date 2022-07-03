#include "Brain.hpp"

Brain::Brain()
{

}

Brain::~Brain()
{

}

Brain& Brain::operator = (const Brain& src)
{
	if (this != &src)
	{
		for (size_t i = 0; i < 100; i++)
			this->ideas[i] = src.ideas[i];
	}
	return (*this);
}

Brain::Brain(const Brain& src)
{
	*this = src;
}

/*
** Brain funtions
*/
void		Brain::setIdea(size_t i, std::string idea)
{
	this->ideas[i] = idea;
}

std::string	Brain::getIdea(size_t i) const
{
	return (ideas[i]);
}

void		Brain::printIdea(const std::string idea)
{
	std::cout << idea << std::endl;
}
