#ifndef DATA_HPP
# define DATA_HPP

#include <iomanip>
#include <string>
#include <cctype>
#include <iostream>
#include <stdint.h>

typedef struct s_data
{
	std:: string newdata;

} Data;

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif
