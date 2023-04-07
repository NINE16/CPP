#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include <cctype>
#include <iomanip>
#include <iostream>
#include <stdbool.h>
#include "Bureaucrat.hpp"

class Shrubbery 
{
	Shrubbery(std:: string target);
	Shrubbery(const Shrubbery &cpy);
	Shrubbery &operator =(const Shrubbery &z);
	
	~Shrubbery();

};


#endif