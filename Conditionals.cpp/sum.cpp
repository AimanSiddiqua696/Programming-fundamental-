#include <iostream>
using namespace std;
int main(){
    int number;

    int sum = 0;
    int count = 1;
 
    cout<<"Enter your number: ";
    cin>>number;
    while (count <= number){
    sum = sum + count;
    count +=1;
    }
    cout<<sum;
    return 0;
   
}