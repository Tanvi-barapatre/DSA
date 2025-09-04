#include <iostream>
using namespace std;

// Right-Angled Triangle Pattern

// WAP to print a right-angled triangle of stars (*) with n number of lines.

int main() {
    int n;
    cout << "Enter a last number : ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << "*" << " ";
        }
        cout << endl;
    }
    return 0;
}

// Output : 

// Enter a last number : 4
// *       
// * *     
// * * *   
// * * * *
