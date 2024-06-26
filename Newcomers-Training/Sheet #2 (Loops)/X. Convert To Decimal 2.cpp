#include <iostream>
#include <string>
#include <algorithm>
#include <math.h>
using namespace std;

static string ConvertFromDecimalToBinary(int number)
{
	string binaryString = "";

	while (number > 0)
	{
		if (number % 2 == 1)
			binaryString = to_string(number % 2) + binaryString;

		number = number / 2;
	}

	return binaryString;
}

static int ConvertFromBinaryToDecimal(string binaryString)
{
	int decimalNumber = 0;
	short exponent = 0;

	for (short i = binaryString.length() - 1; i >= 0; i--)
	{
		decimalNumber += (stoi(string(1, binaryString[i]))) * pow(2, exponent++);
	}

	return decimalNumber;
}

int main()
{
	short testCases;
	cin >> testCases;

	int number = 0;

	while (testCases > 0)
	{
		cin >> number;

		cout << ConvertFromBinaryToDecimal(ConvertFromDecimalToBinary(number)) << "\n";

		testCases--;
	}

	return 0;
}