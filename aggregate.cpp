#include <iostream>
using namespace std;
int main(){
    string name;
    int matric_marks;
    int fsc_marks;
    int ecat_marks;
    cout<<"Enter name:";
    cin>>name;
    cout<<"Enter matric marks:";
    cin>>matric_marks;
    cout<<"Enter fsc marks:";
    cin>>fsc_marks;
    cout<<"Enter ecat marks:";
    cin>>ecat_marks;
    float aggregate;
    aggregate = ((matric_marks / 1100.0) * 100 *0.10)+
    ((fsc_marks / 550.0) *100 * 0.40)+
    ((ecat_marks / 400.0) * 100 * 0.50);
    cout<<aggregate;
    return 0;

}