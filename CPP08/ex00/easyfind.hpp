#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <cctype>
#include <iomanip>
#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>
#include <algorithm>
#include <vector>
#include <list>
#include <array>
#include <exception> 

class ElementNotFound : public std::exception{
	public:
			const char* what() const throw(){
				return ("No occurance found");
			}

};

template <typename T>
void easyfind(T &container, int i)
{
	typename T::iterator n = std::find(container.begin(), container.end(), i);
	if (n != container.end())
		std::cout << "Found: " << i << std:: endl;
	else
		throw ElementNotFound();
};


#endif