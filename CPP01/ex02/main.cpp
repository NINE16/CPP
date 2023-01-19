#include <iostream>
#include <cctype>
#include <iomanip>

int main ()
{
	std:: string brain = "HI THIS IS BRAIN";
	std:: string* stringPTR = &brain;
	std:: string& stringREF = brain;

	std::cout << "Printing addresses...: " << std:: endl << std::endl;
	std::cout << "Memory address of brain: " << &brain << std::endl;
	std::cout << "Memory address of stringPTR: " << stringPTR << std::endl;
	std::cout << "Memory address of stringREF: " << &stringREF << std::endl << std::endl;

	std::cout << "Printing values...: " << std::endl << std::endl;
	std::cout << "Value address of brain: " << brain << std::endl;
	std::cout << "Value address of stringPTR: " << *stringPTR << std::endl;
	std::cout << "Value address of stringREF: " << stringREF << std::endl;

	return (0);
}