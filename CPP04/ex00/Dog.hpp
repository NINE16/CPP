#ifndef DOG_HPP
# define DOG_HPP

#include <cctype>
#include <iomanip>
#include <iostream>
#include "Animal.hpp"
// #include "Cat.hpp"

class Dog : public Animal
{
	public:
			Dog();
			Dog(Dog const &cpy);
			Dog(const std:: string z);
			Dog &operator = (const Dog & z);
			~Dog();
};

#endif