#include <stdio.h>

void acceptArray(int[], int);
void printArray(int[], int);
void selectionSort(int[], int);
void Swap(int*, int*);

int main()
{
    int n;
    printf("\n Enter the Length of Array : ");
    scanf("%d", &n);

    int arr[n];
    acceptArray(arr, n);

    selectionSort(arr, n);

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

void selectionSort(int arr[], int n)
{
    int i,j,Smallest;

    for(i=0;i<n;i=i+1)
    {
        Smallest = i;
        for(j=i+1;j<n;j=j+1)
        {
            if(arr[Smallest]>arr[j])
            {
                Smallest=j;
            }
        }

        if(Smallest != i)
        {
            Swap(&arr[i],&arr[Smallest]);
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