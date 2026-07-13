#include <stdio.h>

int main()
{
    int x = 10;
    int y = 20;
    int z = 30;

    int *ptr0;
    int *ptr1;
    int *ptr2;

    ptr0 = &x;
    ptr1 = &y;
    ptr2 = &z;

    printf("Before swapping pointers:\n");

    printf("x = %d, y = %d, z = %d\n", x, y, z);

    printf("ptr0 = %p, ptr1 = %p, ptr2 = %p\n",
           (void *)ptr0, (void *)ptr1, (void *)ptr2);

    printf("*ptr0 = %d, *ptr1 = %d, *ptr2 = %d\n",
           *ptr0, *ptr1, *ptr2);

    ptr2 = ptr0;
    ptr0 = ptr1;
    ptr1 = ptr2;

    printf("\nAfter swapping pointers:\n");

    printf("x = %d, y = %d, z = %d\n", x, y, z);

    printf("ptr0 = %p, ptr1 = %p, ptr2 = %p\n",
           (void *)ptr0, (void *)ptr1, (void *)ptr2);

    printf("*ptr0 = %d, *ptr1 = %d, *ptr2 = %d\n",
           *ptr0, *ptr1, *ptr2);

    return 0;
}