#ifndef ScalarConverter_HPP
#define ScalarConverter_HPP

#include <string>
#include <iostream>
#include <sstream>

class ScalarConverter
{
private:
    static int intValue_;
    static float fltValue_;
    static char charValue_;
    static double dblValue_;
    static int type_;

    enum e_type_
    {
        CHAR, INT, FLOAT, DOUBLE, NOTYPE, NANINF
    };

public:
    ScalarConverter();
    ScalarConverter(ScalarConverter const &src);
    ~ScalarConverter();
    ScalarConverter &operator=(ScalarConverter const &right);

    static void convert(const std::string &input);
    static void convertToChar(const std::string &input);
    static void convertToInt(const std::string &input);
    static void convertToFlt(const std::string &input);
    static void convertToDbl(const std::string &input);

    static void setType(const std::string &input);



    char getCharValue() const;
    int getIntValue() const;
    float getFltValue() const;
    double getDblValue() const;
};

std::ostream &operator<<(std::ostream &out, const ScalarConverter &right);

#endif
