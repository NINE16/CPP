#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include <cctype>
#include <iomanip>
#include <iostream>
#include <fstream>
#include <stdbool.h>
#include "Bureaucrat.hpp"
#include "AForm.hpp"

class Bureaucrat;

class Shrubbery: public AForm
{
	public:
			Shrubbery(std:: string target);
			Shrubbery(const Shrubbery &cpy);
			Shrubbery &operator =(const Shrubbery &z);
			void executeForm(Bureaucrat const &bureaucrat) const ;
			void executing() const;
			~Shrubbery();

	private: 
			std:: string target;

};


#endif