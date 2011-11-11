#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char *argv[])
{
	string filename;
	string findInString;
	string currentLine;
	int found;
	int currentLineNumber = 1;

	cout << "Enter filename: ";
	cin >> filename;

	// See if the file exists
	ifstream file(filename.c_str());
	if (!file.is_open()) {
		cout << "Unable to open the file/the file doesn't exist.";
		return 1;
	}

	cout << "What word are you looking for? ";
	cin >> findInString;

	while (file.good()) {
		found = 0;
		getline(file, currentLine);

		found = currentLine.find(findInString);
		if (found != -1)
			cout << currentLineNumber << ": " << currentLine << endl;

		currentLineNumber++;
	}

	file.close();

	return 0;
}
