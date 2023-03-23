#include "Animal.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

Dog:: Dog() :  AAnimal()
{
	this->type = "Dog";
	this->brain = new Brain();
	std:: cout << "Dog by AAnimal constructor called" << std:: endl;
}

Dog:: Dog(const std:: string z) : AAnimal(z)
{
	*this = z;
	std:: cout << "Dog type is: " << z << std:: endl;
}

Dog:: Dog(Dog const &cpy) : AAnimal(cpy)
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
	std:: cout << "Dog by AAnimal destructor called" << std:: endl;
	delete this->brain;
}

void Dog:: makeSound() const
{
	std:: cout << "I am a " << this->type << " and I go woufwouf" << std:: endl;
}