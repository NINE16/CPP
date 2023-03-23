#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <cctype>
#include <iomanip>
#include <iostream>

class Brain
{
	public:
		Brain();
		Brain(Brain const &cpy);
		Brain & operator = (const Brain & z);
		~Brain();

		std:: string ideas[100]; 

};

#endif