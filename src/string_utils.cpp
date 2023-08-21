#include "../include/ft/ft.hpp"


std::string		ft::TrimWs(std::string input)
{
	int start = 0;
    int end = input.length();

    while (start < end && std::isspace(input[start]))
        ++start;
    while (end > start && std::isspace(input[end - 1]))
        --end;

    return input.substr(start, end - start);
}



bool ft::isValidPhonenumber(std::string str)
{
	std::string::iterator it;

	for (it = str.begin(); it != str.end(); it++) 
	{
		if(!std::isdigit(*it))
			return false;
	}
	return true;
}