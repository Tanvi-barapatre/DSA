#include <iostream>
using namespace std;

//do-while loop

// do-while loop works atleast once and returns a value even if the while loop condition is false.

int main () {
    int a=2, b=3, sum=0;
    
    do {
        sum=a+b;
        cout << "The sum is : " << sum << endl;
    }while (a!=2);
    return 0;
}