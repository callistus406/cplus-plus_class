#include <iostream>
using namespace std;

int main(){

    int days[7];
    double  result;
    int a, b;
   cout<< "Enter your daily temperature to calculate (add spaces btw your inputs): "<<endl;
   cout<<endl;
   cin>>days[0]>>days[2]>>days[3]>>days[4]>>days[5]>>days[6]>>days[7];

    result = (days[0]+days[1]+days[2]+days[3]+days[4]+days[5]+days[6]+days[7])/7;

    cout<< "your average Temperature is: " << result<<endl;

    return 0;
}
