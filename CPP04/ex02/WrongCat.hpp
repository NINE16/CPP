#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include <cctype>
#include <iomanip>
#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
			WrongCat();
			WrongCat(WrongCat const &cpy);
			WrongCat(const std:: string z);
			WrongCat &operator = (const WrongCat &z);
			~WrongCat();
};

#endif