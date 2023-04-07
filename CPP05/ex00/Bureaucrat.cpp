#include "Bureaucrat.hpp"


Bureaucrat:: Bureaucrat()
{
	// grade = 0;
	std:: cout << "Bureaucrat constructor called " << std:: endl;
}

Bureaucrat:: Bureaucrat(Bureaucrat const &cpy)
{
	// this->grade = 0;
	*this = cpy;
}

Bureaucrat &Bureaucrat:: operator = (const Bureaucrat &z)
{
	if (this != &z)
		this->grade = z.grade;
	return (*this);
}

Bureaucrat:: Bureaucrat(std:: string name, int grade) : name(name), grade(grade)
{
		if (grade < 1)
			throw GradeTooHighException();	
		if (grade > 150)
			throw GradeTooLowException();
		std:: cout << "Copy constructor called " << std:: endl;

}

std:: string Bureaucrat:: getName() const
{
	return(this->name);
}

int Bureaucrat:: getGrade() const
{
	return (this->grade);
}

Bureaucrat:: ~Bureaucrat()
{
	std:: cout << "Bureaucrat destructor called" << std:: endl;

}

void Bureaucrat:: incrementGrade(int grade)
{
		if ((this->grade - grade) < 1)
			throw GradeTooHighException();
		if ((this->grade - grade) > 150)
			throw GradeTooLowException();
		this->grade -= grade;

}

void Bureaucrat:: decrementGrade(int grade)
{
		if ((this->grade + grade) > 150)
			throw GradeTooLowException();
		if ((this->grade + grade) < 1)
			throw GradeTooLowException();
		this->grade += grade;
}

std::ostream & operator<<(std:: ostream & o, const Bureaucrat &b) 
{
	o << b.getName() << ", bureaucrat has the following grade: " << b.getGrade() << std:: endl;
	return (o);
}

