
#include <iostream>
using namespace std;

int main()
{
	
	int numScore;
	int temp;
	float sum = 0;
	float avg;
	cout << "Enter Number of test scores" << endl;

	cin >> numScore;
	int scores = 0;
	int count = 0;
	while (count < numScore) {
		cout << "Enter #" << count + 1 << " score: ";
		cin >> temp;
		if (temp > 0 && temp <= 100) {

			scores = temp;
			sum += scores;
			count++;

		} else {

			if (temp) {
				scores = temp;
				scores = temp;
				sum += scores;
			cout << "Try again: " << sum << endl;

			} else {
				cout << "Invalid input" << endl;
				break;
			}
		}


	}
	if (sum == 0) {
		avg = 0;
	} else {
		avg = sum / numScore;
	}

	cout << "The average score of all test is " << avg << " marks" << endl;
	return 0;
}