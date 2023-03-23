#include "Animal.hpp"

Animal:: Animal()
{
	std:: cout << "Animal constructor called" << std:: endl;
}

Animal:: Animal(const std:: string z)
{
	this->type = z;
	std:: cout << "Animal type is: " << z << std:: endl;
}

Animal:: Animal(Animal const &cpy)
{
	*this = cpy;
	std:: cout << "Animal copy constructor called" << std:: endl;
}

Animal &Animal:: operator = (const Animal &z)
{
	this->type = z.type;
	// this->makeSound() = z.makeSound();
	return (*this);
}

Animal:: ~Animal()
{
	std:: cout << "Animal destructor called" << std:: endl;
}

void Animal:: makeSound() const
{
	if (this->type == "Cat" || this->type == "cat")
		std:: cout << this->type << " makes mieaouw" << std:: endl;
	else if (this->type == "Dog" || this->type == "dog")
		std:: cout << this->type << " is barking" << std:: endl;
	else
		std:: cout << "Do not know this type, not sure what noise it makes" << std:: endl;
}

std::string Animal:: getType() const
{
	return (this->type);
}
