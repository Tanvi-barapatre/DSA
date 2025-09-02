#include <iostream>
using namespace std;

// Continuous Number Square Pattern

// WAP to print an n × n square pattern with continuous numbers from 1 to n × n.

int main() {
    int n, num = 1;
    cout << "Enter number of lines : ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
    return 0;
}

//Output : 

// Enter number of lines : 3
// 1 2 3
// 4 5 6
// 7 8 9