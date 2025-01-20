#include <iostream>
using namespace std;

// Function with int return type
int add(int a, int b) {
    return a + b; // Returns the sum of a and b
}

// Function with float return type
float divide(float a, float b) {
    if (b != 0)
        return a / b; // Returns the result of division
    else
        return -1; // Returns -1 to indicate division by zero
}

// Function with string return type
string greet(string name) {
    return "Hello, " + name + "!";
}

// Function with no parameters and void return type
void printMessage() {
    cout << "This is a void function!" << endl;
}

// Function with bool return type
bool isEven(int num) {
    return num % 2 == 0; // Returns true if num is even
}

int main() {
    // Calling functions and displaying results
    cout << "Addition of 5 and 3: " << add(5, 3) << endl;
    cout << "Division of 10 by 2: " << divide(10, 2) << endl;
    cout << greet("Alice") << endl;
    printMessage();
    cout << "Is 4 even? " << (isEven(4) ? "Yes" : "No") << endl;

    return 0;
}
