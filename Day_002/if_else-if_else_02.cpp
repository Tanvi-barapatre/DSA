#include <iostream>
using namespace std;

//if-else_if-else 
//WAP to find whether the given character is uppercase or lowercase.

int main () {
    char ch;
    cout << "Enter a character : ";
    cin >> ch;
    cout << "The ASCII value of " << ch << " is : " << (int)ch << endl;
    if ( ch <=90 && ch >=65){                               //Implicit type conversion
        cout << ch << " is uppercase character." << endl;
    } else if ( ch >=97 && ch <=122) {
        cout << ch << " is a lowercase character." << endl;
    } else {
        cout << ch << " is a invalid character." << endl;
    }
    return 0;
} 

    // char n;
    // cout << "Enter a character : ";
    // cin >> n;
    // cout << "The ASCII value of " << n << " is : " << (int)n << endl;
    // if ( n >= 'a' && n <= 'z') {
    //     cout << n << " is lowercase character." << endl;
    // } else if (n >= 'A' && n <= 'Z') {
    //     cout << n << " is a uppercase character." << endl;
    // } else {
    //     cout << n << " is a invalid character." << endl;
    // }
    // return 0;
// }
