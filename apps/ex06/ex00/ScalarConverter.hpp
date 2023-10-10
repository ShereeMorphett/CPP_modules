#include <iostream>
#include <sstream>
#include <string>
#include <limits>
#include <cmath>
#include <iostream>
#ifndef ScalarConverter_HPP
#define ScalarConverter_HPP

#include <string>
#include <iostream>

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
			CHAR, INT, FLOAT, DOUBLE
		};

	public:
		static void convert(const std::string& input);
		static void convertToChar(const std::string& input);
		static void convertToInt(const std::string& input);
		static void convertToFlt(const std::string& input);
		static void convertToDbl(const std::string& input);

		static void setType(const std::string& input);

		int getIntValue();
		float getFltValue();
		double getDblValue();
		char getCharValue();

};

std::ostream& operator<<(std::ostream& out, const ScalarConverter& right);

#endif
