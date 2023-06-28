#ifndef CONVERTER_HPP
# define CONVERTER_HPP

#include <cctype>
#include <iomanip>
#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>
#include <limits>

class Converter
{
	public:
			Converter();
			Converter(const std:: string input);
			Converter(Converter const &cpy);
			Converter &operator= ( Converter const &z);
			~Converter();

			void convert(std:: string str);
			int isChar(std:: string arg)
			int	isDouble(std:: string arg)
			int	isInt(std:: string arg)
			int	isFloat(std:: string arg)
			
	private:
			const std:: string arg;
};

#endif