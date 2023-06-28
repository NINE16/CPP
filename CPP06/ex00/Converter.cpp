#include "Converter.hpp"

Converter:: Converter()
{
	std:: cout << "Converter constructor created" << std:: endl;
}

Converter:: Converter(const std:: string input): arg(input) 
{
	// input = this->arg;
	std:: cout << "Converter constructor created" << std:: endl;
}

Converter:: Converter(Converter const &cpy)
{
	*this = cpy;
}

Converter &Converter:: operator = (const Converter &z)
{
	(void)z;
	// if (this != &z)
	// 	this->arg = z.arg;
	return (*this);
}
			
Converter:: ~Converter()
{
	std:: cout << "Destructor called" << std:: endl;
}

void Converter:: convert(const std:: string str)
{
	const char *copy = str.c_str();
	double copy2 = std::atof(copy);
	// return first string to char -- float
	// string to float 
	if (str == "nan" || str== "-inff" || str=="+inff" || str=="nanf" || str=="inf" || str == " -inf" || str ==  "+inf")
	{
		std:: cout << "char: impossible " << std:: endl;
		std:: cout << "int: impossible " << std:: endl;
		std:: cout << "float: nanf" << std:: endl;
		std:: cout << "double: nan " << std:: endl;
		return ;
	}
	int changeInt = static_cast<int>(copy2);
	if (changeInt < -(INT_MAX) || changeInt < INT_MIN || isnan(changeInt))
		std:: cout << "int : impossible" << std:: endl;
	else
		std:: cout << "int : " << changeInt << std:: endl;
	if (isprint(static_cast<char>(copy2)))
		std:: cout << "char: " << static_cast<char>(copy2) << std:: endl;
	else
		std:: cout << "char: Non displayable" << std:: endl;

	//check if there is already a "."
	std:: cout << "float : " << atof(arg.c_str()) << ".0f" << std:: endl;
	std:: cout << "double : " << static_cast<double>(static_cast<float>(copy2)) << ".0" << std:: endl;

}


int isChar(std:: string arg)
{

}

int	isFloat(std:: string arg)
{

}

int	isDouble(std:: string arg)
{

}

int	isInt(std:: string arg)
{
	
}

/*
1) for each type, create a function to determine whether the arg is that type
2) if yes, print and print the rest with the converter
3) if not, move on to the next check
*/