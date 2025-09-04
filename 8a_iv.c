#include <stdio.h>

void main() {
    int n, i = 1, sum = 0;

    printf("Enter a number:\n");
    scanf("%d", &n);

    while(i <= n) {
        sum = sum + i;   // add current i
        i++;             // move to next number
    }

    printf("Sum of numbers = %d\n", sum);
}
