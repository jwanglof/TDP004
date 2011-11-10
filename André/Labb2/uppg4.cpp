#include <iostream>
#include <map>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

class Roman
{
	public:
		Roman(string r);
		Roman(unsigned d);
		string get_romanValue();
		unsigned get_decimalValue();
		unsigned romanToInt(string romanNumber);
		string unsignedToRoman(unsigned d);
		unsigned countInstances();
		static unsigned count;
	private:
		string romanValue;
		unsigned decimalValue;
};

unsigned Roman::count = 0;

Roman::Roman(string r)
{
	romanValue = r;
	decimalValue = romanToInt(r);
	count++;
}

Roman::Roman(unsigned d)
{
	romanValue = unsignedToRoman(d);
	decimalValue = d;
	count++;
}

string Roman::get_romanValue()
{
	return romanValue;
}

unsigned Roman::countInstances()
{
	return count;
}

unsigned Roman::get_decimalValue()
{
	return decimalValue;
}

unsigned Roman::romanToInt(string romanNumber)
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

string Roman::unsignedToRoman(unsigned decimalNumber)
{
	string returnRomanValue;

	map<unsigned, string> romanValue;
	romanValue[1] = "I";
	romanValue[4] = "IV";
	romanValue[5] = "V";
	romanValue[9] = "IX";
	romanValue[10] = "X";
	romanValue[40] = "XL";
	romanValue[50] = "L";
	romanValue[100] = "C";
	romanValue[400] = "CD";
	romanValue[500] = "D";
	romanValue[900] = "CM";
	romanValue[1000] = "M";

	map<unsigned, string>::reverse_iterator it = romanValue.rbegin();

	for (; it != romanValue.rend(); it++) {
		int randomShitNumber = floor(decimalNumber / (*it).first);
		if (randomShitNumber > 0) {
			for (int n = 0; n < randomShitNumber; n++)
				returnRomanValue += (*it).second;
		}
		decimalNumber -= randomShitNumber * (*it).first;
	}

	return returnRomanValue;
}

int main(int argc, char *arv[])
{
	srand(time(0));

	int currentNumber = 1;
	int currentRandomValue;
	int correctAnswers = 0;
	bool hasAnsweredWrong = false;
	string userInput;

	do {
		currentRandomValue = rand() % 5;
		if (currentRandomValue > 0) {
			Roman r(currentNumber);
			cout << "Rätta svar: " << correctAnswers << endl;
			if (rand() % 2) {
				cout << "Skriv talet " << r.get_decimalValue() << " i romerskform: ";
				cin >> userInput;
				if (userInput != r.get_romanValue())
					hasAnsweredWrong = true;
				else
					correctAnswers++;
			}
			else {
				cout << "Skriv talet " << r.get_romanValue() << " i decimalform: ";
				cin >> userInput;
				if (atoi(userInput.c_str()) != r.get_decimalValue())
					hasAnsweredWrong = true;
				else
					correctAnswers++;
			}
		} 

		currentNumber += currentRandomValue;
	} while (hasAnsweredWrong != true && currentNumber < 5000);

	cout << "Spelet är över! Du hade " << correctAnswers << " poäng!!oen" << endl;

	return 0;
}
