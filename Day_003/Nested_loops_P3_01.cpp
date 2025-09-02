#include <iostream>
using namespace std;

// Character Square Pattern

// WAP to print an n × n square pattern with characters from A to n letters in each row.

int main() {
    int n;
    cout << "Enter number of lines : ";
    cin >> n;
    

    for (int i = 0; i < n; i++) {
        char ch = 'A';
        for (int j = 0; j < n; j++) {
            cout << ch << " ";                  //Another way : cout << char ('A' + j) 
            ch++;
        }
        cout << endl;
    }
    return 0;
}

//Output :

// Enter number of lines : 5
// A B C D E 
// A B C D E 
// A B C D E 
// A B C D E 
// A B C D E 