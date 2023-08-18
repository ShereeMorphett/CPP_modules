#include "../include/ft/ft.hpp"

std::string ft::print_string_uppercase(std::string str)
{
	std::string upper;
	std::string::iterator it;

	for (it = str.begin(); it != str.end(); it++) 
	{
		upper += toupper(*it);
	}
	return upper;
}

bool ft::is_valid_phonenumber(std::string str)
{
	std::string::iterator it;

	for (it = str.begin(); it != str.end(); it++) 
	{
		if(isdigit(*it) == true)
			continue ;
		else
			return false;
	}
	return true;
}