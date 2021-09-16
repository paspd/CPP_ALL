#include <iostream>
#include <iomanip>
#include <string>

int main()
{
	std::string string = "HI THIS IS BRAIN";

	std::string *stringPTR = &string;
	std::string &stringREF = string;

	std::cout << "Address of string:" << std::endl;
	std::cout << "		Via string   :" << &string << std::endl;
	std::cout << "		Via stringPTR:" << stringPTR << std::endl;
	std::cout << "		Via stringREF:" << &stringREF << std::endl;
	std::cout << "Content of string :" << std::endl;
	std::cout << "		Via string   :" << string << std::endl;
	std::cout << "		Via stringPTR:" << *stringPTR << std::endl;
	std::cout << "		Via stringREF:" << stringREF << std::endl;
	return 0;
}
