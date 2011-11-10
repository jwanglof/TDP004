#include <iostream>
#include <algorithm>
#include <locale>
#include <string>
#include <map>
#include <list>
using namespace std;

int romanToInt(string romanNumber);
bool isGreater(string i, string j);

int main(int argc, char *argv[]) 
{
	list<string> romanNumerals;
	string appendString;
	string VALID_INPUT;
	int romanNumber;
	
	do {
		cout << "Give me a roman number: ";
		cin >> appendString;
		romanNumerals.push_back(appendString);
	} while (appendString != "q");

	romanNumerals.sort(isGreater);
	romanNumerals.unique();
	list<string>::iterator stringIterator = romanNumerals.begin();

	for (; stringIterator != romanNumerals.end(); stringIterator++) {
		if (romanToInt(*stringIterator) != 0) {
			cout << *stringIterator << " in roman is " << romanToInt(*stringIterator) 
				 << " decimals." << endl;
		}
	}

	return 0;
}

int romanToInt(string romanNumber)
{
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
		int previousValue = romanValue[romanNumber[n-1]];
		int current = romanValue[romanNumber[n]];
		if (previousValue < current)
			sumOfRoman -= (previousValue * 2);
	}

	return sumOfRoman;
}


bool isGreater(string i, string j) 
{ 
	return romanToInt(i) > romanToInt(j);
}

