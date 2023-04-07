#include "Bureaucrat.hpp"

int	main()
{
	{
		try
		{
			Bureaucrat	bibi("Joe", 50);
			bibi.incrementGrade(10);
			std::cout << bibi << std::endl;
		}
		catch (std::exception & e)
		{
			std::cout << "Error: " << e.what() << std::endl;
		}
	}

	std::cout << std::endl;

	{
		Bureaucrat b5("Thierry", 42);
		std::cout << b5 << std::endl;
		Bureaucrat  b6 = b5;
		std::cout << b6 << std::endl;
	}
}