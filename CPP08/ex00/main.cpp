#include "Easyfind.hpp"

int main()
{
	std::list<int> list;

	list.push_back(42);
	list.push_back(667);
	list.push_back(21);

	try {
		std::cout << easyfind(list, 667) << std::endl;
		std::cout << easyfind(list, 1000) << std::endl;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}


	std::vector<int> vector;

	vector.push_back(42);
	vector.push_back(667);
	vector.push_back(21);

	try {
		std::cout << easyfind(vector, 667) << std::endl;
		std::cout << easyfind(vector, 1000) << std::endl;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
	return 0;
}
