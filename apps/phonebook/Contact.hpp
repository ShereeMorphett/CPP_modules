#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H
# include <string>
# include <iostream>

class Contact {

	public:
		std::string		firstName;
		std::string		lastName;
		std::string		nickname;
		std::string		phoneNumber;
		std::string		secret;
		void			setAttributes(int size);
		std::string		getInput(std::string prompt);
		std::string		getPhoneNumber();
};

std::ostream& operator <<(std::ostream&, const Contact&);

#endif