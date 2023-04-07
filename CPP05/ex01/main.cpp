#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main()
{
	{
		try
		{
			Bureaucrat test("Bob", 1);
			std::cout << test << std::endl;
			std:: cout << "----------------------------" << std:: endl;
			Form bibi("Finance", 20, 150);
			test.signForm(bibi);
			std:: cout << "----------------------------" << std:: endl;
			std::cout << bibi << std::endl;
			bibi.beSigned(test);
		}
		catch (std::exception & e)
		{
			std::cout << "Error: " << e.what() << std::endl;
		}
	}

	// std::cout << std::endl;

	// {
	// 	Bureaucrat b5("Thierry", 42);
	// 	std::cout << b5 << std::endl;
	// 	Bureaucrat  b6 = b5;
	// 	std::cout << b6 << std::endl;
	// }
}