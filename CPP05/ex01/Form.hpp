#ifndef FORM_HPP
# define FORM_HPP

#include <cctype>
#include <iomanip>
#include <iostream>
#include <stdbool.h>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:
			// Form();
			Form(const Form  &cpy);
			Form(std:: string name, int grade_to_sign, int grade_to_exec);
			Form &operator= (const Form &z);
			void beSigned(const Bureaucrat &Bureaucrat);
			virtual void executeForm(Bureaucrat const &bureaucrat) const = 0;
			int getGradeSign() const;
			std:: string getName() const;
			
			~Form();

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

std:: ostream & operator<<(std:: ostream & o, const Form &f);

#endif