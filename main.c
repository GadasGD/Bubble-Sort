#include <stdio.h>

void swap(int *x, int *y);
void print_array(int arr[], int k, int n);

int main()
{

    int count = 0, count_swap = 0;
    int arr[] = {
        1,
        55,
        98,
        1,
        4,
        6,
        21,
        123,
        645,
        988,
        12,
    };
    int size = sizeof(arr) / 4;

    print_array(arr, 1, size);
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
                count++;
                count_swap++;
            }
            else
            {
                count++;
            }
        }
    }
    print_array(arr, 0, size);
    printf("Count - %d\t\t\t\t Count swap - %d\n", count, count_swap);
    return 0;
}

void swap(int *x, int *y)
{
    int buffer = *x;
    *x = *y;
    *y = buffer;
}

void print_array(int arr[], int k, int n)
{
    if (k == 1)
    {
        printf("Original array: ");
    }
    else
    {
        printf("Sorted array: ");
    }
    printf("[");
    for (int k = 0; k < n; k++)
    {
        printf("%d", arr[k]);
        if (k < n - 1)
        {
            printf(", ");
        }
        if (k == n - 1)
        {
            printf("]");
        }
        }
    printf("\n");
}