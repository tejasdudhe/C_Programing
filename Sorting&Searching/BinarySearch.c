#include <stdio.h>

void acceptArray(int[], int);
void printArray(int[], int);
int binarySearch(int[],int,int);



int main()
{
    int n;
    printf("\n Enter the Length of Array : ");
    scanf("%d",&n);

   
    int arr[n];
    acceptArray(arr, n);

    int check;
    printf("\n Enter the value which you want to find in Array : ");
    scanf(" %d",&check);

    int res = binarySearch(arr,n,check);
    if(res!=-1)
    {
        printf("\n Value %d find at index %d ",check,res);
    }
    else{
        printf("\n Value %d is not present in array....");
    }

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

int binarySearch(int arr[],int n,int check)
{
    int start =0;
    int end = n-1;
    
    int mid = start + (end-start)/2;

    while(start<=end)
    {
        if(check < arr[mid])
        {
            end = mid -1;
        }
        else if(check > arr[mid])
        {
            start = mid+1;
        }
        else{
            return mid;
        }
    }

    return -1;
}

//__cded calling convantion

/*
MIND MAPS

WHY
WHAT
STEPS

*/