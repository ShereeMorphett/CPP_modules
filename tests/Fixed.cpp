#include "tests.hpp"
#include <ft/Fixed.hpp>

TEST_CASE("Fixed Number functions")
{   
    Fixed a;
    Fixed const b(10);
    Fixed const c(42.42f);
    
    CHECK(b.toFloat() == 10.00);
    CHECK(b.toInt() == 10);
    CHECK(c.toInt() == 42);
	CHECK(std::abs(c.toFloat() - 42.4219) < 0.001); //accounts for the out printing precision
}
