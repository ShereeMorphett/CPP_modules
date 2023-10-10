#include "ScalarConverter.hpp"

#include <limits>
#include <cstring>

// Define static data members
int ScalarConverter::intValue_ = 0;
float ScalarConverter::fltValue_ = 0.0f;
char ScalarConverter::charValue_ = '\0';
double ScalarConverter::dblValue_ = 0.0;
int ScalarConverter::type_ = INT; 


void ScalarConverter::convert(std::string input)
{
    setType(input);
    // limit_checker = setLimitChecker(input);
    // doFirstConversion(input);
    if (type_ != CHAR)
    {
        convertToChar();
    }
    if (type_ != INT)
    {
        convertToInt();
    }
    if (type_ != FLOAT)
    {
        convertToFlt();
    }
    if (type_ != DOUBLE)
    {
        convertToDbl();
    }

}

static bool isInfOrNan(const std::string& input)
{
    const char* cstr = input.c_str();

    if (std::strcmp(cstr, "nanf") == 0)
        return true;
    else if (std::strcmp(cstr, "nan") == 0)
        return true;
    else if (std::strcmp(cstr, "+inf") == 0)
        return true;
    else if (std::strcmp(cstr, "-inf") == 0)
        return true;
    return false;
}

void ScalarConverter::setType(const std::string& input)
{
    if (isInfOrNan(input))
    {
        type_ = NANINF;
        //NEEDS TO ALSO TAKE INTO ACCOUNT T-INF +INF AND NAN
        intValue_ = std::numeric_limits<int>::infinity();
        fltValue_ = std::numeric_limits<float>::infinity();
        dblValue_ = std::numeric_limits<double>::infinity();
    }
    else if (input.empty())
    {
        type_ = NOTYPE;
    }
    else if (input.length() == 1 && !std::isdigit(input[0]))
    {
        type_ = CHAR;
    }
    else
    {
        try
        {
            long double doubleConversion = stold(input, nullptr); //long double for allowing for limit checking
            // needs to check for decimal points etc
            // if (decimalCount(input) == 1 && input.back() == 'f' && doubleConversion <= std::numeric_limits<float>::max())
            // {
            //     type_ = FLOAT;
            // }
            // else if (decimalCount(input) == 0 && doubleConversion <= std::numeric_limits<int>::max() && doubleConversion >= std::numeric_limits<int>::min())
            // {
            //     type_ = INT;
            // }
            if (doubleConversion <= std::numeric_limits<double>::max())
            {
                type_ = DOUBLE;
            }
            else
            {
                type_ = NOTYPE;
            }
        }
        catch (const std::exception&)
        {
            type_ = NOTYPE;
        }
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
