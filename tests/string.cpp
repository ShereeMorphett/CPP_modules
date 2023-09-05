#include "tests.hpp"

// TEST_CASE("is uppercase")
// {
//     CHECK(ft::print_string_uppercase("things") == "THINGS");
// 	CHECK(ft::print_string_uppercase("THIS") == "THIS");
// 	CHECK(ft::print_string_uppercase("sTuFf") == "STUFF");   
// }


TEST_CASE("is valid phonenumber")
{
    CHECK(ft::isValidPhonenumber("things") == false);
	CHECK(ft::isValidPhonenumber("0423422539") == true);
	CHECK(ft::isValidPhonenumber("0417875216") == true);
	CHECK(ft::isValidPhonenumber("04423s2123") == false);
	CHECK(ft::isValidPhonenumber("0442**2123") == false);
	CHECK(ft::isValidPhonenumber("0442212311*") == false);
}



TEST_CASE("TrimWS")
{
    CHECK(ft::TrimWs("   things   ") == "things");
	CHECK(ft::TrimWs("these		things") == "these		things");
	CHECK(ft::TrimWs("things		") == "things");
	CHECK(ft::TrimWs("things  		") == "things");
	CHECK(ft::TrimWs(" 	 	 things") == "things");
}


TEST_CASE("Replace Words")
{
	std::string str = "Enquire ye without it garrets up himself. Interest our nor received followed was. Cultivated an up solicitude mr unpleasant.";
	std::string& test = str;
    CHECK(ft::replaceWords(test, "Enquire", "Darn") == "Darn ye without it garrets up himself. Interest our nor received followed was. Cultivated an up solicitude mr unpleasant.");
	str = "";
	CHECK(ft::replaceWords(test, "Enquire", "Darn") == "");
}