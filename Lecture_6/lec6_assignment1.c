#include <stdio.h>

void swap(int arr[], int x, int y);
void bubbleSort(int arr[]);

void bubbleSort(int arr[])
{
    int i, j;

    for(i = 0; i < 6; i++)
    {
        for(j = 0; j < 6 - i; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                swap(arr, j, j + 1);
            }
        }
    }
}

void swap(int arr[], int x, int y)
{
    int z;

    z = arr[x];
    arr[x] = arr[y];
    arr[y] = z;
}

int main()
{
    int arr[7] = {64, 34, 25, 12, 22, 11, 90};
    int i;

    printf("Original Array: ");

    for(i = 0; i < 7; i++)
    {
        printf("%d", arr[i]);

        if(i < 6)
        {
            printf(", ");
        }
    }

    printf("\n");

    bubbleSort(arr);

    printf("Sorted Array: ");

    for(i = 0; i < 7; i++)
    {
        printf("%d", arr[i]);

        if(i < 6)
        {
            printf(", ");
        }
    }

    printf("\n");

    return 0;
}