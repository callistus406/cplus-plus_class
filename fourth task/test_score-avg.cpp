
#include <iostream>
using namespace std;

int getNumOfTest()
{
    int numScore;
    cout << "Enter Number of test scores" << endl;

    cin >> numScore;

    return numScore;
}
int getTestScores(int counter)
{
    int testScore;
    cout << "Enter #" << counter + 1 << " score: ";
    cin >> testScore;
    return testScore;
}

double getSum(int scores[], int numOfScores)
{
    double sum = 0;
    for (int i = 0; i < numOfScores; i++)
    {
        sum += scores[i];
    }
    return sum;
}
double getAvg(double sum, int numOfScores)
{
    return sum / numOfScores;
}
int main()
{

    int testScore;
    double sum = 0;
    double average;
    int counter = 0;
    const int numOfTest = getNumOfTest();

    int scores[numOfTest];
    if (numOfTest)
    {

        while (counter < numOfTest)
        {

            testScore = getTestScores(counter);
            if (testScore > 0 && testScore <= 100)
            {

                scores[counter] = testScore;
                counter++;
            }
            else
            {
                if (testScore)
                {
                    // scores[counter] = testScore;
                    sum = getSum(scores, counter);
                    cout << "Try again: " << sum << endl;
                }
                else
                {
                    cout << "Invalid input" << endl;
                    break;
                }
            }
        }
        sum = getSum(scores, numOfTest);
        average = getAvg(sum, numOfTest);
        cout << "your average is: " << average << "\n";
    }
    else
    {
        cout << "Invalid input" << endl;
    }

    return 0;
}
