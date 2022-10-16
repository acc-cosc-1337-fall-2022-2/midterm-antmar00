#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question4.h"
using std::vector;

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE("Test Primes")
{
	vector <int> expected_num1{2, 3, 5, 7};
	vector <int> expected_num2{2, 3, 5, 7, 11, 13};
	vector <int> expected_num3{2, 3, 5, 7, 11, 13, 19, 23, 29};
	vector <int> expected_num4{2, 3, 5, 7, 11, 13, 19, 23, 29, 31, 37, 41, 43, 47};

	REQUIRE(get_primes(10) == expected_num1);
	REQUIRE(get_primes(15) == expected_num2);
	REQUIRE(get_primes(30) == expected_num3);
	REQUIRE(get_primes(50) == expected_num4);
}