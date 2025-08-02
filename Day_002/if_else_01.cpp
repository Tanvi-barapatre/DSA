#include <iostream>
using namespace std;

int main() {

//if-else statement
//WAP to check whether the given number is positive or negative.

    int n;
    cout << "Enter a number : ";
    cin >> n;

    if ( n >= 0) {
        cout << n << " is a postive number." << endl;
    } else{
        cout << n << " is a negative number." << endl;
    }
    return 0;
}