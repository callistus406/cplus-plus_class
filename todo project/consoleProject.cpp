#include <iostream>

using namespace std;
//Welcome msg
void welcomeScreen(){
cout<<"\t\t\t\t\t"<<"*********************************"<<"*\n";
cout<<"\t\t\t\t\t"<<"*\t\t\t\t *"<<endl;
cout<<"\t\t\t\t\t"<<"* "<<"Welcome To my C++ Todo Program"<<" *"<<"\n";
cout<<"\t\t\t\t\t"<<"*\t\t\t\t *"<<endl;
cout<<"\t\t\t\t\t"<<"*********************************"<<"*"<<endl;
}
//menu screen
void menuScreen(){
cout<<"\t\t\t\t\t\t  Menu Screen"<<endl;
cout<<"Please Choose an option"<<"\n\n";
cout<<"(1) Add new task\n(2) Mark task as completed\n(3) UnMark task as completed\n(4) Show all tasks\n(5) Show all completed tasks\n(6) Show all incomplete tasks\n(7) Exit\n\n";

}
//gets integer selection from user
int getSelection(string outputText){
int input;
cout<<outputText<<":"<<endl;
cin>>input;
return input;
}
//table header
void tableHead(string label, const string& description, const string& status,int taskCharCount){
    int labelWidth = 3;
    int taskWidth = description.length();
    int statusWidth = status.length();
    //check if description length is greater than the number of largest task count
    int descriptionCount = (description.length() > taskCharCount) ? (description.length() - taskCharCount ): (taskCharCount- (description.length()));

     for(int i = 0; i < (taskCharCount+labelWidth+statusWidth+32); i++){
          cout<<"-";

    }
    cout<<endl;

    cout << "|   " << "S/N" <<" " <<string(labelWidth - label.length(), ' ') << "  |   "
              << description << string(descriptionCount , ' ') << "\t\t |   "
              << status << string(statusWidth - status.length(), ' ') << "     |" << endl;
     for(int i = 0; i < (taskCharCount+labelWidth+statusWidth+32); i++){
        cout<<"-";
    }
    cout<<endl;
}

//table row display
void tableDisplay(int label, const string& task, const string& status,int taskCharCount) {

    int labelWidth = 3;
    int taskWidth = task.length();
    int statusWidth = status.length();
    string descriptionStr = "TASK DESCRIPTION";
    int descriptionCount = (task.length() > taskCharCount) ? taskWidth+26: taskCharCount ;

      //  for(int i = 0; i < (taskCharCount+labelWidth+statusWidth+31); i++){
        //    cout<<"-";
        //}
       // cout<<endl;
       // cout << "---------------------------------------------------------------" << endl;

        cout << "|   " << label <<" " <<string(labelWidth - to_string(label).length(), ' ') << "  |   "
                  << task << string(taskCharCount-taskWidth, ' ') << "\t\t |   "
                  << status << string(statusWidth - status.length(), ' ') << "  |" << endl;
        //:cout << "---------------------------------------------------------------" << endl;
        for(int i = 0; i < (taskCharCount+labelWidth+statusWidth+31); i++){
            cout<<"-";
        }
        cout<<endl;

}
//gets text input from users
string getTask(int position){
    string input;
    cout <<"Enter Task"<<"#"<<position+1<<":"<<endl;
    if(position == 0){
        cin.ignore(1000,'\n');
    }

    getline(cin,input) ;
    return input;
}

