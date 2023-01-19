#ifndef REPLACESTRING_HPP
# define REPLACESTRING_HPP

#include <cctype>
#include <iomanip>
#include <iostream>
#include <fstream>
#include <string>

class Replace
{
	private:
			std:: string s1;
			std:: string s2;



	public:
			Replace();
			~Replace();
			std:: string getS1();
			std:: string getS2();
			void setS1(std:: string s1);
			void setS2(std:: string s2);
			void makeChange();
};

#endif