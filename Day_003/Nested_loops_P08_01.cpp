#include <iostream>
using namespace std;

// Repeated Number Triangle Pattern

// WAP to print a right-angled triangle where each row contains the row number repeated.

int main() {
    int n;
    cout << "Enter number of lines : ";
    cin >> n;
    int num = 1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << num << " ";             //Another way : cout << i+1 << " ";  (Without using any other variable (e.g. num))
        }
        num++;
        cout << endl;
    }
    return 0;
} 

//Output : 

// Enter number of lines : 4
// 1
// 2 2
// 3 3 3
// 4 4 4 4
