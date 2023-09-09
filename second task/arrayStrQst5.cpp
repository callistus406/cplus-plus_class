#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{

    int std1Grades[3],std2Grades[3],std3Grades[3],std4Grades[3],std5Grades[3];
    int total[3],average[3];
    string  std1,std2,std3,std4,std5;
    int a, b;
    int sumStd1;
    int sumStd2;
    int sumStd3;
    int sumStd4;
    int sumStd5;



   cout<< "Enter scores for student 1 (add spaces btw your inputs): "<<endl;
   cout<<endl;
   cin>>std1Grades[0]>>std1Grades[1]>>std1Grades[2];
   sumStd1 = std1Grades[0]+std1Grades[1]+std1Grades[2];
   cout<< "Enter scores for student 2 (add spaces btw your inputs): \n"<<endl;
   cin>>std2Grades[0]>>std2Grades[1]>>std2Grades[2];
   sumStd2 = std2Grades[0]+std2Grades[1]+std2Grades[2];
   cout<< "Enter scores for student 3 (add spaces btw your inputs): \n"<<endl;
    cin>>std3Grades[0]>>std3Grades[1]>>std3Grades[2];
    sumStd3 = std3Grades[0]+std3Grades[1]+std3Grades[2];
    cout<< "Enter scores for student 4 (add spaces btw your inputs): \n"<<endl;
    cin>>std4Grades[0]>>std4Grades[1]>>std4Grades[2];
    sumStd4 = std4Grades[0]+std4Grades[1]+std4Grades[2];
    cout<< "Enter scores for student 5 (add spaces btw your inputs): \n"<<endl;
    cin>>std5Grades[0]>>std5Grades[1]>>std5Grades[2];
    sumStd5 = std5Grades[0]+std5Grades[1]+std5Grades[2];
        cout<<"Student"<<"\t"<<"Math"<<"\t"<<"Eng"<<"\t"<<"Total"<<"\t"<<"Average"<<endl;
        cout<<  to_string(std1Grades[0])+"\t"+ to_string(std1Grades[1])+"\t"+ to_string(std1Grades[2])<< "\t"<<sumStd1 <<"\t"<<sumStd1/3 <<endl;
        cout<<  to_string(std2Grades[0])+"\t"+ to_string(std2Grades[1])+"\t"+ to_string(std2Grades[2])<< "\t"<<sumStd2<<"\t"<<sumStd2/3 <<endl;
        cout<<  to_string(std3Grades[0])+"\t"+ to_string(std3Grades[1])+"\t"+ to_string(std3Grades[2])<< "\t"<<sumStd3<<"\t"<<sumStd3/3 << endl;
        cout<< to_string(std4Grades[0])+"\t"+ to_string(std4Grades[1])+" \t"+ to_string(std4Grades[2])<<"\t"<<sumStd4<<"\t"<<sumStd4/3 <<endl;
        cout<<  to_string(std5Grades[0])+"\t"+ to_string(std5Grades[1])+"\t"+ to_string(std5Grades[2])<<"\t"<<sumStd5<<"\t"<<sumStd5/3 <<endl;


    return 0;
}