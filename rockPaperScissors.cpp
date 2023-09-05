#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
using namespace std;

int main()
{
string player1;
string player2;

cout<<"Mini Rock Paper scissors game "<<endl;
//accept input from user
cin>> player1>>player2;
//convert inputs to lowercase before comparision
 transform(player1.begin(), player1.end(), player1.begin(), ::tolower);
  transform(player2.begin(), player2.end(), player2.begin(), ::tolower);
if(player1 == "rock" && player2 == "scissors" ||
    (player1 == "paper" && player2 == "rock")||
    (player1 == "scissors" && player2 == "paper")
   ){
    cout<<"Player one wins"<<endl;

}else if(player1 == "paper" && player2 == "paper"){
    cout<<"it is a draw!!"<<endl;
}else {
    cout<<"Player two wins"<<endl;
}
    return 0;
}