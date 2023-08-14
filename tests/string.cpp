#include "tests.hpp"



TEST_CASE("is uppercase")
{
    CHECK(ft::print_string_uppercase("things") == "THINGS");
	CHECK(ft::print_string_uppercase("THIS") == "THIS");
	CHECK(ft::print_string_uppercase("sTuFf") == "STUFF");   
}