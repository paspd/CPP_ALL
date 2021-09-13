#ifndef CLASS_HPP
#define CLASS_HPP

#include <cstdio>
#include <string>
#include <iostream>
#include <iomanip>

class contact
{
public:
	contact();
	~contact();
	std::string _first_name;
	std::string _last_name;
	std::string _nickname;
	std::string _phone_number;
	std::string _darkest_secret;
};

class phoneBook
{
public:
	void	set_first_name(int contact_id, std::string _first_name);
	void	set_last_name(int contact_id, std::string _last_name);
	void	set_nickname(int contact_id, std::string _nickname);
	void	set_phone_number(int contact_id, std::string _phone_number);
	void	set_darkest_secret(int contact_id, std::string _darkest_secret);
	void	set_nb_contact(int nb_contact = 0);
	int		get_nb_contact();
	phoneBook(/* args */);
	~phoneBook();
private:
	int		nb_contact;
	contact contact_list[8];
};

#endif