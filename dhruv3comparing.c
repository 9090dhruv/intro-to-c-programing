#include <stdio.h>

int main() {
    int a, b, c;

    // Input three numbers
    printf("Enter three integers:\n");
    scanf("%d %d %d", &a, &b, &c);

    // Compare the numbers
    if (a >= b && a >= c) {
        printf("The largest number is: %d\n", a);
    } else if (b >= a && b >= c) {
        printf("The largest number is: %d\n", b);
    } else {
        printf("The largest number is: %d\n", c);
    }

    return 0;
}
