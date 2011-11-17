#include <iostream>
#include <vector>
#include <unistd.h>
#include "Roman.cpp"
using namespace std;

int main(int argc, char *argv[])
{
	// Read decimal- and Romannumbers from a file
	// Convert them and print them
	// If input can't be converted, cerr that error

	vector<Roman> numbers;

	string inputFromFile;
	unsigned input; 
	unsigned romanSum = 0;
	unsigned decimalSum = 0;

	while (cin >> inputFromFile) {
		if (input = atoi(inputFromFile.c_str())) {
			decimalSum += input;
			Roman r(input);
			numbers.push_back(r);
			// cout << inputFromFile << " -> " << r.get_romanValue() << endl;
		}
		else {
			Roman r(inputFromFile);
			romanSum += r.get_decimalValue();
			numbers.push_back(r);
			// cout << inputFromFile << " -> " << r.get_decimalValue() << endl;
		}
	}

	int c;

	while ((c = getopt(argc, argv, "as")) != -1) {
		switch(c) {
			case 'a':
				cout << "yo a!" << endl;
				break;
			case 's':
				cout << "yo s!" << endl;
				break;
			case '?':
				cout << "wtf?" << endl;
				break;
			default:
				cout << "tjosan" << endl;
				break;
		}
	}

	// Add flags for: --sum, --sum-separately
	// --sum -> Only get the decimal sum from input
	// --sum-separately -> sum of all decimal, and sum of all roman

	return 0;
}
