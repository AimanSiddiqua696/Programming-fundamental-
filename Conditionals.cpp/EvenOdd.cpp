#include <iostream>
using namespace std;
int main(){
    int number;
    int even;
    cout<<"Enter your number: ";
    cin>> number;
    even =  number%2;
    if(even == 0){
        cout<<"The number you entered is even.";}
        else{
            cout<<" The number is odd.";
        }
        return 0;
    }
