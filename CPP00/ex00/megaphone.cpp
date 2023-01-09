#include <iostream>
#include <cctype>

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	char upper;

	i = 1;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (argv[i])
		{
			j = 0;
			while (argv[i][j])
			{
				upper = std::toupper(argv[i][j]);
				std::cout << upper;
				j++;
			}
			i++;
		}
		std::cout << std::endl;
	}
	return (0);
}