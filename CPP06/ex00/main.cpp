#include "Converter.hpp"

int main(int argc, char **argv)
{
	if (argc < 2)
		std:: cout << "Not enough arguments to launch the program" << std::endl;
	else
	{
		Converter input(argv[1]);
		input.convert(argv[1]);
	}
}