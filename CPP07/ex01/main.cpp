#include "iter.hpp"

int main ()
{
	std:: cout << "My type is int: " << std:: endl;
	int type1[] = {1, 2, 3, 4};
	iter(type1, 4, print<const int>);
	std:: cout << std:: endl;

	std:: cout << "My type is char:" << std:: endl;
	char type3[] = {'n', 't', 'k', 'b'};
	iter(type3, 4, print<char>);
	std:: cout << std:: endl;

	std:: cout << "My type is string:" << std:: endl;
	std:: string type4[] = {"hello", "yesss"};
	iter(type4, 2, print<std::string>);

	return (0);
}