
#include "class.hpp"

void phoneBook::set_first_name(int contact_id, std::string _first_name)
{
	this->contact_list[contact_id]._first_name = _first_name;
}

void phoneBook::set_last_name(int contact_id, std::string _last_name)
{
	this->contact_list[contact_id]._last_name = _last_name;
}

void phoneBook::set_nickname(int contact_id, std::string _nickname)
{
	this->contact_list[contact_id]._nickname = _nickname;
}

void phoneBook::set_phone_number(int contact_id, std::string _phone_number)
{
	this->contact_list[contact_id]._phone_number = _phone_number;
}

void phoneBook::set_darkest_secret(int contact_id, std::string _darkest_secret)
{
	this->contact_list[contact_id]._darkest_secret = _darkest_secret;
}

void phoneBook::set_nb_contact(int nb_contact = 0)
{
	this->nb_contact = nb_contact;
}

int phoneBook::get_nb_contact()
{
	return (this->nb_contact);
}
contact::contact()
{
	return ;
}

contact::~contact()
{
	return ;
}

phoneBook::phoneBook()
{
	return ;
}

phoneBook::~phoneBook()
{
	return ;
}