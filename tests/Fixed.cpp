#include "tests.hpp"
#include "ft/Fixed.hpp"

TEST_CASE("Fixed Number functions")
{   
    Fixed a;
    Fixed const b(10);
    Fixed const c(42.42f);
	Fixed const d( Fixed(5.05f) * Fixed(2));
    
	CHECK(b.toFloat() == 10.00);
    CHECK(b.toInt() == 10);
    CHECK(c.toInt() == 42);
	CHECK(std::abs(c.toFloat() - 42.4219) < 0.001); //accounts for the out printing precision
	
	Fixed result = Fixed::max(a, b);
	CHECK(result == b);
	result = Fixed::min(a, b);
	CHECK(result == a);
	a++;
	CHECK(a.toFloat() == 0.00390625);
}