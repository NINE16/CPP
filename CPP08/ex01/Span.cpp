#include "Span.hpp"

Span:: Span(unsigned int n)
{
	this->max_size = n;
	std:: cout << "Constructor called" << std:: endl;
}

void Span:: addNumber(int n)
{

	if (this->my_list.size() >= this->max_size)
		throw MaxSizeException();
	else
		this->my_list.push_back(n);
	for (std::list<int>::iterator i=this->my_list.begin(); i!=this->my_list.end(); i++)
       std::cout << *i << " ";
      
    std::cout << std::endl;
}

int Span:: longestSpan()
{
	if (this->my_list.size() < 2)
		throw Span::Error();
	int max = *std::max_element(this->my_list.begin(), this->my_list.end());
	int min = *std::min_element(this->my_list.begin(), this->my_list.end());
	return (max - min);
}

int Span:: shortestSpan()
{
	if (this->my_list.size() < 2)
		throw Span::Error();
	int diff = this->longestSpan();
	for (std::list<int>::const_iterator i = this->my_list.begin(); i != this->my_list.end(); i++)
	{
        for (std::list<int>::const_iterator i2 = this->my_list.begin(); i2 != this->my_list.end(); i2++)
		{
			if (*i2 == *i)
				continue ;
            if ((std::abs(*i2 - *i) < (diff)))
                diff = std::abs(*i2 - *i);
		}
	}
	return (diff);
}

Span:: ~Span()
{
	std:: cout << "Span destructor called" << std:: endl;
}