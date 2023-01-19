#include "replaceString.hpp"

Replace:: Replace()
{

}

Replace:: ~Replace()
{

}

std:: string Replace:: getS1()
{
	return (this->s1);
}

std:: string Replace:: getS2()
{
	return (this->s2);
}

void Replace::setS1(std:: string s1)
{
	this->s1 = s1;
}

void Replace:: setS2(std:: string s2)
{
	this->s2 = s2;
}

void Replace:: makeChange()
{
	std:: cout << "s1: " << this->getS1() << " and s2: " << this->getS2() << std::endl;
}