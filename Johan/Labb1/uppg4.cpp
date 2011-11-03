#include <iostream>
using namespace std;

int main(int argc, char *argv[]) 
{
	float start, wished, rent;

	cout << "Ange startkapital: ";
	cin >> start;

	cout << "Ange önskat kapital: ";
	cin >> wished;

	cout << "Ange årsränta: ";
	cin >> rent;

	if (wished < start || rent < 0 || start < 0 || wished < 0)
		cout << "Inmatningsfel!" << endl;

	int years = 0;
	while (start < wished) {
		start *= (rent / 100) + 1.0;
		years++;
	}

	cout << "Det tar " << years << " år att uppnå det önskade kapitalet." << endl;

	return 0;
}
