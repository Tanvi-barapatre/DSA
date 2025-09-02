#include <iostream>
using namespace std;

// Number Triangle Pattern

// WAP to print a right-angled triangle of continuous numbers up to n lines.

int main() {
    int n;
    cout << "Enter a last number : ";
    cin >> n;
    int num = 1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <=i; j++){
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
    return 0;
}

//Output : 

// Enter a last number : 4
// 1
// 2 3
// 4 5 6
// 7 8 9 10