#include <iostream>
using namespace std;

// Repeated Alphabet Triangle Pattern

// WAP to print a right-angled triangle where each row contains the same alphabet repeated.

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
        for (int j = 0; j <= i; j++) {
            cout << ch << " ";
        }
        ch++;
        cout << endl;
    }
    return 0;
} 

//Output : 

// Enter number of lines : 5
// A         
// B B       
// C C C     
// D D D D   
// E E E E E 
