#include "../../include/ft/ft.hpp"
#include <iostream>




int main(int argc, char *argv[])
{
    std::string str;
	

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for(int i = 1; i < argc; i++)
		{
			str = ft::print_string_uppercase(argv[i]);
			std::cout << str;
		}
		std::cout << std::endl;
	}
    return 0;
}