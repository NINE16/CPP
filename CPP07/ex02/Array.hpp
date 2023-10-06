#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <cctype>
#include <iomanip>
#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>

template <typename T> class Array
{
	private:
		T*				arr;
		unsigned int	_size;
	public:
			Array(): arr(NULL), _size(0){};
			Array(unsigned int n): arr(new T[n]), _size(n){};
			Array(Array &cpy): arr(new T[cpy.size()]), _size(cpy.size())
			{
				for (unsigned int i = 0; i < this->_size; i++)
					arr[i] = cpy.arr[i];				
			};
			Array& operator=(Array &z)
			{
				if (this != z)
				{
					if (arr)
						delete [] arr;
					this->_size = z._size;
					this->arr = new T[z._size];
					for (unsigned int i = 0; i < this->_size; i++)
						this->arr[i] = z.arr[i];
				}
				return (*this);
			};
			~Array()
			{
				delete []	 arr;
			}

			unsigned int 	size(void)
			{
				return (this->_size);
			}

			T& operator[](unsigned int n)
			{
				if (n >= this->_size)
				{
					throw std::out_of_range("Array index out of bound");
				}
    			return arr[n];
			};	
};

#endif