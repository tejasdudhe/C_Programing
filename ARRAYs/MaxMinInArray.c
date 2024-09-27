#include <stdio.h>

void acceptArray(int[], int);
void printArray(int[], int);
void max(int[], int);
void min(int[], int);

void main()
{
    int n;
    printf(" Enter the Length of Array : ");
    scanf("%d", &n);

    int arr[n];

    acceptArray(arr, n);
    printArray(arr, n);

    max(arr,n);
    min(arr,n);
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

void max(int arr[], int n)
{
    int maxi;
    for (int i = 0; i < n - 1; i = i + 1)
    {
        maxi = (arr[i] > arr[i + 1]) ? arr[i] : arr[i + 1];
    }

    printf("\n Maximum Value in Given Array is %d",maxi);
}

void min(int arr[], int n)
{
    int mini;
    for (int i = 0; i < n - 1; i = i + 1)
    {
        mini = (arr[i] < arr[i + 1]) ? arr[i] : arr[i + 1];
    }

    printf("\n mminimum Value in Given Array is %d",mini);
}