#include <iostream>
using namespace std;

// Continuous Character Square Pattern

// WAP to print an n × n square pattern with continuous characters from A to (n × n)th character.

int main() {
    int n;
    cout << "Enter any last number : ";
    cin >> n;
    char ch = 'A';

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << ch << " ";              // Another way  cout << ('A'+j)
            ch ++;
        }
        cout << endl;
    }
    return 0;
}

//Output : 

// Enter any last number : 3
// A B C 
// D E F 
// G H I
