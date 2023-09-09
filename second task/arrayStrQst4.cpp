#include <iostream>

using namespace std;

int main()
{
char inputs[3][3] ;

string result[9];
cout<<"enter nine characters "<<endl;

cin>>inputs[0][0]>>inputs[0][1]>>inputs[0][2]>>inputs[1][0]>>inputs[1][1]>>inputs[1][2]>>inputs[2][0]>>inputs[2][1]>>inputs[2][2];

result[0] = inputs[0][0],result[1] = inputs[0][1],result[2] = inputs[0][2],result[3] = inputs[1][0],result[4] = inputs[1][1],result[5] = inputs[1][2],result[6] = inputs[2][0],result[7] = inputs[2][1],result[8] = inputs[2][2];

cout<<inputs[0][0]<<inputs[0][1]<<inputs[0][2]<<"\n"<<inputs[1][0]<<inputs[1][1]<<inputs[1][2]<<"\n"<<inputs[2][0]<<inputs[2][1]<<inputs[2][2];
cout<<"\n"<<endl;

cout<<result[0]<<result[1]<<result[2]<<"\n"<<result[3]<<result[4]<<result[5]<<"\n"<<result[6]<<result[7]<<result[8];

    return 0;
}


