#include <iostream>
using namespace std;

// WAP to check if a number is prime or not.

// Another better approach

int main() {
    int num;
    cout << "Enter any number : ";
    cin >> num;

    if (num < 2) {
        cout << num << " is not a prime number." << endl;
        return 0;
    }

    bool isPrime = true;
    for (int i=2; i*i<=num; i++){           //condition changes.
        if (num % i == 0) {
            isPrime = false;
            break;
        }
    } 

    if (isPrime == true) {
        cout << num << " is a prime number." << endl;
    } else {
        cout << num << " is not a prime number." << endl;
    }
    return 0;
}

