#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <cctype>
#include <iomanip>
#include <iostream>

class Form;

class Bureaucrat
{
	public:
			Bureaucrat();
			Bureaucrat(Bureaucrat const &cpy);
			Bureaucrat(std:: string name, int grade);
			Bureaucrat &operator= (const Bureaucrat &z);
			void incrementGrade(int grade);
			void decrementGrade(int grade);
			void signForm(Form &form);

			~Bureaucrat();

			std:: string getName() const;
			int getGrade() const;

			class GradeTooHighException: public std::exception 
			{
				public: 
					const char*	what() const throw() { return ("The grade is already the highest");} 
			};
			class GradeTooLowException: public std::exception 
			{
				public: 
					const char*	what() const throw() { return ("The grade too low");} 
			};
	private:
			const std:: string name; 
			int grade;
};

std::ostream & operator<<(std:: ostream & o, const Bureaucrat & b);

#endif