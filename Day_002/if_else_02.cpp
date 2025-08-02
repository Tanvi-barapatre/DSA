#include <iostream>
using namespace std;

int main() {

//if-else statement
//WAP to check whether the person is eligible to vote or not.

    int age;
    cout << "Enter age : ";
    cin >> age;

    if (age >= 18) {
        cout << "You are eligible to vote." << endl;
    } else{
        cout << "You are ineligible to vote" << endl;
    }
    return 0;
}