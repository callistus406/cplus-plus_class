
#include <iostream>
using namespace std;

int main()
{

	char response;
	double num1, num2, result;

	while (true)
	{
		cout << "**This is a basic calculator**" << endl;

		cout << " a. Add 2 numbers\n b. subtract 2 numbers \n"
				" c. Multiply 2 numbers \n"
				" d. Divide 2 numbers \n"
				" e exit"
			 << endl;
		cout << "\n\n";
		cout << "Enter your option:" << endl;
		cin >> response;
		if (response >= 'a' && response < 'e')
		{

			cout << "Enter two numbers" << endl;
			cin >> num1 >> num2;
			switch (response)
			{

			case 'a':

				result = num1 + num2;
				cout << "Output:" << result << endl;
				break;
			case 'b':
				result = num1 - num2;
				cout << "Output:" << result << endl;
				break;
			case 'c':
				result = num1 * num2;
				cout << "Output:" << result << endl;
				break;

			case 'd':
				if (num2 == 0)
				{
					cout << "\nCannot divide " << num1 << "  By Zero\n"
						 << endl;
				}
				else
				{
					result = num1 / num2;
					cout << "Output:" << result << endl;
					cout << endl;
					break;
				}
				break;
			default:
				exit(0);
			}
		}
		else if (response == 'e')
		{

			exit(0);
		}
		else
		{
			cout << "\nInvalid input\n\n";
		}
	}
	return 0;
}