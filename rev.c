#include <stdio.h>

void reverse(void)
{
    char str[1000], rev[1000];
    int i, j, count = 0;

    printf("\nEnter string to reverse: ");
    if (scanf("%999s", str) != 1) {
        printf("Invalid input.\n");
        return;
    }

    /* find length */
    while (str[count] != '\0') count++;
    j = count - 1;

    /* reverse and null-terminate */
    for (i = 0; i < count; i++) {
        rev[i] = str[j--];
    }
    rev[count] = '\0';

    printf("String Before Reverse: %s\n", str);
    printf("String After Reverse: %s\n", rev);
}

