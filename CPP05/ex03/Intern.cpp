#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern:: Intern()
{
	std:: cout << "The intern is here to make forms... " << std::endl;
}
Intern:: Intern(Intern const &cpy)
{
	*this = cpy;
}

Intern &Intern:: operator = (const Intern &z)
{
	(void)z;
	return (*this);
}

static AForm* createShrubbery(std:: string target)
{
	return (new Shrubbery(target));
}

static AForm* createRobotomy(std:: string target)
{
	return (new RobotomyRequestForm(target));
}

static AForm* createPresidential(std:: string target)
{
	return (new Presidential(target));
}

AForm* Intern::makeForm(std::string formName, std::string target)
{
	std::cout << "target:" << target << std::endl;
	std:: string forms[] = {"robotomy request", "shrubbery creation", "presidential pardon"};
	AForm* newForms[] = {createRobotomy(target), createShrubbery(target), createPresidential(target)};
	for (int i = 0; i < 3; i++)
		{
			if (forms[i] == formName)
			{
				std:: cout << "Intern is creating " << forms[i] << std::endl;
				return (newForms[i]);
			}
		}
	std:: cout << "The Intern does not know the form: " << formName << std::endl;
	return (NULL);
}

Intern:: ~Intern()
{
	std:: cout << "Intern has gone on a break" << std::endl;
}
