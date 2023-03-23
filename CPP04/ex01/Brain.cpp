	#include "Brain.hpp"

Brain:: Brain()
{
	for (int i = 0; i < 100; i++)
	{
		this->ideas[i] = "Idea number ";
		// std::cout << this->ideas[i] << i << std:: endl;
	}
	std:: cout << "Brain constructor called" << std:: endl;
}

Brain:: Brain(Brain const &cpy)
{
	*this = cpy;
	std:: cout << "Brain copy constructor called" << std:: endl;
}

Brain &Brain:: operator = (const Brain &z)
{
	for (int i = 0; i < 100; i++)
	{
		this->ideas[i] = z.ideas[i];
	}
	return (*this);
}

Brain:: ~Brain()
{
	std:: cout << "Animal destructor called" << std:: endl;
}
