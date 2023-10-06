#include "easyfind.hpp"

int main ()
{
	std:: cout << "test for array: " << std::endl;
	std::array<int,6> ar = {1, 2, 3, 4, 5, 6};
	try {
		easyfind(ar, 10);

	}
	catch (const ElementNotFound &e){
		std:: cerr << e.what() << std::endl;
	}
	try {
		easyfind(ar, 5);

	}
	catch (const ElementNotFound &e){
		std:: cerr << e.what() << std::endl;
	}
	std:: cout << std::endl;
	std:: cout << "test for list: " << std::endl;
	std::vector<int> g1;
	for (int i = 0; i < 20; i++)
		g1.push_back(i);
	try {
		easyfind(g1, 25);
	}
	catch (const ElementNotFound &e){
		std:: cerr << e.what() << std::endl;
	}
	try {
		easyfind(g1, 10);

	}
	catch (const ElementNotFound &e){
		std:: cerr << e.what() << std::endl;
	}

	return 0;
}