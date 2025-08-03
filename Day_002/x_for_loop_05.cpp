#include <iostream>
using namespace std;

//For loop

//WAP to find the sum of all the EVEN numbers from 1 to n.

int main () {
    int num, evenSum=0;
    cout << "Enter the last number : ";
    cin >> num;

    for (int i=1; i <=num; i++) {
        if (i % 2 ==0) {
            evenSum+=i;
        }
    }
    cout << "The sum of all the even numbers is : " << evenSum << endl;
    return 0;
}