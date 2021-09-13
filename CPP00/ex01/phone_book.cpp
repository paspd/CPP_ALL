#include "class.hpp"

void	add_contact(phoneBook *phoneBook)
{
	std::string command;
	if (phoneBook->get_nb_contact() == 8)
	{
		std::cout << "The PhoneBook is completely full, you cannot add any more contacts." << std::endl;
		return ;
	}
	std::cout << "first_name : ";
	std::getline(std::cin, command);
	phoneBook->set_first_name(phoneBook->get_nb_contact(), command);
	std::cout << "last_name : ";
	std::getline(std::cin, command);
	phoneBook->set_last_name(phoneBook->get_nb_contact(), command);
	std::cout << "nickname : ";
	std::getline(std::cin, command);
	phoneBook->set_nickname(phoneBook->get_nb_contact(), command);
	std::cout << "phone_number : ";
	std::getline(std::cin, command);
	phoneBook->set_phone_number(phoneBook->get_nb_contact(), command);
	std::cout << "darkest_secret : ";
	std::getline(std::cin, command);
	phoneBook->set_darkest_secret(phoneBook->get_nb_contact(), command);
	phoneBook->set_nb_contact(phoneBook->get_nb_contact() + 1);
}

int main(int argc, char const *argv[])
{
	system("clear\n");
	phoneBook phoneBook;
	std::string command;
	int	nb_contact = 0;
	if (argc != 1)
	{
		std::cout << "Error do not puts arguments !" << std::endl;
		return (0);
	}
	phoneBook.set_phoneBook();
	while (1)
	{
		getline(std::cin, command);
		if (!command.compare("EXIT"))
			return (0);
		else if (!command.compare("ADD"))
			add_contact(&phoneBook);
		else if (!command.compare("SEARCH"))
			phoneBook.search();
	}
	return 0;
}
