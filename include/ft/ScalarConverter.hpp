#include <iostream>
#include <sstream>
#include <string>
#include <limits>
#include <cmath>

#ifndef ScalarConverter_HPP
# define ScalarConverter_HPP


class ScalarConverter
{
    private:

        int intValue_;
        float fltValue_;
        char charValue_;
        double dblValue_;

    public:
        static void convert(const std::string& input);
        char convertToChar(const std::string& input);
        int convertToInt(const std::string& input);
        float convertToFlt(const std::string& input);
        double convertToDbl(const std::string& input);
        int getIntValue();
        float getFltValue();
        double getDblValue();
        char getCharValue();
        
        
        ScalarConverter ();
        ScalarConverter( ScalarConverter const & src );
        ~ScalarConverter();
        ScalarConverter &	operator=( ScalarConverter const & right );

};


#endif