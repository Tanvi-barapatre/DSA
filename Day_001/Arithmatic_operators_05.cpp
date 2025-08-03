#include <iostream>
using namespace std;

int main() {

//Arithmatic opertors

    int a, b, sum=0, sub=0, mul=0, div=0, mod=0;
    cout << "Enter the value of 'a' : ";
    cin >> a;
    cout << "Enter the value of 'b' : ";
    cin >> b;

    sum = a + b;    //Addition
    sub = a - b;    //Subtraction
    mul = a * b;    //Multiplication
    div = a / b;    //Division
    mod = a % b;    //Modula (Remainder)

    cout << "The addition is : " << sum << endl;
    cout << "The subtraction is : " << sub << endl;
    cout << "The multiplication is : " << mul << endl;
    cout << "The division is : " << div << endl;
    cout << "The remainder is : " << mod << endl;
    return 0;
}
