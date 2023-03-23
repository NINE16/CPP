#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"
#include "Brain.hpp"

int main()
{
	Animal** farm = new Animal*[4];
	// const Animal* i = new Cat();

	for (int i = 0; i < 4; i++)
	{
		if (i % 2 == 0)
		{
			farm[i] = new Dog();
		}
		else
			farm[i] = new Cat();
		std:: cout << std:: endl;
		std:: cout << "The animal number " << i << " : ";
		farm[i]->makeSound();
	}

	for (int i = 0; i < 4; i++)
	{
		delete farm[i];
	}
	delete[] farm;
	return 0;
}