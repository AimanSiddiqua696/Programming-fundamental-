#include <iostream>
using namespace std;
int main(){
    float voltage;
    float current;
    cout<<"Enter voltage: ";
    cin>>voltage;
    cout<<"Enter current: ";
    cin>>current;
    float power = voltage * current;
    cout<<power<<" watts";
    return 0;
}