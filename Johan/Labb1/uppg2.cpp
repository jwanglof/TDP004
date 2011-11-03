#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int sum = 0;
	int choice;
	int temp_number;
	// int current_value;

	cout << "Operationer:\n1. Addition\n2. Subtraktion\n3. Multiplikation\n4. Division\n5. Avsluta\n= " << sum << endl;

	while (choice != 5) {
		cout << "Välj operation: ";
		cin >> choice;

		switch (choice) {
			case 1:
				cout << "Addera med: ";
				cin >> temp_number;
				sum = sum + temp_number;
				break;
			case 2:
				cout << "Subtrahera med: ";
				cin >> temp_number;
				sum = sum - temp_number;
				break;
			case 3:
				cout << "Multiplicera med: ";
				cin >> temp_number;
				sum = sum * temp_number;
				break;
			case 4:
				cout << "Dividera med: ";
				cin >> temp_number;
				if (temp_number != 0)
					sum = sum / temp_number;
				break;
			default:
				cout << "Felaktigt val!" << endl;
				break;
		}
		cout << "= " << sum << endl;
	}

	return 0;
}
