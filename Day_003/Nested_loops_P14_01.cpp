#include <iostream>
using namespace std;

// Continuous Alphabet Triangle Pattern

// WAP to print a right-angled triangle where alphabets increase continuously across rows.

int main() {
    int n;
    cout << "Enter number of lines : ";
    cin >> n;
    char ch = 'A';
    
    if (n > 26) {
        cout << "Error: Cannot print more than 26 rows with unique alphabets!" << endl;
        return 0;
    }

    for (int i = 0; i < n; i++) {
        for (int j = i+1; j > 0; j--) {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
    return 0;
}

//Output :

// Enter number of lines : 4
// A 
// B C
// D E F
// G H I J