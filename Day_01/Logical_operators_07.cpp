#include <iostream>
using namespace std;

int main() {

//Logical operators

    int a, b, c;
    cout << "Enter the value of 'a' : ";
    cin >> a;
    cout << "Enter the value of 'b' : ";
    cin >> b;
    cout << "Enter the value of 'c' : ";
    cin >> c;

    cout << !(a < b) << endl;   // NOT operator 
    cout << ( (a >= b) || (c < b) ) << endl;    // OR operator
    cout << ( (a < c) && (b <= a) ) << endl;    //AND operator
    return 0;
}