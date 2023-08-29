#include "Converter.hpp"

Converter:: Converter()
{
	std:: cout << "Converter constructor created" << std:: endl;
}

Converter:: Converter(const std:: string input): arg(input)
{
	std:: cout << "Converter constructor created" << std:: endl;
}

Converter:: Converter(Converter const &cpy)
{
	*this = cpy;
}

Converter &Converter:: operator = (const Converter &z)
{
	(void)z;
	return (*this);
}

Converter:: ~Converter()
{
	std:: cout << "Destructor called" << std:: endl;
}

void Converter:: convert(const std:: string str)
{
	if (str == "nan" || str=="inf" || str == " -inf" || str ==  "+inf")
	{
		std:: cout << "char: impossible " << std:: endl;
		std:: cout << "int: impossible " << std:: endl;
		std:: cout << "float : " << str + "f" << std::endl;
		std:: cout << "double : " << str << std::endl;
		return ;
	}
	else if (str == "nanf" || str == "+inff" || str == "-inff" || str == "inff")
	{
		std::cout << "char : impossible" << std::endl;
		std::cout << "int : impossible" << std::endl;
		std::cout << "float : " << arg << std::endl;
		std::cout << "double : " << arg.substr(0, arg.length() - 1) << std::endl;
		return ;
	}
	std:: string type = mytype(str);
	std:: cout << "this is my type:" << type << std::endl;
	if (type == "float")
		isFloat(str);
	if (type == "double")
		isDouble(str);
	if (type == "int")
		isInt(str);
	if (type == "char")
		isChar(str);
	if (type == "other")
		std::cout << "Cannot be categorized" << std:: endl;
}

std:: string Converter:: mytype (std:: string str)
{
	if (str.find('.', 0) != std:: string::npos)
	{
		if (str.back() == 'f')
			return ("float");
		else
			return ("double");
	}
	else
	{
		if ((isdigit(str[0]) && str.size() == 1) || (str.find_first_not_of('-', 0) != std:: string::npos && str.size() == 1))
			return ("int");
		else if (isprint(str[0]) && str.size() == 1)
			return ("char");
		else
			return ("int");
	}
	return (NULL);
}

void Converter:: isChar(std:: string arg)
{
	char chara = arg[0];
	if (isprint(chara))
		std:: cout << "char: " << "'" << chara << "'"<< std:: endl;
	else if (stoi(arg) < 32 || stoi(arg) > 127)
	{
		std::cout << "char: Non Displayable" << std::endl;
	}
	else
		std:: cout << "char: Non displayable" << std:: endl;
	int changeInt = static_cast<int>(chara);
	// int newint = stoi(arg);
	if (changeInt < -(INT_MAX) || changeInt < INT_MIN || isnan(changeInt))
		std:: cout << "int : impossible" << std:: endl;
	else
		std:: cout << "int : " << changeInt << std:: endl;
	std:: cout << "float : " << static_cast<float>(changeInt) << ".0f" << std:: endl;
	std:: cout << "double : " << static_cast<double>(static_cast<float>(changeInt)) << ".0" << std:: endl;
}


void	Converter:: isDouble(std:: string arg)
{
	double dnumber = stod(arg);
	double dresult = static_cast<double>(dnumber);
	if (dnumber == stoi(arg))
	{
		std::cout << "double: " << dresult << ".0" << std::endl;
		std::cout << "float: " << dresult << ".0f" << std::endl;
	}
	else
	{
		std::cout << "double2: " << dresult << std::endl;
		std::cout << "float2: " << static_cast<float>(dresult) << "0f" << std::endl;
	}
	int changeInt = static_cast<int>(dnumber);
	if (changeInt < -(INT_MAX) || changeInt < INT_MIN || isnan(changeInt))
		std:: cout << "int : impossible" << std:: endl;
	else
		std:: cout << "int : " << changeInt << std:: endl;
	char chara = static_cast<char>(changeInt);
	if (isprint(chara))
		std:: cout << "char: " << "'" << chara << "'"<< std:: endl;
	else
		std:: cout << "char: Non displayable" << std:: endl;

}

void Converter::	isInt(std:: string arg)
{
	const char *copy = arg.c_str();
	double copy2 = std::atof(copy);
	int newnumber;
	try
	{
		(newnumber = stoi(arg));
		if (arg.length() == 1 && isprint(arg[0]))
			std::cout << "int: " << static_cast<int>(arg[0]) << std::endl;
		else if (stoi(arg) == -1 || stoi(arg) < -(INT_MAX) || stoi(arg) < INT_MIN || isnan(stoi(arg)))
			std:: cout << "int : impossible" << std:: endl;
	}
	catch(...)
	{
		std::cout << "int : impossible" << std::endl;
	}
	std:: cout << "float : " << atof(arg.c_str()) << ".0f" << std:: endl;
	if (isprint(static_cast<char>(arg[0]) && arg.length() == 1) || isprint(static_cast<char>(arg[0]) ))
		std:: cout << "char: " << "'" << static_cast<char>(newnumber) << "'"<< std:: endl;
	else
		std:: cout << "char: Non displayable" << std:: endl;
	std:: cout << "double : " << static_cast<double>(static_cast<float>(copy2)) << ".0" << std:: endl;
}

void Converter:: isFloat(std::string arg)
{
	const char *copy = arg.c_str();
	double copy2 = std::atof(copy);

	std:: cout << "float : " << arg << std:: endl;
	int changeInt = static_cast<int>(copy2);
	if (changeInt < -(INT_MAX) || changeInt < INT_MIN || isnan(changeInt))
		std:: cout << "int : impossible" << std:: endl;
	else
		std:: cout << "int : " << changeInt << std:: endl;
	if (isprint(static_cast<char>(copy2)))
		std:: cout << "char: " << "'" << static_cast<char>(copy2) << "'"<< std:: endl;
	else
		std:: cout << "char: Non displayable" << std:: endl;
	double number = stod(arg);
	double result = static_cast<double>(number);
	if (number == stoi(arg))
		std::cout << "double: " << result << ".0" << std::endl;
	else
		std::cout << "double2: " << result << std::endl;
}
