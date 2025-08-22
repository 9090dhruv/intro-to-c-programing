#include <stdio.h>

int main() {
    int num1, num2;

    // Ask the user for two numbers
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);
num1=10;
num2=20;
    // Compare the numbers
    if (num1 < num2) {
        printf("Smaller number: %d\n", num1);
        printf("Larger number: %d\n", num2);
    } else if (num1 > num2) {
        printf("Smaller number: %d\n", num2);
        printf("Larger number: %d\n", num1);
    } else {
        printf("Both numbers are equal: %d\n", num1);
    }

    return 0;
}
