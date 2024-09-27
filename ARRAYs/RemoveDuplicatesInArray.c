
#include <stdio.h>

void acceptArray(int[], int);
void printArray(int[], int);
int removeDuplicates(int[], int);

int main()
{
    int n;
    printf(" Enter the Length of Array  : ");
    scanf("%d", &n);

    int arr[n];
    acceptArray(arr, n);

    int len = removeDuplicates(arr, n);

    printArray(arr, len);

    return 0;
}

void acceptArray(int arr[], int n)
{
    static int c = 1;
    printf("\n Enter the %d values in Array%d : ", n, c);
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

int removeDuplicates(int arr[], int n)
{

    if (n == 0 || n == 1)
    {
        return n;
    }

    int i, j, k;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                for (k = j; k < n - 1; k++)
                {
                    arr[k] = arr[k + 1];
                }
            }
        }
        n--;
        j++;
    }

    return n;
}

//[1,2,1,3,4,5,2,4]