#include <iostream>
#include <vector>
#include <sstream>
#include "Roman.cpp"
using namespace std;

int main(int argc, char *argv[])
{
	vector<string> convertedSentence;

	string inputFromFile;
	unsigned input; 
	unsigned decimalSum; 
	unsigned romanSum; 

	while (cin >> inputFromFile) {
		if (input = atoi(inputFromFile.c_str())) {
			Roman r(input);
			decimalSum += input;
			convertedSentence.push_back(inputFromFile + " -> " + r.get_romanValue());
		}
		else {
			Roman r(inputFromFile);
			romanSum += r.get_decimalValue();
			stringstream ss;
			ss << r.get_decimalValue();
			string s;
			ss >> s;
			convertedSentence.push_back(inputFromFile + " -> " + s);
		}
	}

	if (argc > 1) {
		string choice = argv[1];
		if (choice == "--sum")
			cout << "Summan är: " << (decimalSum + romanSum) << endl;
		else if (choice == "--sum-separately") {
			cout << "Summan av de romerska talen är: " << romanSum << endl;
			cout << "Summan av de decimaliska talen är: " << decimalSum << endl;
		}
	}
	else {
	vector<string>::iterator it;

	for (it = convertedSentence.begin(); it < convertedSentence.end(); it++)
		cout << *it << endl;
	}

	return 0;
}
