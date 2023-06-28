#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main()
{
	Intern intern;
	std:: cout << "-------------------------------" << std:: endl;
	AForm* rrf;
	std:: cout << "-------------------------------" << std:: endl;
	rrf = intern.makeForm("robotomy request", "Bender");
	std:: cout << "-------------------------------" << std:: endl;
	// rrf = intern.makeForm("lskjfsld1k", "sdlkfjsdl");
	std:: cout << "-------------------------------" << std:: endl;

}

