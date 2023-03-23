#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

int main()
{
	// const Animal* meta = new Animal();
	// const Animal* j = new Dog();
	// const Animal* i = new Cat();
	// // std::cout << j->getType() << " " << std::endl;
	// // std::cout << i->getType() << " " << std::endl;
	// std:: cout << "-------------------------------- " << std:: endl;
	// i->makeSound(); //will output the cat sound!
	// std:: cout << "-------------------------------- " << std:: endl;
	// j->makeSound();
	// std:: cout << "-------------------------------- " << std:: endl;
	// meta->makeSound();
	const WrongAnimal *what = new WrongAnimal();
	const WrongAnimal *snake = new WrongCat();
	const WrongCat *spider = new WrongCat();
	std:: cout << "-------------------------------- " << std:: endl;
	what->makeSound();
	std:: cout << "-------------------------------- " << std:: endl;
	snake->makeSound();
	std:: cout << "-------------------------------- " << std:: endl;
	spider->makeSound();
	std:: cout << "-------------------------------- " << std:: endl;
	// delete meta;
	// delete j;
	// delete i;
	delete what;
	delete snake;
	delete spider;
	return 0;
}