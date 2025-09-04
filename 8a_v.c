#include<stdio.h>

void main() {
    int num, i=1, evencount=0, oddcount=0;

    printf("Enter 10 Numbers:\n");

    while (i<=10){
        scanf("%d", &num);

        if (num%2 == 0)
        {
            evencount++;
        }
        else{
            oddcount++;
        }
        i++;
    }
    printf("Even Count:%d\n", evencount);
    printf("Odd Count:%d\n", oddcount);
}