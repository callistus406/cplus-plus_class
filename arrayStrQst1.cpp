#include <iostream>

#include <algorithm>
using namespace std;

int main()
{
int  num1;
int num2;
int arr[2];

cout<<"Enter num one: "<<endl;
cin>>num1;
arr[0] = num1;
cout<<"Enter num two: "<<endl;
cin>>num2;
arr[1] = num2;

cout<<"initial version: "<<arr[0] <<" " <<arr[1]<<endl;

swap(arr[0],arr[1]);

cout<<"swaped version: "<<arr[0] <<" " <<arr[1]<<endl;



    return 0;
}