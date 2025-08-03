#include <iostream>
using namespace std;

//While loop 

//WAP to find the factorial/product from 1 to n.

int main () {
    int num, prod=1;
    cout << "Enter last number : ";
    cin >> num;

    int i=1;
    while (i <= num) {
        prod *=i;
        i++;
    }
    cout << "The product/ factorial is : " << prod << endl;
    return 0;
}