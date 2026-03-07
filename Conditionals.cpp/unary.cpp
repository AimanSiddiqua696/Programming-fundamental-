#include <iostream>
using namespace std;
int main (){
    int a = 10;
    // int b = a++;kaam then update
    // int b = ++a;
    // int b = --a;
    int b = a--;
    cout <<"b : "<<b<<endl;
    cout <<"a : "<<a<<endl;
    return 0;
}