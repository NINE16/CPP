#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <cctype>
#include <iomanip>
#include <iostream>
// #include "Dog.hpp"
// #include "Cat.hpp"

class AAnimal
{
	protected:
				std:: string type;
	public:
				AAnimal();
				AAnimal(AAnimal const &cpy);
				AAnimal(const std:: string z);
				AAnimal &operator = (const AAnimal & z);
				virtual ~AAnimal();
		virtual	void makeSound() const = 0;
				std:: string getType() const;		
};


#endif