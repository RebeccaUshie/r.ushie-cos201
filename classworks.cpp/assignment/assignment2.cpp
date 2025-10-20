#include <iostream>
using namespace std;

int main() {
    int a, b, temp;

    cout << "Enter the first number : ";
    cin >> a;

    cout << "Enter the second number : ";
    cin >> b;

    temp = a;  // store a temporarily
    a = b;     // assign b to a
    b = temp;  // assign temp (old a) to b

    cout << "After swapping:" ;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}
