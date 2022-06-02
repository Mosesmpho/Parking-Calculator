#include <iostream>
using namespace std;

int main() {

	string Motorcar, Truck;
	int Time;
	int Vehicle;


	cout << " Choose the type of vehicle " << endl;
	cout << " 1: Motorcar" << endl;
	cout << " 2: Truck " << endl;
	cin >> Vehicle;

	cout << " Enter the total hours but pls make sure it is between 1 and 24 hours" << endl;
	cin >> Time;



	switch (Vehicle) {
	case 1:
		if (Time == 1) {
			cout << " The bill is R2 ";

		}

		else if (Time == 2) {
			cout << " The bill is R3 ";

		}

		else if (Time >= 3 && Time <= 5) {
			cout << " The bill is R5 ";

		}

		else if (Time > 5 && Time <= 24) {
			cout << " The bill is R10 ";

		}
		break;


	case 2:
		if (Time == 1) {
			cout << " The bill is R3 ";

		}

		else if (Time == 2) {
			cout << " The bill is R4 ";

		}

		else if (Time >= 3 && Time <= 5) {
			cout << " The bill is R6 ";

		}

		else if (Time > 5 && Time <= 24) {
			cout << " The bill is R11 ";

		}
		break;

	default:
		cout << " Pls choose between 1 and 2 ";

	}



	return 0;

}