#include <iostream>
using namespace std;

//Patterns

// WAP to print n number of stars in m number of lines.

int main() {
    int m, n;
    cout << "Enter number of lines : ";
    cin >> m;
    cout << "Enter number of stars : ";
    cin >> n;

    for (int i = 1; i <= m; i++ ){      //lines (rows)
        for (int j = 1; j <= n; j++) {  //stars (column)
            cout << "*" << " ";
        }
        cout << endl;
    }
    return 0;
}

// Output :

// Enter number of lines : 4
// Enter number of stars : 5
// * * * * * 
// * * * * * 
// * * * * * 

// * * * * *
