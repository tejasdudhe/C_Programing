#include <stdio.h>

void acceptArray(int[], int);
void printArray(int[], int);
void insertionSort(int[], int);
void Swap(int *, int *);

int main()
{
    // int n;
    // printf("\n Enter the Length of Array : ");
    // scanf("%d", &n);

    int arr[5] = {54,24,12,7,125};
   // acceptArray(arr, n);

    insertionSort(arr, 5);

    printArray(arr, 5);
    return 0;
}

// void acceptArray(int arr[], int n)
// {

//     printf("\n Enter the %d values in Array : ", n);
//     for (int i = 0; i < n; i = i + 1)
//     {
//         scanf("%d", &arr[i]);
//     }
// }

void printArray(int arr[], int n)
{
    printf("\n Array : ");
    for (int i = 0; i < n; i = i + 1)
    {
        printf("%d ", arr[i]);
    }
}

void insertionSort(int arr[], int n)
{
    int ptr, temp;
    for (int i = 1; i < n; i = i + 1)
    {
        temp = arr[i];
        ptr = i - 1;

        while (ptr >= 0 && temp <= arr[ptr])
        {
            arr[ptr + 1]=arr[ptr];
            ptr = ptr - 1;
        }
        arr[ptr+1] = temp;
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