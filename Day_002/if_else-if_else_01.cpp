#include <iostream>
using namespace std;

//if-else_if-else 
// WAP to check the grades of the student.

int main () {

    double marks;
    cout << "Enter marks : ";
    cin >> marks;

    if (marks >= 90) {
        cout << "Grade : A" << endl;
    } else if (marks < 90 && marks >=80){
        cout << "Grade : B"; 
    } else if (marks < 80 && marks >=70) {
        cout << "Grade : C";
    } else if (marks < 70 && marks >=60) {
        cout << "Grade : D";
    }else if (marks < 60) {
        cout << "FAIL";
    } else {
        cout << "Invalid marks input.";
    }
    return 0;
    
}