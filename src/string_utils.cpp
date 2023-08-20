#include "../include/ft/ft.hpp"

//io manipulation: 

std::string		ft::trim_ws(std::string input)
{
	int start = 0;
    int end = input.length();

    while (start < end && std::isspace(input[start]))
        ++start;
    while (end > start && std::isspace(input[end - 1]))
        --end;

    return input.substr(start, end - start);
}


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
		if(!std::isdigit(*it))
			return false;
	}
	return true;
}