#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <cctype>
#include <iomanip>
#include <iostream>
// #include "Dog.hpp"
// #include "Cat.hpp"

class Animal
{
	protected:
				std:: string type;
	public:
				Animal();
				Animal(Animal const &cpy);
				Animal(const std:: string z);
				Animal &operator = (const Animal & z);
				~Animal();
				void makeSound() const;
				std:: string getType() const;		
};


#endif