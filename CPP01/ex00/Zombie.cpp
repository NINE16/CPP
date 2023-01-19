#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "Constructor called" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << this->Name << "Zombie gone" << std::endl;
}

void Zombie:: announce (void)
{
	std::cout << this->Name;
	std::cout << "BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie:: setName(std:: string name)
{
	this->Name = name;
}