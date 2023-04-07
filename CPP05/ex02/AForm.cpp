#include "Form.hpp"
#include "Bureaucrat.hpp"

// Form:: Form()
// {
// 	this->isSigned = false;
// 	this->grade_sign = 40;
// 	this->grade_exec = 3;
// 	std::cout << "Form constructor called" << std::endl;
// }

AForm:: AForm(std:: string f_name, int grade_to_sign, int grade_to_exec) : name(f_name), grade_sign(grade_to_sign), grade_exec(grade_to_exec)
{
	std:: cout << name << " report is generated and it needs " << grade_sign << " to be signed" << std:: endl;
	if (grade_sign < 1)
			throw GradeTooHighException();	
	if (grade_sign > 150)
			throw GradeTooLowException();
	if (grade_exec < 1)
			throw GradeTooHighException();	
	if (grade_exec > 150)
			throw GradeTooLowException();
	this->isSigned = false;
}


AForm:: AForm(const AForm  &cpy)
{
	(*this)=cpy;
}

AForm:: ~AForm ()
{
	std:: cout << "Destructor called" << std:: endl;
}

AForm &AForm:: operator= (const AForm &z)
{
	if (this != &z)
		this->isSigned = z.isSigned;
		this->grade_exec = z.grade_exec;
		this->grade_exec = z.grade_sign;
	return (*this);
}

void AForm:: beSigned(const Bureaucrat &Bureaucrat)
{
	if (Bureaucrat.getGrade() > this->getGradeSign())
	{
		throw GradeTooLowException();
		this->isSigned = true;
	}
}

int AForm:: getGradeSign() const
{
	return (this->grade_sign);
}

std::string Form:: getName() const
{
	return (this->name);
}

std:: ostream & operator<<(std:: ostream & o, const Form &f)
{
	o   << f.getName() << " report needs " << f.getGradeSign() << " to be signed" << std:: endl;
	return (o);

}
