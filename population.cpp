#include <iostream>
using namespace std;
int main(){
    int population;
    int rate;
    cout<<"Enter the current world population: ";
    cin>>population;
    cout<<"Enter the monthly rate (number of births per month): ";
    cin>>rate;
    int decades = 30 ;
    int months = 12;
    rate = rate * decades * months;


    int total = population + rate;
    cout<<"Population in three decades will be: "<<total;
    return 0;
}