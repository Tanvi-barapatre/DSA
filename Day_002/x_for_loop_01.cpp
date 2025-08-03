#include <iostream>
using namespace std;

//For loop

//WAP to print the numbers from 0 to n.

int main() {
    int num;
    cout << "Enter last number : ";
    cin >> num;

    for (int i = 0; i <= num; i++) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
