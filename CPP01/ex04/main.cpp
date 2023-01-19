#include "replaceString.hpp"

std:: string myreplace(std:: string line, std:: string s1, std:: string s2)
{
	std:: size_t found;

	found = line.find(s1);
	while (found != std::string:: npos)	
	{
		line.erase(found,s1.size());
		line.insert(found, s2);
		found = line.find(s1, (found + s1.size()));
	}
	return (line);
}


int main(int argc, char **argv)
{
	std::ifstream change;
	std::ofstream newdoc;
	Replace modif;
	std:: string line;
	std:: string s1;
	std:: string s2;
	std:: string file;

	if (argc == 4)
	{
		file = argv[1];
		s1 = argv[2];
		s2 = argv[3];
		change.open(file);
		newdoc.open(file + ".replace.txt");
		if (change.is_open())
		{
			while (std::getline(change, line))
			{
				line = myreplace(line, s1, s2);
				newdoc << line << std::endl;
			}
		}	
		else
			std::cout << "Sorry, the file could not be opened\n";
		change.close();
		newdoc.close();
	}
	else
		std:: cout << "You dont have enough arguments to call this function\n";
}