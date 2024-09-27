#include <stdio.h>

void acceptArray(int[], int);
void printArray(int[], int);
void mergeArray(int[], int[], int, int);

int main()
{
    int n, m;
    printf(" Enter the Length of Array both arrays : ");
    scanf("%d%d", &m, &n);

    int arr1[m + n];
    acceptArray(arr1, m);
    int arr2[n];
    acceptArray(arr2, n);

    mergeArray(arr1, arr2, m, n);

    printArray(arr1, m + n);

    return 0;
}

void acceptArray(int arr[], int n)
{
    static int c=1;
    printf("\n Enter the %d values in Array%d : ", n,c);
    for (int i = 0; i < n; i = i + 1)
    {
        scanf("%d", &arr[i]);
    }
    c++;
}

void printArray(int arr[], int n)
{
    printf("\n Array : ");
    for (int i = 0; i < n; i = i + 1)
    {
        printf("%d ", arr[i]);
    }
}

void mergeArray(int arr1[], int arr2[], int m, int n)
{
    for (int i = 0; i < n; i++)
    {
        arr1[m + i] = arr2[i];
    }
}
