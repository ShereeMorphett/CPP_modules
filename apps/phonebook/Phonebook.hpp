#ifndef PHONEBOOK_H
# define PHONEBOOK_H
#include "Contact.hpp"
# include <string>
# include <iostream>


class PhoneBook
{
	private:
		Contact	objects[8];
		int		size;
		int		index;
	public:
		PhoneBook(void);
		~PhoneBook(void);
		void	print_contacts(void);
};

#endif