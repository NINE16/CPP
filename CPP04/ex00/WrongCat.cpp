#include "WrongCat.hpp"

WrongCat:: WrongCat() :  WrongAnimal ()
{
	this->type = "WrongCat";
	std:: cout << "WrongCat by WrongAnimal constructor called" << std:: endl;
}

WrongCat:: WrongCat(const std:: string z) : WrongAnimal(z)
{
	this->type = z;
	std:: cout << "WrongCat type is: " << z << std:: endl;
}

WrongCat:: WrongCat(WrongCat const &cpy) : WrongAnimal (cpy)
{
	*this = cpy;
	std:: cout << "WrongCat copy constructor called" << std:: endl;
}

WrongCat &WrongCat:: operator = (const WrongCat &z)
{
	this->type = z.type;
	return (*this);
}

WrongCat:: ~WrongCat()
{
	std:: cout << "Cat destructor called" << std:: endl;
}