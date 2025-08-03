#include <iostream>
using namespace std;

//For loop

//WAP to find the sum of numbers from 1 to n;

int main () {
    int num, sum=0;
    cout << "Enter last number : ";
    cin >> num;

    for (int i=1; i <= num; i++) {
        sum+=i;
    }
    cout << "Sum is : " << sum << endl;
    return 0;
}