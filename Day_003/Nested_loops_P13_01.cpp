#include <iostream>
using namespace std;

// Continuous Number Triangle Pattern/ Floyd's Triangle Pattern

// WAP to print a right-angled triangle with continuous numbers across rows.

int main() {
    int n;
    cout << "Enter number of lines : ";
    cin >> n;
    int num = 1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
    return 0;
}

//Output : 

// Enter number of lines : 4
// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10