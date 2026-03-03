#include <iostream>
using namespace std;

int main() {

    float salary = 10000;
    float laptopPrice = 50000;
    float advancePercent = 0.5;
    int months = 6;

    float advanceAmount = salary * advancePercent * months;

    if (advanceAmount >= laptopPrice) {
        cout << "Ali can buy the laptop with advance salary." << endl;
    }
    else {
        cout << "Ali cannot buy the laptop with advance salary." << endl;

        float remaining = laptopPrice - advanceAmount;
        float requiredMonths = remaining / salary;

        cout << "He needs additional " << requiredMonths 
             << " months of full salary to buy the laptop." << endl;
    }

    return 0;
}