#include <iostream>
using namespace std;
int main (){
    int n;
    int i = 2;
    bool isPrime = 2;
    cout <<" enter your number: ";
    cin>>n;
    if(n <= 1){
        isPrime = false;
    }
    while(i <=(n/2)){
        if(n % i == 0){
            isPrime = false;
            break;
        }
        i++;
    }
        if(isPrime)
            cout<<"prime number";
            else
            cout << "Not  a prime number";
    return 0;
}
