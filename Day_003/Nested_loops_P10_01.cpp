#include <iostream>
using namespace std;

// Number Triangle Pattern (starting from 0)

// WAP to print a right-angled triangle where each row starts from 0 and increases up to the row number.

int main() {
    int n;
    cout << "Enter number of lines : ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}

//Output :

// Enter number of lines : 4
// 0
// 0 1       
// 0 1 2     
// 0 1 2 3   
