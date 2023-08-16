#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H
# include <string>
# include <iostream>

class Contact {

	private:
		std::string	first_name;
		std::string	last_name;
		std::string	number;
		std::string	secret;

	public:
		Contact();
		~Contact();
		void			setAttributes();
		void			printAttributes();
		std::string		getFirstName();
		std::string		getLastName();
		std::string		getPhoneNumber();
		std::string		getSecret();
};

#endif