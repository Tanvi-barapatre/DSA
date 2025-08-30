#include <iostream>
using namespace std;

// WAP using while loop to print sum of all number from 1 to N which are divisible by 3.

int main() {
    int num, sum = 0;
    cout << "Enter the last number : ";
    cin >> num;

    int i = 0;
    while (i <= num) {
        if (i % 3 == 0) {
            sum +=i;
        }
        i++;
    } 
    cout << "The sum of all numbers divisible by 3 is : " << sum << endl;
    return 0;
}