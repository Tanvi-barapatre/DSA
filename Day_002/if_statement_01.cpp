#include <iostream>
using namespace std;

int main() {

// if statement 
// WAP to check the given password is correct or not.

    string password;
    cout << "Enter password : ";
    cin >> password;

    if (password == "Omgcpp123") {
        cout << "Correct password" << endl; 
    } 
    return 0;
}