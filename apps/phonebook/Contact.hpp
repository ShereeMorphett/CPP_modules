#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H
# include <string>
# include <iostream>

class Contact {

	public:
		std::string		FirstName;
		std::string		LastName;
		std::string		Nickname;
		std::string		PhoneNumber;
		std::string		Secret;
		void			SetAttributes(int size);
		std::string		GetInput(std::string prompt);
		std::string		GetPhoneNumber();
};

std::ostream& operator <<(std::ostream&, const Contact&);

#endif