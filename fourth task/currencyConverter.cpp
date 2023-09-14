
#include <iostream>
using namespace std;
double convDollarToNaira(double rate, double input)
{

    double result = rate * input;
    cout << "result: " << result << endl;
}
double convNairaToDollar(double rate, double input)
{

    double result = input / rate;
    cout << "result: " << result << endl;
}

int menuScreen()
{
    int input;
    cout << " 1. Convert from dollar to naira\n 2. Convert from Naira to Dollar\n 3. exit the program" << endl;
    cin >> input;

    return input;
}

double amountToConvert(string currency)
{
    double amount;
    string convertTo = currency == "Dollar" ? "Naira" : "Dollar";
    cout << "Enter amount in " << currency << " to  convert to " << convertTo << endl;

    cin >> amount;
    return amount;
}
int main()
{
    double dollarRate = 500;
    double amount;
    while (true)
    {
        int input = menuScreen();

        if (input == 1)
        {
            amount = amountToConvert("Dollar");
            convDollarToNaira(dollarRate, amount);
        }
        else if (input == 2)
        {
            amount = amountToConvert("Naira");
            convNairaToDollar(dollarRate, amount);
        }
        else if (input == 3)
        {
            exit(0);
        }
        else
        {
            cout << "Invalid Input \n\n ";
            exit(0);
        }
    }
    return 0;
}
