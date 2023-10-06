#ifndef ITER_HPP
# define ITER_HPP

#include <cctype>
#include <iomanip>
#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>

template <typename T, typename F>
void iter(T array, int size, F func)
{
	for (int i = 0; i < size; i++)
	{
		func(array[i]);
	}
}

template <typename T>
void print(T &i)
{
	std::cout << "Current i is: " << i << std::endl;
}

#endif