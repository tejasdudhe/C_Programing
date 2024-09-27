#include <stdio.h>

void acceptArray(int[], int);
void printArray(int[], int);


int main()
{
    int arr[10] = {1,2,3,4,5};

    for(int i=0; i< sizeof(arr)/sizeof(int); i++)
    {
        if(arr[i]==0)
        {
            printf("arr[%d] : ",i);
            scanf("%d",&arr[i]);
        }
    }

   printArray(arr,10);

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