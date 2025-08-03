#include <iostream>
using namespace std;

//While loop 

//WAP to print numbers from 1 to n.

int main () {
    int num;
    cout << "Enter the last number : ";
    cin >> num;
    int i = 1;
    while (i < num+1) {
        cout << i << " ";
        i++ ;
    }
    return 0;
}