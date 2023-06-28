#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main()
{
	try
	{
		Bureaucrat test("Bob", 1);
		// Shrubbery	s("file");
		// RobotomyRequestForm robo("tryrobo");
		// test.signForm(robo);
		// std:: cout << "-------------------------------" << std:: endl;
		// // s.executeForm(test);
		// robo.executeForm(test);
		// RobotomyRequestForm r2("tryrobo");
		// std:: cout << "-------------------------------" << std:: endl;
		// test.signForm(r2);
		// r2.executeForm(test);
		// std:: cout << "-------------------------------" << std:: endl;
		Presidential p("pres");
		Shrubbery a("tree");
		RobotomyRequestForm Zap("Robo");
		test.signForm(p);
		p.executeForm(test);
		std:: cout << "-------------------------------" << std:: endl;
		test.signForm(a);
		a.executeForm(test);
		std:: cout << "-------------------------------" << std:: endl;
		test.signForm(Zap);
		Zap.executeForm(test);
	}
	catch (std:: exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
}