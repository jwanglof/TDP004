#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[])
{
	int start, end;

	cout << "Ange ett startvärde: ";
	cin >> start;
	cout << "Ange ett stoppvärde: ";
	cin >> end;

	if (start > end) {
		cout << "Inmatningsfel!" << endl;
		return 1;
	}

	for (; start <= end; start++) {
		if (start%2 == 0 && (start%3 == 0 || start%5 == 0)) {
			cout << start << " ";
		}
	}

	return 0;
}
