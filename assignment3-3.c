#include <stdio.h>

int main()
{
    int height;

    printf("Enter height of the pyramid: ");
    scanf("%d", &height);

    for (int i = 1; i <= height; i++)
    {
        for (int space = 1; space <= height - i; space++)
        {
            printf(" ");
        }

        for (int star = 1; star <= (2 * i - 1); star++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}