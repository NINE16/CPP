#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include <cctype>
#include <iomanip>
#include <iostream>
#include <fstream>
#include <stdbool.h>
#include <cstdlib>
#include "Bureaucrat.hpp"
#include "AForm.hpp"

class Bureaucrat;

class RobotomyRequestForm: public AForm
{
	public:
			RobotomyRequestForm(std:: string target);
			RobotomyRequestForm(const RobotomyRequestForm &cpy);
			RobotomyRequestForm &operator = (const RobotomyRequestForm &z);
			void executeForm(Bureaucrat const &bureaucrat) const ;
			~RobotomyRequestForm();
	
	private:
			std:: string target;
};

#endif