#include <stdio.h>

int Add(int x, int y)
{
    int a;
    a = x + y;
    return a;
}

int Subtract(int x, int y)
{
    int sub;
    sub = x - y;
    return sub;
}

int Multiply(int x, int y)
{
    int mul;
    mul = x * y;
    return mul;
}

int Divide(int x, int y)
{
    int div;
    div = x / y;
    return div;
}

int And(int x, int y)
{
    int an;
    an = x & y;
    return an;
}

int Or(int x, int y)
{
    int o;
    o = x | y;
    return o;
}

int Not(int x)
{
    int n;
    n = ~x;
    return n;
}

int Xor(int x, int y)
{
    int xo;
    xo = x ^ y;
    return xo;
}

int Remainder(int x, int y)
{
    int rem;
    rem = x % y;
    return rem;
}

int Increment(int x)
{
    int inc;
    inc = x + 1;
    return inc;
}

int Decrement(int x)
{
    int dec;
    dec = x - 1;
    return dec;
}

int main()
{
    int id;
    int x, y;

    printf("1- Add\n");
    printf("2- Subtract\n");
    printf("3- Multiply\n");
    printf("4- Divide\n");
    printf("5- AND\n");
    printf("6- OR\n");
    printf("7- NOT\n");
    printf("8- XOR\n");
    printf("9- Remainder\n");
    printf("10- Increment\n");
    printf("11- Decrement\n");

    printf("Enter operation ID: ");
    scanf("%d", &id);

    if (id == 1)
    {
        printf("Enter two numbers: ");
        scanf("%d %d", &x, &y);

        printf("Result = %d\n", Add(x, y));
    }
    else if (id == 2)
    {
        printf("Enter two numbers: ");
        scanf("%d %d", &x, &y);

        printf("Result = %d\n", Subtract(x, y));
    }
    else if (id == 3)
    {
        printf("Enter two numbers: ");
        scanf("%d %d", &x, &y);

        printf("Result = %d\n", Multiply(x, y));
    }
    else if (id == 4)
    {
        printf("Enter two numbers: ");
        scanf("%d %d", &x, &y);

        if (y != 0)
        {
            printf("Result = %d\n", Divide(x, y));
        }
        else
        {
            printf("Cannot divide by zero\n");
        }
    }
    else if (id == 5)
    {
        printf("Enter two numbers: ");
        scanf("%d %d", &x, &y);

        printf("Result = %d\n", And(x, y));
    }
    else if (id == 6)
    {
        printf("Enter two numbers: ");
        scanf("%d %d", &x, &y);

        printf("Result = %d\n", Or(x, y));
    }
    else if (id == 7)
    {
        printf("Enter one number: ");
        scanf("%d", &x);

        printf("Result = %d\n", Not(x));
    }
    else if (id == 8)
    {
        printf("Enter two numbers: ");
        scanf("%d %d", &x, &y);

        printf("Result = %d\n", Xor(x, y));
    }
    else if (id == 9)
    {
             printf("Enter two numbers: ");
             scanf("%d %d", &x, &y);

             if (y != 0)
             {
                  printf("Result = %d\n", Remainder(x, y));
             }
                  else
             {  
                    printf("Cannot divide by zero\n");
             }
    }
    else if (id == 10)
    {
        printf("Enter one number: ");
        scanf("%d", &x);

        printf("Result = %d\n", Increment(x));
    }
    else if (id == 11)
    {
        printf("Enter one number: ");
        scanf("%d", &x);

        printf("Result = %d\n", Decrement(x));
    }
    else
    {
        printf("Invalid operation ID\n");
    }

    return 0;
}