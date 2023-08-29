#include <iostream>

/*
Write a program that contains:
• A string variable initialized to "HI THIS IS BRAIN".
• stringPTR: A pointer to the string.
• stringREF: A reference to the string.
Your program has to print:
• The memory address of the string variable.
• The memory address held by stringPTR.
• The memory address held by stringREF.
And then:
• The value of the string variable.
• The value pointed to by stringPTR.
• The value pointed to by stringREF.
That’s all, no tricks. The goal of this exercise is to demystify references which can seem completely new.
Although there are some little differences, this is another syntax for something you already do: address manipulation.*/

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