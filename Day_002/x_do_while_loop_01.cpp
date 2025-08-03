#include <iostream>
using namespace std;

//do-while loop

//WAP to print number from 0 to n using do-while loop.

int main () {
    int num;
    cout << "Enter last number : ";
    cin >> num;

    int i=0;
    do {
        cout << i << " ";
        i++;
    }while (i <= num);
    return 0;
}
