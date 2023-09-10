
#include <iostream>
using namespace std;
void menuScreen()
{
    cout << "**This is a basic calculator**" << endl;
    cout << " a. Add 2 numbers\n b. subtract 2 numbers \n"
            " c. Multiply 2 numbers \n"
            " d. Divide 2 numbers \n"
            " e modulus of 2 numbers\n"
            " f. exponent\n"
            " g. exit"
         << endl;
}
char getInput()

{
    char response;
    cout << "\n\n";
    cout << "Enter your option:" << endl;
    cin >> response;
    return response;
}
void output(double result)
{
    cout << "Output:" << result << endl;
    cout << "\n\n";
}
void calc(char response)
{
    double num1, num2, result, _exp = 1;

    if (response >= 'a' && response <= 'f')
    {

        cout << "Enter two numbers" << endl;
        cin >> num1 >> num2;
        switch (response)
        {

        case 'a':

            result = num1 + num2;
            output(result);
            break;
        case 'b':
            result = num1 - num2;
            output(result);

            break;
        case 'c':
            result = num1 * num2;
            output(result);

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

                output(result);

                cout << endl;
                break;
            }
            break;
        case 'e':
            if (num2 <= 0)
            {
                cout << "Invalid input: " << num2 << "\n\n\n";
            }
            else
            {
                result = static_cast<int>(num1) % static_cast<int>(num2);
                output(result);
            }
            break;
        case 'f':

            for (int i = 0; i < num2; i++)
            {
                _exp = _exp * num1;
            }
            output(_exp);
            break;
        default:
            exit(0);
        }
    }
    else if (response == 'g')
    {

        exit(0);
    }
    else
    {
        cout << "\nInvalid input\n\n";
    }
}
int main()
{

    while (true)
    {
        menuScreen();
        char response = getInput();
        calc(response);
    }
    return 0;
}