//Removes tasks from a specified array
 void removeElement(int &size, string taskPos,string _array[]){
        int newIndex = 0;
        //int newSize = [size-1];
         for (int i = 0; i < size; i++) {
            if (_array[i] != taskPos) {
                _array[newIndex] = _array[i];
                newIndex++;
            }
        }
        size--;

        for (int i = 0; i < size; i++) {
            cout << _array[i] << " ";
        }
        cout<<"\n";
}
//this concatenates the two arrays together
void printAllTasks(int pendingTaskCount, int completedTaskCount,string pendingTasks[], string completedTasks[],int taskCharCount){
    //exclude the first item
    int combineCount = (pendingTaskCount +completedTaskCount)-1;
    //cout<<combineCount <<"=======";
    string allTasks[combineCount];
    int nextCombineCount = 1;
     //tableHead();

         for(int i=1; i<pendingTaskCount; i++){
            allTasks[nextCombineCount] = pendingTasks[i];
            nextCombineCount++;
            //tableDisplay(i,pendingTasks[i],"Uncompleted");
         }
         for(int i=1; i<completedTaskCount; i++){
            allTasks[nextCombineCount] = completedTasks[i];
            //tableDisplay(i,completedTasks[i],"Completed");
            nextCombineCount++;
         }


        for(int i = 1; i<combineCount; i++){
            if(i < pendingTaskCount){
                tableDisplay(i,allTasks[i],"Pending",taskCharCount);
            }else {
                tableDisplay(i,allTasks[i],"Completed",taskCharCount);
            }
        }


}
//prints individual arrays ( pendingTasks and completed tasks arrays)
void printIndividualTasks(int taskCount, string tasks[],string status,int taskCharCount){
     for(int i=1; i<taskCount; i++){
        //table row
        tableDisplay(i,tasks[i],status,taskCharCount);
     }

}
//table header
void divider(string text){
    cout<<"\n\n";
    cout<<"\t\t"<<text<<endl;;

}

