#include "ClassPhonebook.hpp"

Contact setDetails(Phonebook contacts, int numberOfContact)
{
	std::string str;

	std::cout << "First name : ";
	getline(std::cin, str);
	contacts.contact[numberOfContact].setFirstName(str);
	std::cout << "Last name : ";
	getline(std::cin, str);
	contacts.contact[numberOfContact].setLastName(str);
	std::cout << "Nick name : ";
	getline(std::cin, str);
	contacts.contact[numberOfContact].setNickName(str);
	std::cout << "Phone Number : ";
	getline(std::cin, str);
	contacts.contact[numberOfContact].setPhoneNumber(str);
	std::cout << "Darkest Secret : ";
	getline(std::cin, str);
	contacts.contact[numberOfContact].setDarkestSecret(str);
	return contacts.contact[numberOfContact];
}

void	shortDetails(Phonebook contacts, int numberOfContact)
{
	for (int i = 0; i < numberOfContact; i++)
	{
		std::cout << std::right << std::setw(10) << i << "|";
		if (contacts.contact[i].getFirstName().size() > 10)
			std::cout << std::right << std::setw(9) << contacts.contact[i].getFirstName().substr(0, 9) << ".|";
		else
			std::cout << std::right << std::setw(10) << contacts.contact[i].getFirstName().substr(0, 10) << "|";
		if (contacts.contact[i].getLastName().size() > 10)
			std::cout << std::right << std::setw(9) << contacts.contact[i].getLastName().substr(0, 9) << ".|";
		else
			std::cout << std::right << std::setw(10) << contacts.contact[i].getLastName().substr(0, 10) << "|";
		if (contacts.contact[i].getNickName().size() > 10)
			std::cout << std::right << std::setw(9) << contacts.contact[i].getNickName().substr(0, 9) << ".|";
		else
			std::cout << std::right << std::setw(10) << contacts.contact[i].getNickName().substr(0, 10) << "|";
		std::cout << std::endl;
	}
}

void	moreDetails(Phonebook contacts, int numberOfContact)
{
	std::string number;
	
	std::cout << "Number of the contact you want to see the details : ";
	getline(std::cin, number);
	while (!number.size() || !(number.find_first_not_of("0123456789") == std::string::npos))
	{
		std::cout << "Add a number : ";
		getline(std::cin, number);
	}
	if (std::stoi(number) < numberOfContact)
	{
		std::cout << "First name : " << contacts.contact[std::stoi(number)].getFirstName() << std::endl;
		std::cout << "Last name : " << contacts.contact[std::stoi(number)].getLastName() << std::endl;
		std::cout << "Nickname : " << contacts.contact[std::stoi(number)].getNickName() << std::endl;
		std::cout << "Phone Number : " << contacts.contact[std::stoi(number)].getPhoneNumber() << std::endl;
		std::cout << "Darkest Secret : " << contacts.contact[std::stoi(number)].getDarkestSecret() << std::endl;
	}
	else
		std::cout << "contact not created yet, SEARCH again" << std::endl;
}

void	searchContact(Phonebook contact, int numberOfContact)
{
	std::cout << std::endl;
	std::cout << "     index|First name| Last name| Nick name|" << std::endl;
	shortDetails(contact, numberOfContact);
	if (numberOfContact != 0)
		moreDetails(contact, numberOfContact);
	else
		std::cout << "Empty phone book" << std::endl;
}



int main(int argc, char **argv)
{
	Phonebook contacts;
	int numberOfContact;
	std::string number;
	std::string str;

	numberOfContact = 0;
	if (argc != 1)
	{
		std::cout << "Launch error, remove this : " << argv[1] <<std::endl;
		return (0);
	}
	while (1)
	{
		std::cout << "Waiting for an instruction [ADD] or [SEARCH] or [EXIT]: ";
		getline(std::cin, str);
		if (str == "ADD")
		{
			if(numberOfContact == 8)
			{
				std::cout << "Phonebook is full, the last one will be replace by this one" << std::endl;
				numberOfContact--;
			}
			contacts.contact[numberOfContact] = setDetails(contacts, numberOfContact);
			numberOfContact++;
		}
		else if (str == "SEARCH")
			searchContact(contacts, numberOfContact);
		else if (str == "EXIT")
			break;
		else
			std::cout << "Instruction unkown, please try again [ADD] or [SEARCH] or [EXIT]" << std::endl;
	}
	std::cout << "Bye" << std::endl;
	return (0);
}