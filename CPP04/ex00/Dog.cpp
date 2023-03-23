#include "Animal.hpp"
#include "Dog.hpp"

Dog:: Dog() :  Animal()
{
	this->type = "Dog";
	std:: cout << "Dog by Animal constructor called" << std:: endl;
}

Dog:: Dog(const std:: string z) : Animal(z)
{
	*this = z;
	std:: cout << "Dog type is: " << z << std:: endl;
}

Dog:: Dog(Dog const &cpy) : Animal(cpy)
{
	*this = cpy;
	std:: cout << "Dog copy constructor called" << std:: endl;
}

Dog &Dog:: operator = (const Dog &z)
{
	this->type = z.type;
	return (*this);
}

Dog:: ~Dog()
{
	std:: cout << "Dog by Animal destructor called" << std:: endl;
}