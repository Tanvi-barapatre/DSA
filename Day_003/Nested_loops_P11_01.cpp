#include <iostream>
using namespace std;

// Inverted Number Triangle Pattern

// WAP to print a right-angled triangle where each row starts with the row number and decreases down to 1.

int main() {
    int n;
    cout << "Enter number of lines : ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = i+1; j > 0; j--) {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}

//Output :

// Enter number of lines : 4
// 1
// 2 1
// 3 2 1
// 4 3 2 1