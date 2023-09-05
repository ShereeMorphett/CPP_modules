#include "../../include/ft/ft.hpp"
#include <iostream>


static	std::string PrintStringUppercase(std::string str)
{
	std::string upper;
	std::string::iterator it;

	for (it = str.begin(); it != str.end(); it++) 
	{
		upper += toupper(*it);
	}
	return upper;
}


int main(int argc, char *argv[])
{
    std::string str;
	

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for(int i = 1; i < argc; i++)
		{
			str = PrintStringUppercase(argv[i]);
			std::cout << str;
		}
		std::cout << std::endl;
	}
    return 0;
}