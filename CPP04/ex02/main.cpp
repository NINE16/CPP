#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"
#include "Brain.hpp"

int main()
{
	Dog *Kiki = new Dog("Kiki");
	std:: cout << std:: endl;
	Kiki->makeSound();

	std:: cout << std:: endl;

	Cat *Dexter = new Cat();
	std:: cout << std:: endl;
	Dexter->makeSound();

	delete Dexter;
	delete Kiki;
	return 0;
}