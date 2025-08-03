#include <iostream>
using namespace std;

//For loop

//WAP to find the sum of all the ODD numbers from 1 to n.

int main () {
    int num, oddSum=0;
    cout << "Enter the last number : ";
    cin >> num;

    for (int i=1; i <=num; i++) {
        if (i % 2 ==0){
            continue;
        }
        oddSum+=i;
    }
    cout << "The sum of all the odd numbers is : " << oddSum <<endl;
    return 0;
}