#include "PresidentialPardonForm.hpp"

Presidential:: Presidential(std:: string target): AForm("Presidential", 25, 5)
{
	this->target = target;
	std:: cout << "Presidential Pardon Form constructor called" << std::endl;
}

Presidential &Presidential:: operator = (const Presidential &z)
{
	if (this != &z)
		this->target = z.target;
	return (*this);
}

void Presidential:: executeForm(Bureaucrat const &bureaucrat) const
{
	if (bureaucrat.getGrade() >= this->getGradetoExec())
		throw GradeTooLowException();
	else if (this->getSigned() == false)
		std::cout << this->getName() << " form is not signed" << std:: endl;
	else
	{
		std:: cout << this->target << " has been pardoned by Zaphod Beeblebrox" << std:: endl;
	}
}

Presidential:: ~Presidential()
{
	std:: cout << "Presidential destructor called" << std:: endl;
}