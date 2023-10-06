#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <iomanip>
#include <algorithm> 
#include <list>

class Span 
{
	private:
		unsigned int	max_size;
		std::list<int>	my_list;

	public:
		Span(unsigned int n);
		void addNumber(int n);
		int shortestSpan();
		int longestSpan();
		class MaxSizeException : public std::exception {
			public:
				 const char* what() const throw() { return "Max number of elements reached"; };
			};
		class Error : public std::exception {
			public:
			 const char* what() const throw() { return "Not enough elements"; };
		};
		~Span();
	// any attempt to add a new element if there
	// are already N elements stored should throw an exception.

};

#endif