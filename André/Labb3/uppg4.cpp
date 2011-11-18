#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include "Roman.cpp"
using namespace std;

int main(int argc, char *argv[])
{
	// Read decimal- and Romannumbers from a file
	// Convert them and print them
	// If input can't be converted, cerr that error

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

	vector<string>::iterator it;

	for (it = convertedSentence.begin(); it < convertedSentence.end(); it++)
		cout << *it << endl;

	// Add flags for: --sum, --sum-separately
	// --sum -> Only get the decimal sum from input
	// --sum-separately -> sum of all decimal, and sum of all roman

	return 0;
}
