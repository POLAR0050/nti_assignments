#include <stdio.h>

int main()
{
    int fN, sN, sum;

    while (1)
    {
        printf("Enter first number: ");
        scanf("%d", &fN);

        printf("Enter second number: ");
        scanf("%d", &sN);

        sum = fN + sN;

        printf("Sum = %d\n", sum);
    }

    return 0;
}