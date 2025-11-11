#include <stdio.h>

void biggest(void)
{
    int num1, num2;
    printf("Please enter two different values: ");
    if (scanf("%d %d", &num1, &num2) != 2) {
        printf("Invalid input.\n");
        return;
    }
    if (num1 > num2) {
        printf("%d is Largest\n", num1);
    } else if (num2 > num1) {
        printf("%d is Largest\n", num2);
    } else {
        printf("Both are Equal\n");
    }
}

