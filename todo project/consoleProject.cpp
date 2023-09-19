#include <iostream>

using namespace std;
void welcomeScreen()
{
    cout << "\t\t\t\t\t"
         << "*********************************"
         << "*\n";
    cout << "\t\t\t\t\t"
         << "*\t\t\t\t *" << endl;
    cout << "\t\t\t\t\t"
         << "* "
         << "Welcome To my C++ Todo Program"
         << " *"
         << "\n";
    cout << "\t\t\t\t\t"
         << "*\t\t\t\t *" << endl;
    cout << "\t\t\t\t\t"
         << "*********************************"
         << "*" << endl;
}
void menuScreen()
{
    cout << "\t\t\t\t\t\t  Menu Screen" << endl;
    cout << "Please Choose an option"
         << "\n\n";
    cout << "(1) Add new task\n(2) Mark task as completed\n(3) UnMark task as completed\n(4) Show all tasks\n(5) Show all completed tasks\n(6) Show all incomplete tasks\n(7) Exit\n\n";
}
int getSelection(string outputText)
{
    int input;
    cout << outputText << ":" << endl;
    cin >> input;
    return input;
}
void tableHead()
{
    cout << "----------------------------------------------------------------" << endl;
    cout << "|   "
         << "S/N   |"
         << "\t"
         << "Task Description\t\t"
         << "|    "
         << "STATUS    |" << endl;
    cout << "----------------------------------------------------------------" << endl;
}

void tableDisplay(int label, string task, string status)
{
    // tableHead()
    cout << "----------------------------------------------------------------" << endl;
    cout << "|   "
         << "<<label<<   |"
         << "\t" << task << "\t\t"
         << "|    " << status << "    |" << endl;
    cout << "----------------------------------------------------------------" << endl;
}
string getTask(int position)
{
    string input;
    cout << "Enter Task"
         << "#" << position + 1 << ":" << endl;
    if (position == 0)
    {
        cin.ignore(1000, '\n');
    }

    getline(cin, input);
    return input;
}

void removeElement(int size, string taskPos, string (&_array)[])
{
    int newIndex = 0;
    // int newSize = [size-1];
    for (int i = 0; i < size; i++)
    {
        if (_array[i] != taskPos)
        {
            _array[newIndex] = _array[i];
            newIndex++;
        }
    }
    size--;
    for (int i = 0; i < size; i++)
    {
        cout << _array[i] << " ";
    }
}

int main()
{
    string allTasks[1000];
    string completedTasks[1000];
    string uncompletedTasks[1000];
    int nextAlltaskCount = 0, nextCompletedTaskCount = 0;
    int input;
    int selectCheck;

    while (true)
    {

        welcomeScreen();
        menuScreen();
        input = getSelection("Enter Selection");
        if (input)
        {
            int count = 0;

            // input = getSelection("How many tasks do you want to add?");
            // check input menu
            if (input >= 1 && input <= 7)
            {
                // check for individual input
                switch (input)
                {
                case 1:
                {
                    input = getSelection("How many tasks do you want to add?");
                    string task;
                    while (count < input)
                    {
                        // get input from user
                        task = getTask(count);
                        // add element to all task array
                        allTasks[nextAlltaskCount] = task;
                        count++;
                        nextAlltaskCount++;
                    }

                    for (int i = 0; i < nextAlltaskCount; i++)
                    {

                        cout << allTasks[i] << " ,";
                    }
                    break;
                }
                case 2:
                {
                    for (int i = 0; i < nextAlltaskCount; i++)
                    {

                        cout << "#" << i + 1 << "=>" << allTasks[i] << " ,";
                    }
                    cout << "\n\n";
                    // get task from all Task from allTask array and copy  it to completed tasks
                    input = getSelection("Select the task you wold like to mark ");
                    if (input)
                    {
                        completedTasks[nextCompletedTaskCount] = allTasks[input + 1];
                        cout << "mark completed task" << endl;
                        removeElement(1000, allTasks[input + 1], allTasks);
                        nextCompletedTaskCount++;
                    }
                    else
                    {
                        cout << "Invalid Selection"
                             << "\n\n";
                    }
                    for (int i = 0; i < nextCompletedTaskCount; i++)
                    {

                        cout << "#" << i + 1 << "=>" << completedTasks[i] << " ,";
                    }
                    cout << "\n\n";
                    break;
                }
                case 3:
                    cout << "mark uncompleted task" << endl;
                    break;
                case 4:
                    cout << "show all task" << endl;
                    break;
                case 5:
                    cout << "show all completed task" << endl;
                    break;
                case 6:
                    cout << "show  all uncompleted task" << endl;
                    break;
                default:
                    exit(0);
                }
            }
            else
            {
                cout << "Invalid menu selection" << endl;
            }
        }
        else
        {
            cout << "Please Enter a valid selection" << endl;
        }
        // tableDisplay();
    }
    return 0;
}

void test()
{

    const int size = 5;
    int originalArray[size] = {1, 2, 3, 4, 5};

    int itemToDelete = 3;   // Delete the element with value 3
    int newArray[size - 1]; // Create a new array with a smaller size

    int newIndex = 0;
    for (int i = 0; i < size; i++)
    {
        if (originalArray[i] != itemToDelete)
        {
            newArray[newIndex] = originalArray[i];
            newIndex++;
        }
    }

    // Display the new array
    for (int i = 0; i < size; i++)
    {
        std::cout << newArray[i] << " ";
    }
}
