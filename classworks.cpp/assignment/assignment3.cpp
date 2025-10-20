#include <iostream>
using namespace std;

int main() {
    double amount, taxrate = 0.06, totaltax, totalamount;

    cout << "Enter the purchase amount: ";
    cin >> amount;

    totaltax = amount * taxrate;
    totalamount = amount + totaltax;

    cout << "Sales Tax  = " << totaltax << endl;
    cout << "Total Amount  = " << totalamount << endl;

    return 0;
}
