#include <stdio.h>
#include <string.h>

const char* checkGreaterThan100(int value) {
    return (value > 100) ? "Greater than 100" : "Not greater than c";
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("%s\n", checkGreaterThan100(number));

    return 0;
}