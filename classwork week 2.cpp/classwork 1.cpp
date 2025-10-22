#include <iostream>
using namespace std;

int main() {
    int number; // use int instead of double o
    cout << "Please enter a number: ";
    cin >> number;

    if (number % 5 == 0) {
        cout << "Your number is HiFive";
    }
    else if (number % 2 == 0) {
        cout << "Your number is HiEven";
    }
    else {
        cout << "Your number is neither divisible by 5 nor even.";
    }

    return 0;
}
