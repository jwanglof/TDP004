#include <iostream>
#include <vector>
#include <sstream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int StringToInt(string str);

int main(int argc, char *argv[])
{
	vector<int> numbersFromString;
	string userInput;
	int sumOfString = 0;

	cout << "En sträng med några siffror tack: ";
	cin >> userInput;

	stringstream streamFromInput(userInput);

	char currentChar;
	int lastNumber;
	string numbers = "";

	while (streamFromInput.good()) {
		streamFromInput >> currentChar;
		if (!streamFromInput.eof()) {
			if (isdigit(currentChar))
				numbers += currentChar;
			else {
				numbersFromString.push_back(StringToInt(numbers));
				numbers = "";
			}
		}
	}

	// if string isn't empty
	if (!numbers.empty())
		numbersFromString.push_back(StringToInt(numbers));

	// Create iterator for numbersFromString
	vector<int>::iterator it;

	// Add all numbers to sum
	for (it = numbersFromString.begin(); it < numbersFromString.end(); it++) {
		sumOfString += *it;
	}

	cout << "Summan av alla siffror i den strängen är: " << sumOfString << endl;

	return 0;
}

int StringToInt (string str)
{
	int returnValue;
	return atoi(str.c_str());
}
