#ifndef PRESIDENTIAL_HPP
# define PRESIDENTIAL_HPP

#include <cctype>
#include <iomanip>
#include <iostream>
#include <fstream>
#include <stdbool.h>
#include <cstdlib>
#include "Bureaucrat.hpp"
#include "AForm.hpp"

class Bureaucrat;

class Presidential: public AForm
{
	public:
			Presidential(std:: string target);
			Presidential(const Presidential &cpy);
			Presidential &operator = (const Presidential &z);
			void executeForm(Bureaucrat const &bureaucrat) const;
			~Presidential();
	private:
			std:: string target; 

};

#endif