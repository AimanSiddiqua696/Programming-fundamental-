#include <iostream>
using namespace std;
int main(){
    int wins ;
    int draws ;
    int losses ;
    cout<<"Enter the number of wins :";
    cin>>wins;
    wins= wins * 3;
    cout<<"Enter the number of draws: ";
    cin>>draws;
    draws = draws * 1;
    cout<<"Enter the number of losses: ";
    cin>>losses;
    losses = losses * 0;
    int points = wins + draws + losses;
    cout<<"Pakistan has obtained "<<points<<" in Asia Cup Tournament";
    return 0;
}