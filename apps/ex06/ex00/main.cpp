#include "ScalarConverter.hpp"

int main(int argc, char** argv)
{
	ScalarConverter test;
	if (argc > 1)
	{
		test.convert(argv[1]);
		std::cout << test;
	}

    return 0;
}


