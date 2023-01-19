#include "Zombie1.hpp"

Zombie::Zombie()
{
	std::cout << "Zombies in creation..." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << this->Name << "is GONE" << std::endl;
}

void Zombie:: announce (void)
{
	std::cout << this->Name;
	std::cout << " is here! ";
	std::cout << "BraiiiiiiinnnzzzZ..." << std::endl;

}

void Zombie:: setName(std:: string name)
{
	this->Name = name;
}

Zombie* newZombie(std::string name)
{
	Zombie* newZombie = new Zombie();
	newZombie->setName(name);
	newZombie->announce();
	return (newZombie);
}
