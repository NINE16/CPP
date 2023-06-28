#include "RobotomyRequestForm.hpp"

RobotomyRequestForm:: RobotomyRequestForm(std:: string target): AForm("Robotomy", 72, 45)
{
	this->target = target;
	std:: cout << "Robotomy constructor created" << std:: endl;
}

RobotomyRequestForm &RobotomyRequestForm:: operator= (const RobotomyRequestForm &z)
{
	if (this != &z)
		this->target = z.target;
	return (*this);
}

void RobotomyRequestForm:: executeForm(Bureaucrat const &bureaucrat) const
{
	unsigned seed = time(NULL);
	srand(seed);

	if (bureaucrat.getGrade() >= this->getGradetoExec())
	{
		throw GradeTooLowException();
		
	}
	else if (this->getSigned() == false)
	{
		std::cout << this->getName() << " form is not signed" << std:: endl;
	}
	else
	{
		if ((rand() % 2) == 0)
		{
			std:: cout << "Robotomy has been successfully created" << std:: endl;
		}
		else
			std:: cout << "Robotomy has failed, please try again " << std:: endl;
	}
}

RobotomyRequestForm:: ~RobotomyRequestForm()
{
	std:: cout << "Robotomy destructor called" << std:: endl;
}