//checks if an array is empty
bool isArrayEmpty(string _array[],int len){

    for (int i = 1; i < len; i++) {
        if (!_array[i].empty()) {
            return false;
        }
        return true;

}
}
int main()
{
    int pendingTaskSize = 1000;
    int  completedTaskSize = 1000;
    string pendingTasks[pendingTaskSize];
    string completedTasks[completedTaskSize];
    string uncompletedTasks[1000];
    int nextPendingCount =1,nextCompletedTaskCount =1;
    int input;
    int selectCheck;
    int largestTaskSize = 17;


    while(true){
        welcomeScreen();
        menuScreen();
       input = getSelection("Enter Selection");
       //divides the screen
       //divider("Result");
       if(input){
            int count = 0;


           // input = getSelection("How many tasks do you want to add?");
           //validate integer input
            //check input menu
            if(input>=1 && input <= 7){
                    //check for individual input
                    switch(input){
                        case 1:{
                            //get input from user
                            input = getSelection("How many tasks do you want to add?");
                            cout<<endl;
                            //check for none integer value
                            if(input){
                            string task;
                            //loop according to the number input sepecified
                            while(count < input){
                                //get input from user
                                task = getTask(count);
                                //increment count for keeping track of task size
                                largestTaskSize = (task.length() > largestTaskSize)? task.length() : largestTaskSize;

                                //add element to all task array
                                pendingTasks[nextPendingCount] = task;
                                count++;
                                nextPendingCount++;
                            }
                            divider("Pending Tasks");
                            tableHead("S/N","TASK DESCRIPTION","STATUS", largestTaskSize);
                            for (int i = 1; i < nextPendingCount; i++){
                                tableDisplay(i,pendingTasks[i],"Pending", largestTaskSize);

                            }
                            cout<<"\n\n";
                            }else{
                                cout<<"Error: Invalid Input\n\n";
                                exit(0);
                            }
                            break;
                        }
                        case 2:{
                           // divider("Uncompleted Tasks");

                            int length = sizeof(pendingTasks)/sizeof(pendingTasks[0]);

                            divider("Pending Tasks");
                            if( isArrayEmpty(pendingTasks,sizeof(pendingTasks) / sizeof(pendingTasks[0]))){

                                    tableHead("S/N","TASK DESCRIPTION","STATUS", largestTaskSize);
                                    cout<<"\t\tNothing to display"<<"\n\n\n";
                            }else{
                                tableHead("S/N","TASK DESCRIPTION","STATUS", largestTaskSize);
                                 for (int i = 1; i < nextPendingCount; i++){

                                    tableDisplay(i,pendingTasks[i],"Pending", largestTaskSize);
                                }
                                cout<<"\n\n";
                                //get task from all Task from allTask array and copy  it to completed tasks
                                input = getSelection("Select the task you would like to mark ");
                                cout<<"\n\n";
                                if(input){
                                    if(input <= nextPendingCount ){
                                        completedTasks[nextCompletedTaskCount] = pendingTasks[input];


                                        removeElement(pendingTaskSize,pendingTasks[input],pendingTasks);
                                        nextCompletedTaskCount++;
                                        nextPendingCount--;
                                    }else{
                                        cout<<"ERROR: Please select a valid input"<<"\n\n";
                                    }
                                }else{
                                       // cout<<"mark completed task"<<"\n\n";
                                    cout<<"ERROR: Invalid Selection"<<"\n\n";
                                }
                            }
                             divider("Completed Tasks");
                             tableHead("S/N","TASK DESCRIPTION","STATUS", largestTaskSize);
                             for (int i = 1; i < nextCompletedTaskCount; i++){
                                tableDisplay(i,completedTasks[i],"Completed",largestTaskSize);
                            }

                            cout<<"\n\n";
                            break;
                        }
                        case 3:{
                             divider("Completed Tasks");
                             tableHead("S/N","TASK DESCRIPTION","STATUS", largestTaskSize);
                            int length = sizeof(completedTasks)/sizeof(completedTasks[0]);
                            if( isArrayEmpty(completedTasks,sizeof(pendingTasks) / sizeof(pendingTasks[0]))){
                                    cout<<"\t\tNothing to display"<<"\n\n\n";
                            }else{

                                  for (int i = 1; i < nextCompletedTaskCount; i++){
                                    tableDisplay(i,completedTasks[i],"Completed", largestTaskSize);
                                }
                                 cout<<"\n\n";
                                //get task from all Task from allTask array and copy  it to completed tasks
                                input = getSelection("Select the task you would like to Unmark ");
                                  if(input){
                                    if(input <= nextCompletedTaskCount ){
                                        //copy item from completed to pending
                                        pendingTasks[nextPendingCount] = completedTasks[input];

                                        //remove item from completed task
                                        removeElement(completedTaskSize,completedTasks[input],completedTasks);
                                        nextCompletedTaskCount--;
                                        nextPendingCount++;
                                    }else{
                                        cout<<"ERROR: Please select a valid input"<<"\n\n";
                                    }

                                }else{
                                    cout<<"ERROR: Invalid Selection"<<"\n\n";
                                }
                                divider("Pending Tasks");
                                tableHead("S/N","TASK DESCRIPTION","STATUS", largestTaskSize);
                                 for (int i = 1; i < nextPendingCount; i++){

                                    tableDisplay(i,pendingTasks[i],"Uncompleted",largestTaskSize);
                                }

                            }
                            break;
                        }
                        case 4:{
                            divider("All Tasks");
                            //check if both arrays are empty
                            if( isArrayEmpty(pendingTasks,sizeof(pendingTasks) / sizeof(pendingTasks[0])) && isArrayEmpty(pendingTasks,sizeof(pendingTasks) / sizeof(pendingTasks[0]))){

                                tableHead("S/N","TASK DESCRIPTION","STATUS", largestTaskSize);
                                cout<<"\t\tNothing to display"<<"\n\n\n";
                            }else{

                                tableHead("S/N","TASK DESCRIPTION","STATUS", largestTaskSize);
                                printAllTasks(nextPendingCount,nextCompletedTaskCount,pendingTasks,completedTasks,largestTaskSize);
                                   cout<<"\n\n";
                            }
                            break;
                        }
                        case 5:{
                                divider("Completed Tasks");
                            if( isArrayEmpty(completedTasks,sizeof(completedTasks) / sizeof(completedTasks[0]))){
                                tableHead("S/N","TASK DESCRIPTION","STATUS", largestTaskSize);
                                cout<<"\t\tNothing to display"<<"\n\n\n";
                            }else{
                                //divider("Completed Tasks");
                                tableHead("S/N","TASK DESCRIPTION","STATUS", largestTaskSize);
                                printIndividualTasks(nextCompletedTaskCount,completedTasks,"Completed",largestTaskSize);
                            }
                        }
                            break;
                        case 6:
                                divider("Pending Tasks");
                            if( isArrayEmpty(pendingTasks,sizeof(pendingTasks) / sizeof(pendingTasks[0]))){
                                tableHead("S/N","TASK DESCRIPTION","STATUS", largestTaskSize);
                                cout<<"\t\tNothing to display"<<"\n\n\n";
                            }else{
                               // divider("Pending Tasks");
                                tableHead("S/N","TASK DESCRIPTION","STATUS", largestTaskSize);
                                printIndividualTasks(nextPendingCount,pendingTasks,"Pending",largestTaskSize);
                            }

                            break;
                        default:
                            exit(0);

                    }


            }else{
                cout<<"\nERROR: Invalid menu selection\n\n";
            }

       }else{
           cout<<"\nERROR:  Enter A Valid Input\n\n";
           exit(0);
       }

    }
    return 0;
}

















