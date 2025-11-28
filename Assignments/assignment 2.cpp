#include <iostream>
using namespace std;

bool verifyPin(int correctPin) {
    int attempts = 0, pin;

    while (attempts < 3) {
        cout << "Enter PIN: ";
        cin >> pin;

        if (pin == correctPin)
            return true;

        cout << "Incorrect PIN. Try again.\n";
        attempts++;
    }

    return false; // Failed all attempts
}

void displayMenu() {
    cout << "\n======== ATM MENU ========\n";
    cout << "1. View Balance\n";
    cout << "2. Deposit Cash\n";
    cout << "3. Withdraw Cash\n";
    cout << "4. Reset PIN\n";
    cout << "5. Exit\n";
    cout << "Enter your choice: ";
}

double viewBalance(double balance) {
    cout << "Current Balance: ₦" << balance << endl;
    return balance;
}

double depositMoney(double balance) {
    double amount;
    cout << "Enter amount to deposit: ";
    cin >> amount;

    if (amount <= 0) {
        cout << "Invalid amount.\n";
        return balance;
    }

    balance += amount;
    cout << "Deposit successful.\n";
    return balance;
}

double withdrawMoney(double balance, double dailyLimit) {
    double amount;
    cout << "Enter withdrawal amount: ";
    cin >> amount;

    if (amount <= 0) {
        cout << "Invalid amount.\n";
    }
    else if (amount > balance) {
        cout << "Insufficient balance.\n";
    }
    else if (amount > dailyLimit) {
        cout << "Amount exceeds daily withdrawal limit.\n";
    }
    else {
        balance -= amount;
        cout << "Withdrawal successful.\n";
    }

    return balance;
}

int resetPin(int currentPin) {
    int oldPin, newPin;

    cout << "Enter old PIN: ";
    cin >> oldPin;

    if (oldPin != currentPin) {
        cout << "Incorrect old PIN.\n";
        return currentPin;
    }

    cout << "Enter new PIN: ";
    cin >> newPin;

    cout << "PIN changed successfully.\n";
    return newPin;
}

int main() {
    double balance = 50000;
    double dailyLimit = 20000;
    int pin = 4321;

    cout << "WELCOME TO THE ATM\n";

    if (!verifyPin(pin)) {
        cout << "Account Locked. Please contact your bank.\n";
        return 0;
    }

    int choice;

    do {
        displayMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                viewBalance(balance);
                break;

            case 2:
                balance = depositMoney(balance);
                break;

            case 3:
                balance = withdrawMoney(balance, dailyLimit);
                break;

            case 4:
                pin = resetPin(pin);
                break;

            case 5:
                cout << "Thank you for using our ATM.\n";
                break;

            default:
                cout << "Invalid choice.\n";
        }

    } while (choice != 5);

    return 0;
}
