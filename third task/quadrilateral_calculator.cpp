#include <iostream>
using namespace std;


int main()
{
	int height;
	int width;
	string spaces = "";
	while (true) {

		cout << "Enter height: " << endl;
		cin >> height;
		cout << "Enter width: " << endl;
		cin >> width;

		if (height != 1 && width != 1) {

			for (int j = 0; j < width; j++) {
				if (j == width - 1) {

					cout << "*";
				} else {
					cout << "* ";

				}
				}
			}

		cout << endl;

		for (int i = 0; i < height - 2; i++) {
			cout << "*";
			for (int k = 0; k < (width * 2) - 3; k++) {
				cout << " ";

			}
			cout << "*" << endl;
		}

		for (int j = 0; j < width; j++) {
			if (j == width - 1) {
				cout << "*";
			} else {
				cout << "* ";

			}
		}
		cout << "\n\n";
	}

	return 0;
}