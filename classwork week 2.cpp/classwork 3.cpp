#include <iostream>
#include <cstdlib>
#include <ctime> // time(0)
using namespace std;

int main() {
    srand(time(0));
    cout << rand() % 10;
}
