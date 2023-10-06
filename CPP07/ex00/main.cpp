#include "Whatever.hpp"

int main( void ) {
	
	int a = 9;
	int b = 9;
	std::cout << "a before = " << a << ", b before = " << b << std::endl;
	swap( a, b );
	std::cout << "a after = " << a << ", b after = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";

	std::cout << "c before = " << c << ", d before = " << d << std::endl;
	swap(c, d);
	std::cout << "c after = " << c << ", d after = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;


	float t = 42.0;
	float f = 88.98;
	std::cout << "t before = " << t << ", f before = " << f << std::endl;
	swap(t,f);
	std::cout << "t after = " << t << ", f after = " << f << std::endl;
	std::cout << "min( t, f ) = " << ::min( t, f ) << std::endl;
	std::cout << "max( t, f ) = " << ::max( t, f ) << std::endl;


	return 0;


}

