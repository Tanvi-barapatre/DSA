#include <iostream>
using namespace std;

int main() {
    int num, fact = 1;
    cout << "Enter number : ";
    cin >> num;
    int i = 1;

    while (i <= num) {
        fact *= i;
        i++;
    }
    cout << "The factorial of " << num << " is : " << fact << endl;
    return 0;
}