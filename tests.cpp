// Test definitions. Do NOT edit this file!
#define CATCH_CONFIG_MAIN // defines main() automatically
#include "catch.hpp"
#include "A62.hpp"
// tests for exercise 1
TEST_CASE("Ex1", "[example]")
{
	REQUIRE(nthpowerp(2) == 4);
}
// tests for exercise 2
TEST_CASE("Ex2", "[example]")
{
	REQUIRE(nthpowern(-1) == 0.5);
}