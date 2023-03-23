#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main()
{

	FragTrap Bob("Joe");
	std:: cout << std:: endl;

	Bob.attack("Leslie");
	Bob.takeDamage(2);
	Bob.beRepaired(3);
	Bob.highFivesGuys();

	std:: cout << std:: endl;

	ScavTrap John("John");

	John.attack("Kevin");
	John.takeDamage(5);
	John.beRepaired(1);
	John.guardGate();
	John.guardGate();

	// std:: cout << std:: endl;

	// ClapTrap Karla("Karla");
	// Karla.attack("Sarah");
	// Karla.takeDamage(3);
	// Karla.beRepaired(1);

	std:: cout << std:: endl;


	return (0);
}