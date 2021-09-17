#include <iostream>
#include <string>
#include <fstream>

int main(int argc, char const *argv[])
{
	if (argc != 4)
	{
		std::cout << "Please put's argument to this format :" << std::endl;
		std::cout << "		./Sed_is_for_losers file_name s1 s2" << std::endl;
		return 1;
	}

	std::string file_name = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];

	std::ifstream ifs;
	std::ofstream ofs;

	ifs.open(file_name);

	if (ifs.fail())
	{
		std::cout << "The file doesn't exists, please verify the file name" << std::endl;
		return 1;
	}
	
	ofs.open(file_name + ".replace");

	std::string temp;

	while (std::getline(ifs, temp))
	{
		if (temp == s1)
			temp = s2;
		ofs << temp << std::endl;
	}
	return 0;
}
