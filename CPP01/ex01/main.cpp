#include "Zombie1.hpp"

int main ()
{
	std:: string ZombieName;
	int	zombieQuant;
	Zombie* horde;

	std:: cout << "Hello! Let's create some Zmbies! How many would you like to create?" << std::endl;
	std:: cin >> zombieQuant;
	for (int i = 0; i < zombieQuant; i++)
	{
		std:: cout << "Whats's the name of your Zombie number " << (i + 1) << " ?" << std:: endl;
		std:: cin >> ZombieName;
		horde = zombieHorde(zombieQuant, ZombieName);
		delete horde;
	}
	return (0);
}