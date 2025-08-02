#include <iostream>
using namespace std;

int main() {

//if-else statement
//WAP to check whether the number is even or odd.

    int num;
    cout << "Enter any number : ";
    cin >> num;

    if (num % 2 == 0) {
        cout << num << " is EVEN number." << endl;
    } else {
        cout << num << " is ODD number." << endl;
    }
    return 0;
}