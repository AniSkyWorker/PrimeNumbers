#include "stdafx.h"
#include "../PrimeNumbers/EratosthenSieve.h"

BOOST_AUTO_TEST_SUITE(GeneratePrimeNumbersSet_function)

	BOOST_AUTO_TEST_CASE(makes_empty_set_when_upper_bound_less_than_2)
	{
		auto primeNumberSet = GeneratePrimeNumbersSet(1);
		BOOST_CHECK(primeNumberSet.empty());
	}

	BOOST_AUTO_TEST_CASE(makes_set_of_prime_numbers_when_upper_bound_more_than_2)
	{
		std::set<int> primeNumbers = { 2, 3, 5, 7 };
		auto primeNumberSet = GeneratePrimeNumbersSet(10);
		BOOST_CHECK(primeNumberSet == primeNumbers);
	}

BOOST_AUTO_TEST_SUITE_END()



