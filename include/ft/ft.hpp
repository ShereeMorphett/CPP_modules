#include  <string.h> 
#include <iostream>
#include "Fixed.hpp"
 
namespace ft
{
    /// used for practice testing
    void hello_world();
    int add(int a, int b);
	/// used for phonebook
	bool isValidPhonenumber(std::string str);
	std::string		TrimWs(std::string input);
	//used for sed_is_for_losers
	std::string replaceWords(const std::string& input, const std::string& toFind, const std::string& replacement);
}