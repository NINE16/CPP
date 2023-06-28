#ifndef INTERN_HPP
# define INTERN_HPP

#include <cctype>
#include <iomanip>
#include <iostream>
#include "AForm.hpp"
#include "Bureaucrat.hpp"

class Bureaucrat;
class AForm;

class Intern
{
	public:
			Intern();
			Intern(Intern const &cpy);
			Intern &operator= (const Intern &z);
			AForm* makeForm(std::string formName, std::string target); 
			~Intern();

};

#endif