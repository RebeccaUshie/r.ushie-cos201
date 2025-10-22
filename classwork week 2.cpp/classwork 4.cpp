#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0)); // seed 

    int number1 = rand() % 10;  // 0–9
    int number2 = rand() % 10;  // 0–9

    if (number1 < number2) {
        int temp = number1;
        number1 = number2;
        number2 = temp;
    }

    int correctAnswer = number1 - number2;

    cout << "Guess the result of number1 - number2: ";
    int guess;
    cin >> guess;

    if (guess == correctAnswer)
        cout << "Wow! You guessed it right!" << endl;
    else
        cout << "Nope The correct answer was " << correctAnswer << endl;

    return 0;
}
