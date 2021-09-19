#include "Karen.hpp"

int main(int argc, char const *argv[])
{
	Karen karen;
	std::string	level;

	if (argc != 2)
		return 1;

	level = argv[1];

	karen.complain(level);
	return 0;
}
