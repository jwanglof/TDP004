#include <iostream>
#include <vector>
#include <sstream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main(int argc, char *argv[])
{
	//* Ta en sträng, ignorera alla tecken som inte är siffror, summera dessa */
	vector<int> numbersFromString;
	string userInput;
	int sumOfString = 0;

	cout << "En sträng med några siffror tack: ";
	cin >> userInput;

	stringstream streamFromInput(userInput);

	char currentChar;
	int lastNumber;
	while (streamFromInput.good()) {
		streamFromInput >> currentChar;
		if (!streamFromInput.eof()) {
			if (isdigit(currentChar)) {
				lastNumber = atoi(&currentChar);
				// Adds the last number two times. The fuck?
				numbersFromString.push_back(lastNumber);
			}
		}
	}

	// Create iterator for numbersFromString
	vector<int>::iterator it;

	// Add all numbers to sum
	for (it = numbersFromString.begin(); it < numbersFromString.end(); it++) {
		cerr << *it << endl;
		sumOfString += *it;
	}

	cout << "Summan av alla siffror i den strängen är: " << sumOfString << endl;

	return 0;
}
