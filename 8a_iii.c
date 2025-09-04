#include <stdio.h>

int main() {
    int start, end;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &start, &end);

    printf("Numbers divisible by 2 between %d and %d are:\n", start, end);
    for (int i = start; i <= end; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
    
    return 0;
}
