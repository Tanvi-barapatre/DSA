#include <iostream>
using namespace std;

// Variables
int main() {
    int age = 19;
    char grade = 'A';
    float PI = 3.14f;
    double price = 100.02;
    bool issafe = false;
    string name = "Bhakar";

    cout << "\n";

    // sizeof () : Determines the amount of memory (in byte) that a data type or variable occupies in memory.
    
    cout << "int size : " << sizeof(age) << endl;
    cout << "char size : " << sizeof(grade) << endl;
    cout << "float size : " << sizeof(PI) << endl;
    cout << "double size : " << sizeof(price) << endl;
    cout << "bool size : " << sizeof(issafe) << endl;

    cout << "\n";

    cout << "Age : " << age << endl;
    cout << "Grade : " << grade << endl;
    cout << "PI : " << PI << endl;
    cout << "Price : " << price << endl;
    cout << "Issafe : " << issafe << endl;
    cout << "My name is : " << name << endl;
    return 0;
}