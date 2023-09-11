
#include <iostream>
using namespace std;

double sumFn(int scores[], int length)
{
    // int len = sizeof(scores) / sizeof(int);
    double sum = 0;
    // int len = size(scores);
    for (int i = 0; i < length; i++)
    {
        cout << scores[i] << endl;
        sum += scores[i];
    }
    cout << "fdfd      " << sum << "          rerere        " << length << endl;
    return sum;
}
double avgFn(double sum, int length)
{

    return sum / length;
}

double getInput(int &count)
{
    double input;
    cout << "Enter #" << count + 1 << " score: ";
    cin >> input;
    return input;
}
int main()
{

    int numScore;
    int input;
    float sum = 0;
    float result;
    cout << "Enter Number of test scores" << endl;

    cin >> numScore;

    int count = 0;
    while (count < numScore)
    {
        input = getInput(count);
        int scores[numScore];

        if (input > 0 && input <= 100)
        {

            result = avgFn(sumFn(scores, numScore), numScore);
            count++;
        }
        else
        {

            if (input)
            {
                // scores = input;
                // scores = input;
                // sum += scores;
                result = avgFn(sumFn(scores, numScore), numScore);

                cout << "Try again: " << sum << endl;
            }
            else
            {
                cout << "Invalid input" << endl;
                break;
            }
        }
    }
    // if (sizeof(scores) / sizeof(int) == 0)
    // {
    //     avg = 0;
    // }
    // else
    // {
    //     avg = sum / numScore;
    // }

    cout << "The average score of all test is " << result << " marks" << endl;
    return 0;
}
