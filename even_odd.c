#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0)
        printf("The number is Even.\n");
    else
        printf("The number is Odd.\n");

    if (num % 5 == 0)
        printf("The number is a Multiple of 5.\n");
    else
        printf("The number is Not a Multiple of 5.\n");

    return 0;
}
