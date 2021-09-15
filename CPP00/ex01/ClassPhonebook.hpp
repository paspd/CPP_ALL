#ifndef CLASSPHONEBOOK_H
#define CLASSPHONEBOOK_H
#include "ClassContact.hpp"

class Phonebook
{
	public:
		Phonebook(void);
		~Phonebook(void);
		
		Contact contact[8];
};

#endif