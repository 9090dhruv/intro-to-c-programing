#include <stdio.h>

int main() {
    int a, b, c, temp;

    // Input three numbers
    printf("Enter three numbers:\n");
    scanf("%d %d %d", &a, &b, &c);

    // Display original values
    printf("Before swapping: a = %d, b = %d, c = %d\n", a, b, c);

    // Swapping logic
    temp = a;
    a = b;
    b = c;
    c = temp;

    // Display swapped values
    printf("After swapping: a = %d, b = %d, c = %d\n", a, b, c);

    return 0;
}
