#include <iostream>
using namespace std;
int main(){
    int sides;
    cout<<"Enter side:";
    cin>>sides;
    sides = (sides - 2 ) * 180;
    cout<<"Sum of angles = "<<sides;
    return 0;
}