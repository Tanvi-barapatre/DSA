#include <iostream>
using namespace std;

// WAP using for loop to print sum of all number from 1 to N which are divisible by 3.
int main() {
    int num, sum = 0;
    cout << "Enter last number : ";
    cin >> num;

    for (int i = 1; i <= num; i++) {
        if (i % 3 == 0) {
            sum +=i;
            i++;
        }
    }
    cout << "The sum of all number divisible by 3 is : " << sum << endl;
    return 0;
}
