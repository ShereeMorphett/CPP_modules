#include "ScalarConverter.hpp"

#include <limits>

// Define static data members
int ScalarConverter::intValue_ = 0;
float ScalarConverter::fltValue_ = 0.0f;
char ScalarConverter::charValue_ = '\0';
double ScalarConverter::dblValue_ = 0.0;
int ScalarConverter::type_ = INT; // Initialize with some default type, e.g., INT


void ScalarConverter::convert(const std::string& input)
{
    setType(input);
    convertToChar(input);
    convertToInt(input);
    convertToFlt(input);
    convertToDbl(input);
}

void ScalarConverter::setType(const std::string& input) //further error checking is needed
{
    if (input.length() == 1)
    {
        char c = input[0];
        if (std::isdigit(c))
            type_ = INT;
        else if (c == '.' || c == 'f' || c == 'F')
            type_ = FLOAT;
        else if (c == 'd' || c == 'D')
            type_ = DOUBLE;
        else
            type_ = CHAR;
    }
    else
    {
        // Handle other cases here, e.g., checking for valid numeric formats
    }
}

void ScalarConverter::convertToChar(const std::string& input)
{
    if (type_ == CHAR)
        charValue_ = input[0];
    else
        std::cerr << "Cannot convert to char." << std::endl;
}

void ScalarConverter::convertToInt(const std::string& input)
{
    if (type_ == INT)
    {
        int value;
        std::istringstream iss(input);
        if (iss >> value)
            intValue_ = value;
        else
            std::cerr << "Invalid int literal format: " << input << std::endl;
    }
    else
    {
        std::cerr << "Cannot convert to int." << std::endl;
    }
}

void ScalarConverter::convertToFlt(const std::string& input)
{
    if (type_ == FLOAT)
    {
        float value;
        std::istringstream iss(input);
        if (iss >> value)
            fltValue_ = value;
        else
            std::cerr << "Invalid float literal format: " << input << std::endl;
    }
    else
    {
        std::cerr << "Cannot convert to float." << std::endl;
    }
}

void ScalarConverter::convertToDbl(const std::string& input)
{
    if (type_ == DOUBLE)
    {
        double value;
        std::istringstream iss(input);
        if (iss >> value)
            dblValue_ = value;
        else
            std::cerr << "Invalid double literal format: " << input << std::endl;
    }
    else
    {
        std::cerr << "Cannot convert to double." << std::endl;
    }
}



/////getters//////

char ScalarConverter::getCharValue() const
{
    return charValue_;
}
int ScalarConverter::getIntValue() const
{
    return intValue_;
}

float ScalarConverter::getFltValue() const
{
    return fltValue_;
}

double ScalarConverter::getDblValue() const
{
    return dblValue_;
}

std::ostream& operator<<(std::ostream& out, const ScalarConverter& right) 
{
	out << "Char: "<< right.getCharValue()  << std::endl;
	out << "Int: "<< right.getIntValue()  << std::endl;
	out << "Float: "<< right.getFltValue()  << std::endl;
	out << "Double: "<< right.getDblValue()  << std::endl;

	return out;
}

////constructors and copy operator overload////////

ScalarConverter::ScalarConverter()
{
    intValue_= 0;
    fltValue_ = 0.0f;
    charValue_ = '\0';
    dblValue_ = 0.0;
}

ScalarConverter::ScalarConverter( ScalarConverter const & src )
{
    *this = src; 
}

ScalarConverter::~ScalarConverter()
{}

ScalarConverter &	ScalarConverter::operator=(ScalarConverter const &right)
{
    if (this != &right)
    {
        this->intValue_ = getIntValue();
        this->fltValue_ = getFltValue();
        this->charValue_ = getCharValue();
    }
    return *this;
}
