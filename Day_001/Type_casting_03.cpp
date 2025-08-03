#include <iostream>
using namespace std;

int main() {
//Type casting (Explicit conversion)
    char grade ='h';
    int size =  grade;
    cout << "size of grade : " << size << endl;

//Type conversion (Implicit conversion)
    double price = 100.999;
    int new_price= (int) price;  
    cout << "The new price is : " << new_price << endl;
    return 0;
}
