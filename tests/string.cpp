#include "tests.hpp"

TEST_CASE("is uppercase")
{
    CHECK(ft::print_string_uppercase("things") == "THINGS");
	CHECK(ft::print_string_uppercase("THIS") == "THIS");
	CHECK(ft::print_string_uppercase("sTuFf") == "STUFF");   
}


TEST_CASE("is valid phonenumber")
{
    CHECK(ft::is_valid_phonenumber("things") == false);
	CHECK(ft::is_valid_phonenumber("0423422539") == true);
	CHECK(ft::is_valid_phonenumber("0417875216") == true);
	CHECK(ft::is_valid_phonenumber("04423s2123") == false);
	CHECK(ft::is_valid_phonenumber("0442**2123") == false);
	CHECK(ft::is_valid_phonenumber("0442212311*") == false);
}