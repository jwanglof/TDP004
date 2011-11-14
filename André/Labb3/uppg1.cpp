#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

void printFile(string filename);
void sortFile(string filename);

int main(int argc, char *argv[])
{
	char userChoice;
	string filename;

	cout << "Vad vill herrn göra?\n1) Sortera data\n2) Läsa data?\nq) Avsluta programmet\nDitt val: ";
	cin >> userChoice;

	switch (userChoice) {
		case '1':
			cout << "Ange ett filname: ";
			cin >> filename;
			sortFile(filename);
			break;
		case '2':
			cout << "Ange ett filname: ";
			cin >> filename;
			printFile(filename);
			break;
		case 'q':
			cout << "Hejdå.";
			break;
		default:
			cout << "Du har valt ett icke giltigt alternativ." << endl;
			break;
	}

	return 0;
}

void sortFile(string filename) 
{
	vector<int> valuesFromFile;

	// Read all the values from the file and add them to the vector
	ifstream inputFile(filename.c_str());
	if (!inputFile.is_open()) {
		cout << "Unable to open the file/the file doesn't exist.";
	}
	else {
		while (inputFile.good()) {
			int currentValue;
			inputFile >> currentValue;
			// Get duplicates of last input value. Why?
			valuesFromFile.push_back(currentValue);
		}
	}

	// Sort vector and make iterator
	sort(valuesFromFile.begin(), valuesFromFile.end());
	vector<int>::iterator it;

	// Write to the new file
	string newFilename = filename + ".sort";
	ofstream outputFile(newFilename.c_str());
	for (it = valuesFromFile.begin(); it < valuesFromFile.end(); it++) {
		outputFile << *it << endl;
	}

	// Close the filestreams
	inputFile.close();
	outputFile.close();
}

void printFile(string filename) 
{
	cout << "===== " << filename << " =====" << endl;

	// See if the file exists
	ifstream file(filename.c_str());
	if (!file.is_open()) {
		cout << "Unable to open the file/the file doesn't exist.";
	}
	else {
		string currentLine;
		while (file.good()) {
			getline(file, currentLine);
			cout << currentLine << endl;
		}
	}
}
