#include "stdafx.h"
#include "EratosthenSieve.h"
#include <vector>
const int C_FIRST_PRIME_NUMBER = 2;

std::set<int> GeneratePrimeNumbersSet(int upperBound)
{
	std::vector<bool> arePrimeNumbers(upperBound + 1, true);

	std::size_t primeNumber = C_FIRST_PRIME_NUMBER;
	std::set<int> primeNumbersSet;

	while (primeNumber * primeNumber < arePrimeNumbers.size())
	{
		for (std::size_t counter = primeNumber * primeNumber; counter < arePrimeNumbers.size(); counter += primeNumber)
		{
			arePrimeNumbers[counter] = false;
		}
		primeNumber++;
	}

	for (std::size_t i = C_FIRST_PRIME_NUMBER; i < arePrimeNumbers.size(); i++)
	{
		if (arePrimeNumbers[i])
		{
			primeNumbersSet.insert(static_cast<int>(i));
		}

	}
	return primeNumbersSet;
}