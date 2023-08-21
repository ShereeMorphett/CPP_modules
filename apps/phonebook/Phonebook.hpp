#ifndef PHONEBOOK_H
# define PHONEBOOK_H
#include "Contact.hpp"
# include <string>
# include <iostream>
#include <vector>

class Phonebook
{
	private:
		Contact	contacts[8]; 
		int		size;
	public:
		Phonebook();
		const	Contact*	GetContacts() const;//inside the function only reads the class therefore contacts behaves private
		int					GetSize() const;
		void				AddContact();
		void				PrintContact(std::ostream& os, int index);
};

std::ostream& operator <<(std::ostream&, const Phonebook&);

#endif