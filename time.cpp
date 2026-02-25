#include <iostream>
using namespace std;
int main(){
    int hour = 3600;
    int hours;
    int seconds;
    cout<<"Enter number of hours: ";
    cin>>hours;
    seconds = hours * hour;
    cout<<hours<<" is equivalent to "<<seconds<<" seconds";
    return 0;
}