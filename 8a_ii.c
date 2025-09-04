#include<stdio.h>
void main() {
    int i=1, n;

    printf("Enter Number:\n");
    scanf("%d", &n);

    while (i<=n)
    {
        if (i%2!=0)
        {
            printf("%d\n", i);
        }
        i++;
        
    }
}