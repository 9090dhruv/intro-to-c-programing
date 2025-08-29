#include <stdio.h>

int main() {
    int n, count = 0, i = 1;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    while(count < n) {
        if(i % 2 == 0) {
            printf("%d\n", i);
            count++;
        }
        i++;
    }

    return 0;
}
