#include <iostream>
using namespace std;

//While loop 

//WAP to find the sum of all the ODD numbers from 1 to n using while loop.

int main () {
    int num, oddSum=0;
    cout << "Enter the last number : ";
    cin >> num;

    int i=1;
    while (i <=num) {
        if (i % 2 != 0) {
            oddSum+=i;
        }
        i++;
    }
    cout << "The sum of all the odd numbers is : " << oddSum << endl;
    return 0;
}