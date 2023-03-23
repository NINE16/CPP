#include "WrongAnimal.hpp"

WrongAnimal:: WrongAnimal()
{
	this->type = "weirdo";
	std:: cout << "WrongAnimal constructor called" << std:: endl;
}

WrongAnimal:: WrongAnimal(WrongAnimal const &cpy)
{
	*this = cpy;
	std:: cout << "WrongAnimal copy constructor is called" << std:: endl;
}

WrongAnimal:: WrongAnimal (const std:: string z)
{
	this->type = z;
	std:: cout << "WrongAnimal type is " << z << std:: endl;
}

WrongAnimal &WrongAnimal:: operator = (const WrongAnimal &z)
{
	this->type = z.type;
	return (*this);
}

WrongAnimal:: ~WrongAnimal()
{
	std:: cout << "WrongAnimal destructor is called" << std:: endl;
}

void WrongAnimal:: makeSound() const
{
	std:: cout << "I dont recognize this " << this->type << " so cannot make its sound" << std:: endl;
}

std::string WrongAnimal:: getType() const
{
	return (this->type);
}