#include <iostream>

int main(void)
{
    std::string string = "HI THIS IS BRAIN";
	std::string* stringPTR = &string;
	std::string& stringREF = string; //it is a reference (pointing at that variable) cannot be changed this const pointer
	
	std::cout << "\033[;35m\nThe Addresses: \033[0m\n" << std::endl;
	std::cout << "From variable string: "<< &string << std::endl;
	std::cout << "From stringPTR: "<< &stringPTR << std::endl;
	std::cout << "From stringREF: "<< &stringREF << std::endl;

	
	std::cout << "\033[;35m\nThe Values: \033[0m\n" << std::endl;
	std::cout << "From variable string: "<< string << std::endl;
	std::cout << "From stringPTR: "<< *stringPTR << std::endl;
	std::cout << "From stringREF: "<< stringREF << std::endl;

	
	std::cout << "\033[;1;4;35m\nChanging string value: \033[0m\n" << std::endl;
	string = "Changed varible only";
	std::cout << "\033[;35m\nThe Addresses: \033[0m\n" << std::endl;
	std::cout << "From variable string: "<< &string << std::endl;
	std::cout << "From stringPTR: "<< &stringPTR << std::endl;
	std::cout << "From stringREF: "<< &stringREF << std::endl;

	
	std::cout << "\033[;35m\nThe Values: \033[0m\n" << std::endl;
	std::cout << "From variable string: "<< string << std::endl;
	std::cout << "From stringPTR: "<< *stringPTR << std::endl;
	std::cout << "From stringREF: "<< stringREF << std::endl;



    return 0;
}