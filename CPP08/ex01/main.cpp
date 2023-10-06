#include "Span.hpp"

int main()
{
	Span sp = Span(7);
	try {
		sp.addNumber(6);
	}
	catch(const Span::Error &e)
	{
		std::cerr << e.what() << std::endl;
	}
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	try {
		std::cout << "shortest span: " << sp.shortestSpan() << std::endl;
	}
	catch(const Span::Error &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try {
		std::cout << "longest span: " << sp.longestSpan() << std::endl;
	}
	catch(const Span::Error &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std:: cout << std::endl;
	// Span y = Span(100);

	// srand( time(NULL));
	// for( int i = 0; i < 100; i++ ) {
		
	// 	y.addNumber( rand() );
	// }
	
	// std::cout << "Shortest: " << y.shortestSpan() << std::endl;
	// std::cout << "Longest: " << y.longestSpan() << std::endl;
	

	return 0;
}
