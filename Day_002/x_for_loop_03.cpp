#include <iostream>
using namespace std;

//For loop

//WAP to find the product/factorial of numbers from 1 to n;

int main () {
    int num, prod=1;
    cout << "Enter the last number : ";
    cin >> num;

    for (int i=1; i<=num; i++) {
        prod*=i;
    }
    cout << "The product is : " << prod << endl;
    return 0;
}