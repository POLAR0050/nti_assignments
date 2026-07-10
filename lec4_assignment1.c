#include <stdio.h>

int max(int a, int b, int c, int d)
{
    int maximum = a;
    if (b > maximum)
    {
        maximum = b;
    }
    if (c > maximum)
    {
        maximum = c;
    }
    if (d > maximum)
    {
        maximum = d;
    }

    return maximum;
}

int min(int a, int b, int c, int d)
{
    int minimum = a;

    if (b < minimum)
    {
        minimum = b;
    }
    if (c < minimum)
    {
        minimum = c;
    }
    if (d < minimum)
    {
        minimum = d;
    }
    return minimum;
}

int main()
{
    int n1, n2, n3, n4;

    printf("Enter value 1: ");
    scanf("%d",&n1);
    printf("Enter value 2: ");
    scanf("%d",&n2);
    printf("Enter value 3: ");
    scanf("%d",&n3);
    printf("Enter value 4: ");
    scanf("%d",&n4);
    printf("Maximum number is %d\n", max(n1, n2, n3, n4));
    printf("Minimum number is %d\n", min(n1, n2, n3, n4));

    return 0;
}