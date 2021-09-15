#include "ClassContact.hpp"

Contact::Contact(void)
{
	return;
}

Contact::~Contact(void)
{
	return;
}

void Contact::setFirstName(std::string firstName)
{
	this->_firstName = firstName;
	return;
}

void Contact::setLastName(std::string lastName)
{
	this->_lastName = lastName;
	return;
}

void Contact::setNickName(std::string nickName)
{
	this->_nickName = nickName;
	return;
}

void Contact::setPhoneNumber(std::string phoneNumber)
{

	while (!(phoneNumber.find_first_not_of("0123456789") == std::string::npos))
	{
		std::cout << "it's a phone Number.. add number : ";
		getline(std::cin, phoneNumber);
	}
	this->_phoneNumber = phoneNumber;
	return;
}

void Contact::setDarkestSecret(std::string darkestSecret)
{
	this->_darkestSecret = darkestSecret;
	return;
}

std::string Contact::getFirstName(void) const
{
	return _firstName;
}

std::string Contact::getLastName(void) const
{
	return _lastName;
}

std::string Contact::getNickName(void) const
{
	return _nickName;
}

std::string Contact::getPhoneNumber(void) const
{
	return _phoneNumber;
}

std::string Contact::getDarkestSecret(void) const
{
	return _darkestSecret;
}