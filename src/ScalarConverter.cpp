#include "ft/ScalarConverter.hpp"

void ScalarConverter::convert(const std::string& input)
{

}

char ScalarConverter::convertToChar(const std::string& input)
{
    if (input.length() != 3 || input[0] != '\'' || input[2] != '\'')
    {
        std::cerr << "Invalid char literal format: " << input << std::endl;
        return '\0'; 
    }
    return input[1];
}

int ScalarConverter::convertToInt(const std::string& input)
{
    int value;
    std::istringstream iss(input);
    if (!(iss >> value))
    {
        std::cerr << "Invalid int literal format: " << input << std::endl;
        return 0;
    }
    return value;
}

float ScalarConverter::convertToFlt(const std::string& input)
{
    float value;
    std::istringstream iss(input);
    if (!(iss >> value))
    {
        std::cerr << "Invalid float literal format: " << input << std::endl;
        return 0.0f; 
    }
    return value;
}

double ScalarConverter::convertToDbl(const std::string& input)
{
    double value;
    std::istringstream iss(input);
    if (!(iss >> value))
    {
        std::cerr << "Invalid double literal format: " << input << std::endl;
        return 0.0; 
    }
    return value;
}


/////getters//////

int ScalarConverter::getIntValue()
{
    return intValue_;
}

float ScalarConverter::getFltValue()
{
    return fltValue_;
}

double ScalarConverter::getDblValue()
{
    return dblValue_;
}

char ScalarConverter::getCharValue()
{
    return charValue_;
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
