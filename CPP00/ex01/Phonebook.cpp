#include "class.hpp"

int		is_only_digits(std::string str)
{
	for (size_t i = 0; i < str.size(); i++)
	{
		if (!::isdigit(str[i]))
			return (1);
	}
	return (0);
}

void	aff_full_contact(phoneBook *phoneBook, int contact_id)
{
	if (contact_id >= phoneBook->get_nb_contact())
	{
		std::cout << "This contact does not exists." << std::endl;
		return ;
	}
	std::cout << "first_name : " << phoneBook->get_first_name(contact_id) << std::endl;
	std::cout << "last_name : " << phoneBook->get_last_name(contact_id) << std::endl;
	std::cout << "nickname : " << phoneBook->get_nickname(contact_id) << std::endl;
	std::cout << "phone_number : " << phoneBook->get_phone_number(contact_id) << std::endl;
	std::cout << "darkest_secret : " << phoneBook->get_darkest_secret(contact_id) << std::endl;
}

void	search(phoneBook *phoneBook)
{
	std::string command;

	std::cout << "|     INDEX|FIRST NAME| LAST NAME|  NICKNAME|" << std::endl;
	for (int i = 0; i < phoneBook->get_nb_contact(); i++)
	{
		std::cout << "|" << std::right << std::setw(10) << i << "|";
		if (phoneBook->get_first_name(i).size() > 10)
			std::cout << std::right << std::setw(9) << phoneBook->get_first_name(i).substr(0, 9) << ".|";
		else
			std::cout << std::right << std::setw(10) << phoneBook->get_first_name(i).substr(0, 10) << "|";
		if (phoneBook->get_last_name(i).size() > 10)
			std::cout << std::right << std::setw(9) << phoneBook->get_last_name(i).substr(0, 9) << ".|";
		else
			std::cout << std::right << std::setw(10) << phoneBook->get_last_name(i).substr(0, 10) << "|";
		if (phoneBook->get_nickname(i).size() > 10)
			std::cout << std::right << std::setw(9) << phoneBook->get_nickname(i).substr(0, 9) << ".|";
		else
			std::cout << std::right << std::setw(10) << phoneBook->get_nickname(i).substr(0, 10) << "|";
		std::cout << std::endl;
	}
	std::cout << "Number of the contact you want to see the details : ";
	std::getline(std::cin, command);
	while (is_only_digits(command))
	{
		std::cout << "You have to puts only digit." << std::endl;
		std::cout << "Number of the contact you want to see the details : ";
		std::getline(std::cin, command);
	}
	aff_full_contact(phoneBook, std::atoi(command.c_str()));
}

void	add_contact(phoneBook *phoneBook)
{
	std::string command;

	if (phoneBook->get_nb_contact() == 8)
	{
		std::cout << "The PhoneBook is completely full, you cannot add any more contacts." << std::endl;
		return ;
	}
	std::cout << "First name : ";
	std::getline(std::cin, command);
	phoneBook->set_first_name(phoneBook->get_nb_contact(), command);
	std::cout << "Last name : ";
	std::getline(std::cin, command);
	phoneBook->set_last_name(phoneBook->get_nb_contact(), command);
	std::cout << "Nickname : ";
	std::getline(std::cin, command);
	phoneBook->set_nickname(phoneBook->get_nb_contact(), command);
	std::cout << "Phone number : ";
	std::getline(std::cin, command);
	while (is_only_digits(command))
	{
		std::cout << "You have to puts only digit." << std::endl;
		std::cout << "Phone number : ";
		std::getline(std::cin, command);
	}
	phoneBook->set_phone_number(phoneBook->get_nb_contact(), command);
	std::cout << "Darkest secret : ";
	std::getline(std::cin, command);
	phoneBook->set_darkest_secret(phoneBook->get_nb_contact(), command);
	phoneBook->set_nb_contact(phoneBook->get_nb_contact() + 1);
}

int main(int argc, char *argv[])
{
	system("clear\n");
	(void)argv;
	phoneBook phoneBook;
	std::string command;
	if (argc != 1)
	{
		std::cout << "Error do not puts arguments !" << std::endl;
		return (0);
	}
	phoneBook.set_nb_contact(0);
	while (1)
	{
		getline(std::cin, command);
		if (!command.compare("EXIT"))
			return (0);
		else if (!command.compare("ADD"))
			add_contact(&phoneBook);
		else if (!command.compare("SEARCH"))
			search(&phoneBook);
	}
	return 0;
}
