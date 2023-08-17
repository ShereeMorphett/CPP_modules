#ifndef PHONEBOOK_H
# define PHONEBOOK_H
#include "Contact.hpp"
# include <string>
# include <iostream>


class Phonebook
{
	private:
		Contact	contacts[8];
	public:
		int		size;
		Phonebook(void);
		~Phonebook(void);
		void	printContacts();
		void	addContacts()
};

#endif