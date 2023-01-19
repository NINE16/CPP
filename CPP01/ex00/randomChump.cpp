#include "Zombie.hpp"

void randomChump(std::string name)
{
	Zombie Zombie1;
	Zombie1.setName(name);
	Zombie1.announce();
	return ;
}