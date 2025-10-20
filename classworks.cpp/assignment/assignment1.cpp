#include <iostream>
using namespace std;

int main() {
    double firstno, secondno;

    cout << "Enter the first number: ";
    cin >> firstno;

    cout << "Enter the second number: ";
    cin >> secondno;

    double sum = firstno + secondno;
    double difference = firstno - secondno;
    double product = firstno * secondno;

    cout << "The sum of both numbers = " << sum ;
    cout << "The difference of both numbers = " << difference ;
    cout << "The product of both numbers = " << product ;

    return 0;
}
