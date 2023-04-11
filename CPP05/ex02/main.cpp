#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main()
{
	Bureaucrat test("Bob", 151);
	Shrubbery	s("file");
	std::cout << std::endl;
	try
	{
		test.signForm(s);
		s.executeForm(test);
	}
	catch (std:: exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}

	// {
	// 	Bureaucrat b5("Thierry", 42);
	// 	std::cout << b5 << std::endl;
	// 	Bureaucrat  b6 = b5;
	// 	std::cout << b6 << std::endl;
	// }
}