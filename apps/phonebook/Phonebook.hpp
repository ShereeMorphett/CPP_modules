#ifndef PHONEBOOK_H
# define PHONEBOOK_H
#include "Contact.hpp"
# include <string>
# include <iostream>
#include <vector>

class Phonebook
{
	private:
		Contact	contacts[8]; //template class, container
		int		size;
	public:
		Phonebook();
		const	Contact*	getContacts() const;//inside the function only reads the class
		int					getSize() const;
		void				addContact();
		void				printContact(std::ostream& os, int index);
};

std::ostream& operator <<(std::ostream&, const Phonebook&);

#endif