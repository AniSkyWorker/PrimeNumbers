
#include "stdafx.h"
#include "EratosthenSieve.h"
#include <iostream>
#include <string>

int main(int argc, char * argv[])
{
	if (argc != 2)
	{
		std::cout << "Usage: EratosthenSieve.exe <upper bound of prime numbers>" << std::endl;
		return 1;
	}

	auto primeNumberSet = GeneratePrimeNumbersSet(std::stoi(argv[1]));
	for (auto & it : primeNumberSet)
	{
		std::cout << it << "; ";
	}

	std::cout << std::endl;

    return 0;
}

