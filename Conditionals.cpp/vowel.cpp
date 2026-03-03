#include <iostream>
using namespace std;

int main() {

    char ch;

    cout << "Enter a single character: ";
    cin >> ch;

    // Check if number
    if (ch >= '0' && ch <= '9') {
        cout << "It is a number." << endl;
    }

    // Check if vowel (both uppercase and lowercase)
    else if (ch == 'a' || ch == 'e' || ch == 'i' || 
             ch == 'o' || ch == 'u' ||
             ch == 'A' || ch == 'E' || ch == 'I' || 
             ch == 'O' || ch == 'U') {
        cout << "It is a vowel." << endl;
    }

    // Check if consonant
    else if ((ch >= 'a' && ch <= 'z') || 
             (ch >= 'A' && ch <= 'Z')) {
        cout << "It is a consonant." << endl;
    }

    else {
        cout << "Invalid character." << endl;
    }

    return 0;
}