#include "Animal.hpp"
#include "Cat.hpp"

Cat:: Cat() :  AAnimal ()
{
	this->type = "Cat";
	this->brain = new Brain();
	std:: cout << "Cat by AAnimal constructor called" << std:: endl;
}

Cat:: Cat(const std:: string z) : AAnimal(z)
{
	this->type = z;
	std:: cout << "Cat type is: " << z << std:: endl;
}

Cat:: Cat(Cat const &cpy) : AAnimal (cpy)
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

void Cat:: makeSound() const
{
	std:: cout << "I am a " << this->type << " and I go mieaouw" << std:: endl;
}
