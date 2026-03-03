#include <iostream>
using namespace std;
int main(){
    float amount;
    float discount;
    cout<<"Enter your amount: ";
    cin>>amount;
    if(amount <= 5000){
         discount = 0.05*amount;
    }
    else {
        
        discount = 0.10*amount;  
    }
     float final = amount - discount;
      cout<<"Your discounted bill is : "<<final<<endl;
    return 0;
    }
   

// Another easy method to solve the above question 

// float amount;
//     cout<<"Enter your amount: ";
//     cin>>amount;
//     if(amount <= 5000){
//         float discount = 0.05*amount;
//         float final = amount - discount;
    
//         cout<<"Your discounted bill is : "<<final<<endl;
//     }
//     else {
//         if(amount >= 5000){
//         float discount = 0.10*amount;
//         float final = amount - discount;
    
//         cout<<"Your discounted bill is : "<<final<<endl;
//     }
//     return 0;
//     }