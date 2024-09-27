
#include <stdio.h>

void acceptArray(int[], int);
void printArray(int[], int);
void rotate(int[], int);
void rotateLeftArray(int[], int, int);
void rotateRightArray(int[], int, int);

int main()
{
    int n;
    printf(" Enter the Length of Array  : ");
    scanf("%d", &n);

    int arr[n];
    acceptArray(arr, n);

    rotate(arr, n);

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
    // printf("\n Array : ");
    for (int i = 0; i < n; i = i + 1)
    {
        printf("%d ", arr[i]);
    }
}

void rotate(int arr[], int n)
{
    char ch;
    int shift;

    printf("\n Enter which side you want to Rotate Array( [L] for Left and [R] for Right) : ");
    scanf(" %c", &ch);

    printf("\n Enter number of Places By you want to Rotate : ");
    scanf("%d",&shift);


    

    

    if (ch == 'L' || ch == 'l')
    {
        rotateLeftArray(arr, n, shift);
    }
    else if (ch == 'R' || ch == 'r')
    {
        rotateRightArray(arr, n, shift);
    }
    else
    {
        printf("Invalid Input.....");
    }
}

void rotateLeftArray(int arr[], int n, int shift)
{
    for (int i = 0; i < shift; i = i + 1)
    {
        int temp = arr[0];
        for (int j = 0; j < n - 1; j = j + 1)
        {
            arr[j] = arr[j + 1];
        }
        arr[n - 1] = temp;
    }

    printf("\n Array Rotated Left Successfully by %d : ", shift);
    printArray(arr, n);
}

void rotateRightArray(int arr[], int n, int shift)
{
    for (int i = 0; i < shift; i = i + 1)
    {
        int temp = arr[n - 1];
        for (int j = n - 1; j > 0; j = j - 1)
        {
            arr[j] = arr[j - 1];
        }
        arr[0] = temp;
    }

    printf("\n Array Rotated Right Successfully by %d : ", shift);
    printArray(arr, n);
}
