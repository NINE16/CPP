#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	ScavTrap John1("John");

	John1.attack("Kevin");
	John1.takeDamage(5);
	John1.beRepaired(1);
	John1.guardGate();
	John1.guardGate();

	std:: cout << std:: endl;

	ClapTrap Karla("Karla");
	std:: cout << std:: endl;
	Karla.attack("Sarah");
	Karla.takeDamage(3);
	Karla.beRepaired(1);
	return (0);
}