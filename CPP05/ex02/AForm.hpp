#ifndef FORM_HPP
# define FORM_HPP

#include <cctype>
#include <iomanip>
#include <iostream>
#include <stdbool.h>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	public:
			// AForm();
			AForm(const AForm  &cpy);
			AForm(std:: string name, int grade_to_sign, int grade_to_exec);
			AForm &operator= (const AForm &z);
			void beSigned(const Bureaucrat &Bureaucrat);
			int getGradeSign() const;
			std:: string getName() const;
			
			~AForm();

			class GradeTooHighException: public std:: exception
			{
				public:
					const char* what() const throw()
					{
						return ("The grade is already the highest"); 
					}
			};
			class GradeTooLowException: public std:: exception
			{
				public:
					const char* what() const throw()
					{
						return("The grade is too low to sign or execute"); 
					}
			};

	private:
			const std:: string name; 
			bool isSigned;
			int	grade_sign; 
			int grade_exec; 
};

std:: ostream & operator<<(std:: ostream & o, const AForm &f);

#endif