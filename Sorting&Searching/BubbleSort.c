#include <stdio.h>

void acceptArray(int[], int);
void printArray(int[], int);
void bubbleSort(int[], int);
void Swap(int*, int*);

int main()
{
    int n;
    printf("\n Enter the Length of Array : ");
    scanf("%d", &n);

    int arr[n];
    acceptArray(arr, n);

    bubbleSort(arr, n);

    printArray(arr, n);
    return 0;
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

void bubbleSort(int arr[], int n)
{
    for (int i = 1; i < n; i = i + 1)
    {
        for (int j = 0; j < n - i; j = j + 1)
        {
            if (arr[j] > arr[j + 1])
            {
                Swap(&arr[j],&arr[j+1]);
            }
        }
    }
}

void Swap(int *num1, int *num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}
//__cded calling convantion

/*
MIND MAPS

WHY
WHAT
STEPS

*/