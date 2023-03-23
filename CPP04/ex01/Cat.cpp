#include "Animal.hpp"
#include "Cat.hpp"

Cat:: Cat() :  Animal ()
{
	this->type = "Cat";
	this->brain = new Brain();
	std:: cout << "Cat by Animal constructor called" << std:: endl;
}

Cat:: Cat(const std:: string z) : Animal(z)
{
	this->type = z;
	std:: cout << "Cat type is: " << z << std:: endl;
}

Cat:: Cat(Cat const &cpy) : Animal (cpy)
{
	*this = cpy;
	std:: cout << "Cat copy constructor called" << std:: endl;
}

Cat &Cat:: operator = (const Cat &z)
{
	this->type = z.type;
	return (*this);
}

Cat:: ~Cat()
{
	std:: cout << "Cat destructor called" << std:: endl;
	delete this->brain;
}