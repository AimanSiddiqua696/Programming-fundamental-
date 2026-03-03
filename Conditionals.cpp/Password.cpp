#include <iostream>
using namespace std;
int main(){
    string password;
    string username;
    password = "malik123@gmail.com";
       cout<<"Enter your username: ";
       cin>>username;
       if(password == username){
       cout<<"Wow you have cracked the password";
    }
       else{
        cout<<"Try Again";
       }
       return 0;
       }
