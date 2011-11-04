#include <iostream>
#include <string>
#include <map>
using namespace std;

int romanToInt(string romanNumber);

int main(int argc, char *argv[]) 
{
	string romanNumerals;
	int romanNumber;
	
	cout << "Please enter a roman number: ";
	cin >> romanNumerals;

	// Function to convert String -> int
	romanNumber = romanToInt(romanNumerals);

	cout << romanNumerals << " in roman is " << romanNumber << " in decimal." << endl;

	return 0;
}

int romanToInt(string romanNumber)
{

	// Need too check for valid input though

	map<char, int> romanValue;
	romanValue['I'] = 1;
	romanValue['V'] = 5;
	romanValue['X'] = 10;
	romanValue['L'] = 50;
	romanValue['C'] = 100;
	romanValue['D'] = 500;
	romanValue['M'] = 1000;

	int sumOfRoman = 0;
	int prevNumber = 0;

	// Get the sum of the input
	for (int i = 0; i < romanNumber.size(); i++) {
		sumOfRoman += romanValue[romanNumber[i]];
	}

	for (int n = 1; n < romanNumber.size(); n++) {
		// Get the previous value and the current value
		int previousValue = romanValue.find(romanNumber[n-1])->second;
		int current = romanValue.find(romanNumber[n])->second;
		if (previousValue <= current)
			sumOfRoman -= (previousValue * 2);
	}

	return sumOfRoman;
}
