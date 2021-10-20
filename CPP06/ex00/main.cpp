#include <iostream>
#include <string>
#include <limits>
#include <cmath>

bool onlydigit(std::string const & value)
{
	int verif = 0, nb = 0;
	for (size_t i = 0; value[i]; i++)
		if ((value[i] == '-' || value[i] == '+') && i == 0)
			;
		else if (std::isdigit(value[i] && ++nb))
			;
		else if ((value[i] == '.' || value[i] == ',') && !verif++)
			;
		else if (value[i] == 'f' && i + 1 == value.length())
			;
		else
			return (false);
	if (!nb)
			return (false);
	return (true);
}

bool isspecial(std::string const & value)
{
	return (value == "-inff" || value == "+inff" || value == "nanf" || value == "-inf" || value == "+inf" || value == "nan");
}

int main(int ac, char **av)
{
	if (ac != 2)
	{
		if (ac > 2)
			std::cout << "Put only one argument." << std::endl;
		else
			std::cout << "Put argument." << std::endl;
		return (1);
	}
	std::string value = av[1];
	double nb;
	if (!onlydigit(value) && !isspecial(value))
	{
		if (value.length() == 1)
			nb = static_cast<double>(value[0]);
		else
		{
			std::cout << "\"" << value << "\" is not digit." << std::endl;
			return (1);
		}
	}
	else
		nb = std::atof(value.c_str());
	char c = static_cast<char>(nb);
	if (isspecial(value) || c > std::numeric_limits<char>::max() || c < std::numeric_limits<char>::min())
		std::cout << "char : impossible" << std::endl;
	else if (!std::isprint(c))
		std::cout << "char : non displayable" << std::endl;
	else
		std::cout << "char : '" << c << "'" << std::endl;
	if (isspecial(value))
		std::cout << "int : impossible" << std::endl;
	else
		std::cout << "int : " << static_cast<int>(nb) << std::endl;
	std::cout << "float : " << static_cast<float>(nb);
	if (std::fmod(nb, 1))
		std::cout << "f" << std::endl;
	else
		std::cout << ".0f" << std::endl;
	std::cout << "double : " << nb;
	if (std::fmod(nb, 1))
		std::cout << std::endl;
	else
		std::cout << ".0" << std::endl;
	return 0;
}
