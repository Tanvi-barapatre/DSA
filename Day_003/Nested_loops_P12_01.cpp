#include <iostream>
using namespace std;
// Inverted Alphabet Triangle Pattern

// WAP to print a right-angled triangle where each row starts with its corresponding alphabet and decreases down to A.

int main() {
    int n;
    cout << "Enter number of lines : ";
    cin >> n;

    if (n > 26) {
        cout << "Error: Cannot print more than 26 rows with unique alphabets!" << endl;
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        char ch = 'A' + i - 1;
        for (int j = i; j >= 1; j--) {
            cout << ch << " ";
            ch--;
        }
        
        cout << endl;
    }
    return 0;
}

//Output :

// Enter number of lines : 4
// A       
// B A     
// C B A   
// D C B A
