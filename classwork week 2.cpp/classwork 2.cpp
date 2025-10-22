#include <iostream>
using namespace std;

int main() {
    int age; // use int instead of double o
    cout << "Please enter your age: ";
    cin >> age;

    if (age >= 18) {
        cout << "You are an Adult";
    }
    else {
        cout << "You are not an adult.";
    }

    return 0;
}
