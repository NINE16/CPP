#include "ClapTrap.hpp"

int	main()
{
	ClapTrap John("John");
	// ClapTrap Karla("Karla");

	John.attack("Kevin");
	John.takeDamage(5);
	John.beRepaired(1);

// 	std:: cout << std:: endl;

// 	Karla.attack("Sarah");
// 	Karla.takeDamage(3);
// 	Karla.beRepaired(1);
}