#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H
# include <string>
# include <iostream>

class Contact {

	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_number;
		std::string	secret;

	public:
		Contact();
		~Contact();
		void			printAttributes();
		void			setAttributes();
		std::string		getInput(std::string prompt);
		std::string		getPhoneNumber();
};

#endif