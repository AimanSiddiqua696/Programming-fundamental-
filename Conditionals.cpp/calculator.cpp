#include <iostream>
using namespace std;
int main(){
    int a;
    int b;
    char op;
    cout<<"Enter the value of a : ";
    cin>>a;
    cout<<"Enter the operator: ";
    cin>>op;
    cout<<"Enter the value of b : ";
    cin>>b;
    if(op == '+'){
        cout<<a + b;
    }
   
    else if(op == '-'){
        cout<<a - b;
    }
   
    else if(op == '*'){
        cout<<a * b;
    }
    else if(op == '/'){
        if(b != 0)
        cout<<a / b;
        else 
        cout<<"Division by zero not allowed"<<endl;
    }
    else 
    cout<<"You entered an invalid operator"<<endl;
   
    return 0;

}