#include <iostream>
using namespace std;

//Ternery statement
int main() {
    int num;
    cout << "Enter any number : ";
    cin >> num;

    num >= 0 ? cout << "Positive number" : cout << "Negative number";
    return 0;
}

// Another way
// int main() {
//     int num;
//     cout << "Enter any number : ";
//     cin >> num;

//     cout << (num >= 0 ? "Positive number.\n" : "Negative number.\n");
//     return 0;
// }