#include <iostream>
#include <string>
using namespace std;

// WAP to take input from the user and print its value.
int main() {
    string name;
    int age;
    char grade;

    cout << "Enter your name : ";
    cin >> name;
    cout << "Your name is : " << name << endl;
    cout << "Enter your age : ";
    cin >> age;
    cout << "Your age is  : " << age << endl;
    cout << "Enter your grade (A/B/C/D/E) : ";
    cin >> grade;
    cout << "Your grade is : " << grade << endl;

    return 0;

}
