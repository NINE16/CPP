#include "Zombie.hpp"


int main()
{
	Zombie *z1;
	Zombie z2;

	z2.setName("stevE ");
	z1 = newZombie("Josh ");
	randomChump("Foo ");
	z1->announce();
	z2.announce();
	delete z1;
	return (0);
}