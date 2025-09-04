#include <iostream>
using namespace std;

// Number Square Pattern

// WAP to print an n × n square pattern with numbers from 1 to n in each row.

int main() {
    int n;
    cout << "Enter last number : ";
    cin >> n;

    for (int i = 1; i <=n; i++) {
        for (int j = 1; j <= n; j++){
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}

// Output :

// Enter last number : 4
// 1 2 3 4 
// 1 2 3 4 
// 1 2 3 4 
// 1 2 3 4
