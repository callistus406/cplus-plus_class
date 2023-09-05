#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
double num1;
double num2;
double result;
char _operator ;
cout<<"Mini Calculator program "<<endl;
cout<<"\n\n"<<endl;
cout<<"Input format 'number  operator  number':"<<endl;

cin>> num1 >> _operator>>num2;
cout<<num2/0<<endl;
if(num1 && _operator && num2){
    if(_operator == '+'){
        result = num1 + num2;
    }else if(_operator== '-'){
    result=num1  - num2;
    }else if(_operator == '*'){
    result = num1 * num2;
    }else if(_operator == '/' && num2  == 0){
    cout << "Zero can not divide"<< num1<<endl;
    }else if(_operator == '/' && num2 != 0){
    result = num1 / num2;
    }else{
     cout<< "Invalid arithmetic Operation"<< endl;
    }
    cout<<"Output:" << result<<endl;
}else{
cout<<"Provide a valid input"<<endl;
}

    return 0;
}
