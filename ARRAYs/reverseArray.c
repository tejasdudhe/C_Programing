#include <stdio.h>

void acceptArray(int[], int);
void printArray(int[], int);
void reverseArray(int[], int);

void main()
{
    int n;
    printf(" Enter the Length of Array : ");
    scanf("%d", &n);

    int arr[n];

    acceptArray(arr, n);

    reverseArray(arr, n);

    printArray(arr, n);
}

void acceptArray(int arr[], int n)
{
    printf("\n Enter the %d values in Array : ", n);
    for (int i = 0; i < n; i = i + 1)
    {
        scanf("%d", &arr[i]);
    }
}

void printArray(int arr[], int n)
{
    printf("\n Array : ");
    for (int i = 0; i < n; i = i + 1)
    {
        printf("%d ", arr[i]);
    }
}

void reverseArray(int arr[], int n)
{
    for (int i = 0, j = n-1 ; i < n / 2; i = i + 1, j = j - 1)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}
