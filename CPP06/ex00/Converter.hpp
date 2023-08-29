#ifndef CONVERTER_HPP
# define CONVERTER_HPP

#include <cctype>
#include <iomanip>
#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>
#include <limits>

/* first figure out the actual type and convert it from string */

class Converter
{
	public:
			Converter();
			Converter(const std:: string input);
			Converter(Converter const &cpy);
			Converter &operator= ( Converter const &z);
			~Converter();

			void convert(std:: string str);
			std:: string mytype (std:: string str);

			// int isChar(std:: string arg);
			void	isDouble(std:: string arg);
			void	isInt(std:: string arg);
			void	isFloat(std:: string arg);
			void	isChar(std:: string arg);


	private:
			const std:: string arg;
};

#endif
