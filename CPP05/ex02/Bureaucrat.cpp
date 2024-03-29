#include "Bureaucrat.hpp"
#include "AForm.hpp"


Bureaucrat:: Bureaucrat()
{
	if (grade < 1)
		throw GradeTooHighException();	
	if (grade > 150)
		throw GradeTooLowException();
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
	std:: cout << "Copy constructor of " << name << " called, who has " << grade << " as grade" << std:: endl;
		if (grade < 1)
			throw GradeTooHighException();	
		if (grade > 150)
			throw GradeTooLowException();
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

void Bureaucrat:: signForm(AForm &form)
{
	try 
	{
		form.beSigned(*this);
		std:: cout << this->getName() << " signed the " << form.getName() << std::endl;
	}
	catch (std:: exception &e) 
	{
		std:: cout << this->getName() << " couldn’t sign the report" << std:: endl;
	}
}

void Bureaucrat:: executeForm(AForm const &form)
{
	try
	{
		form.executeForm(*this);
		std:: cout << this->getName() << " executed the form" << std::endl;
	}
	catch (std:: exception &e)
	{
		std:: cout << this->getName() << " couldn’t execute the " << this->name << " because their grade was too low" << std:: endl;
	}

}


std::ostream & operator<<(std:: ostream & o, const Bureaucrat &b) 
{
	o << b.getName() << ", bureaucrat has the following grade: " << b.getGrade() << std:: endl;
	return (o);
}

