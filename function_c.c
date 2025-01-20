#include <stdio.h>
#include <string.h>

// Function with int return type
int add(int a, int b) {
    return a + b; // Returns the sum of a and b
}

// Function with float return type
float divide(float a, float b) {
    if (b != 0)
        return a / b; // Returns the result of division
    else
        return -1.0; // Returns -1 to indicate division by zero
}

// Function with char* (string) return type
const char* greet(const char* name) {
    static char message[100]; // Static array to store the greeting
    sprintf(message, "Hello, %s!", name); // Constructs the greeting message
    return message;
}

// Function with no parameters and void return type
void printMessage() {
    printf("This is a void function!\n");
}

// Function with bool-like return type (int in C)
int isEven(int num) {
    return num % 2 == 0; // Returns 1 (true) if num is even, 0 (false) otherwise
}

int main() {
    // Calling functions and displaying results
    printf("Addition of 5 and 3: %d\n", add(5, 3));
    printf("Division of 10 by 2: %.2f\n", divide(10, 2));
    printf("%s\n", greet("Alice"));
    printMessage();
    printf("Is 4 even? %s\n", isEven(4) ? "Yes" : "No");

    return 0;
}