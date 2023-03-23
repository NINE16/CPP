#include "Animal.hpp"

AAnimal:: AAnimal()
{
	std:: cout << "AAnimal constructor called" << std:: endl;
}

AAnimal:: AAnimal(const std:: string z)
{
	this->type = z;
	std:: cout << "AAnimal type is: " << z << std:: endl;
}

AAnimal:: AAnimal(AAnimal const &cpy)
{
	*this = cpy;
	std:: cout << "AAnimal copy constructor called" << std:: endl;
}

AAnimal &AAnimal:: operator = (const AAnimal &z)
{
	this->type = z.type;
	// this->makeSound() = z.makeSound();
	return (*this);
}

AAnimal:: ~AAnimal()
{
	std:: cout << "AAnimal destructor called" << std:: endl;
}

std::string AAnimal:: getType() const
{
	return (this->type);
}
