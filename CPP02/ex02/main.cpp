#include "Fixed.hpp"

int main ()
{
	Fixed		a;
	Fixed const	b(Fixed(5.05f) * Fixed(2));

	
	std::cout << "this is a: " << a << std::endl;
	std::cout << "this is ++a: " << ++a << std::endl;
	std::cout << "this is a: " << a << std::endl;
	std::cout << "this is a++: " << a++ << std::endl;
	std::cout << "this is a: " << a << std::endl;

	std::cout << "this is b: " << b << std::endl;
	
	std::cout << "this is max: " << Fixed::max(a , b) << std::endl;

	return 0;


}