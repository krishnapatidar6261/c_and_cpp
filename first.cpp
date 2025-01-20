#include <iostream>
#include <string>
using namespace std;

string checkGreaterThan100(int value) {
    return (value > 100) ? "Greater than 100" : "Not greater than 100";
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    cout << checkGreaterThan100(number) << endl;

    return 0;
}

