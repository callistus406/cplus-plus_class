#include <iostream>
#include <string>

using namespace std;

int main()
{
int side1;
int side2;
int side3;
cout<<"Triangle Identifier "<<endl;
cout<<"\n\n"<<endl;
cout<<"Enter side1:"<<endl;

cin>> side1;
cout<<"Enter side2:"<<endl;

cin >>side2;
cout<<"Enter side3:"<<endl;
cin >> side3;


if(side1 == side2 &&  side1 == side3){
 cout<< "The result is an Equilateral Triangle"<<endl;

}else if(side1 == side2 || side1 == side3 || side2 == side3){
cout<< "The result is an Isoceles Triangle"<<endl;
}else  {
cout<< "The result is Scalene triangle" <<endl;
}

    return 0;
}
