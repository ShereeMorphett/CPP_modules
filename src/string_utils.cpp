#include "../include/ft/ft.hpp"



void ft::hello_world()
{
    std::cout << "Hello, World!\n";
    
}

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


std::string ft::replaceWords(const std::string& input, const std::string& toFind, const std::string& replacement)
{

    std::string result;

    int pos = 0;
    while (pos < input.size())
	{
		std::cout << "in input loop pos = " << pos << std::endl;
        int foundPos = input.find(toFind, pos);
        std::cout << "in input loop foundPos = " << foundPos << std::endl;
		if (foundPos != std::string::npos)
		{
            result += input.substr(pos, foundPos - pos);
            result += replacement;
            pos = foundPos + toFind.size();
        }
		else
		{
            result += input.substr(pos);
            pos = input.size();
        }
    }
    return result;
}