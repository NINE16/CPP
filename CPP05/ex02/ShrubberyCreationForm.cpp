#include "ShrubberyCreationForm.hpp"

Shrubbery:: Shrubbery(std:: string target): AForm("Shrubbery", 145, 137)
{
	this->target = target;
	std:: cout << "Shrubbery constructor created" << std:: endl;
}

Shrubbery &Shrubbery:: operator= (const Shrubbery &z)
{
	if (this != &z)
		this->target = z.target;;
	return (*this);
}

void Shrubbery:: executeForm(Bureaucrat const &bureaucrat) const
{
	if (bureaucrat.getGrade() >= this->getGradetoExec())
	{
		throw GradeTooLowException();
		
	}
	else if (this->getSigned() == false)
	{
		std::cout << "Form not signed" << std:: endl;
	}
	else
	{
		std:: cout << "Executing form ... " << std:: endl;
		std:: cout << std:: endl;
		executing();
	}
}

void Shrubbery:: executing() const
{
	std::fstream newfile;

	newfile.open(( "_Shrubbery"), std::fstream::in | std::fstream::out | std::fstream::app);
	if (!newfile)
	{
		std:: cout << "Error in file creation" << std:: endl;
		return ;
	}
	std:: cout << "Shrubbery form created " << std:: endl;
	newfile << "🎄"<< std::endl;
	// 		newfile <<"                                _ "<< std::endl;

	//         newfile << "        ,--.\`-. __				 "<< std::endl;
	//         newfile << "    _,.`. \:/,'  `-._			 "<< std::endl;	
	//         newfile << " ,-*' _,.-;-*`-.+'*._ )			 "<< std::endl;
	//         newfile << " ( ,.'* ,-' / `.  \.  `.		 "<< std::endl;
	//         newfile << ",'   ,;'  ,'\../\  \:   \		 "<< std::endl;
	//     newfile << "  (   ,'/   / \.,' :   ))  /		 "<< std::endl;
	//     newfile << "   \  |/   / \.,'  /  // ,'			 "<< std::endl;
	//         newfile << "\_)\ ,' \.,'  (  / )/  			 "<< std::endl;
	//         newfile << "    `  \._,'   `'				 "<< std::endl;
	//         newfile << "       \../						 "<< std::endl;
	//         newfile << "       \../						 "<< std::endl;
	//     newfile << " ~        ~\../           ~~		 "<< std::endl;
	// newfile << "~~        ~~   \../   ~~   ~      ~~     "<< std::endl;
	//      ~~    ~   ~~  __...---\../-...__ ~~~     ~~
	//        ~~~~  ~_,--'        \../      `--.__ ~~    ~~
	//    ~~~  __,--'              `"             `--.__   ~~~
	// ~~  ,--'                                         `--.
	//    '------......______             ______......------` ~~
	//  ~~~   ~    ~~      ~ `````---"""""  ~~   ~     ~~
	//         ~~~~    ~~  ~~~~       ~~~~~~  ~ ~~   ~~ ~~~  ~
	//      ~~   ~   ~~~     ~~~ ~         ~~       ~~   SSt
	//               ~        ~~       ~~~       ~
	newfile.close();
	return ;
}

Shrubbery:: ~Shrubbery()
{
	std:: cout << "Shrubbery destructor called" << std::endl;
}
