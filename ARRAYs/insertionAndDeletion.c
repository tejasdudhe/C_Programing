
#include <stdio.h>
#define MAX 100

void acceptArray(int[], int);
void printArray(int[], int);
void insertValue(int[], int *);
void deleteValue(int[], int *);
void removeDuplicate(int[], int *);
void occurance(int[],int);

int main()
{
    int n;
    printf(" Enter the Length of Array  : ");
    scanf("%d", &n);

    int arr[MAX];
    acceptArray(arr, n);

    // insertValue(arr, &n);
    // deleteValue(arr, &n);
    // removeDuplicate(arr,&n);
    occurance(arr,n);

    printArray(arr, n);
    printf("\n\n%d", n);

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

void insertValue(int arr[], int *len)
{
    int val, index;
    printf("\n Enter a value which you want to insert :");
    scanf("%d", &val);
    printf("\n Enter a index where you want to insert value :");
    scanf("%d", &index);

    int i;
    for (i = *len; i > index; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[i] = val;
    *len = *len + 1;
}

void deleteValue(int arr[], int *len)
{
    int val, index;
    char ch;
    printf("\n Enter I for deletebyIndex and V for deleteByValue : ");
    scanf(" %c", &ch);

    if (ch == 'i' || ch == 'I')
    {
        printf("\n Enter a index where you want to Delete value : ");
        scanf("%d", &index);

        for (int i = index; i < *len - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        *len = *len - 1;
    }
    else if (ch == 'V' || ch == 'v')
    {
        printf("\n Enter a value which you want to Delete : ");
        scanf("%d", &val);

        for (int i = 0; i <= *len; i++)
        {
            if (arr[i] == val)
            {
                for (int j = i; j < *len - 1; j++)
                {
                    arr[j] = arr[j + 1];
                }
                *len = *len - 1;
            }
        }
    }
    else
    {
        printf("Invalid Input.............");
    }
}

void removeDuplicate(int arr[], int *len)
{
    int i, j;
    for (i = 0; i < *len; i = i + 1)
    {
        for (j = i+1; j < *len; j = j + 1)
        {
            while(arr[i]==arr[j])
            {
                for(int k = j ;k<*len;k++)
                {
                    arr[k] = arr[k+1];
                }
                *len = *len -1;
            }
        }
       
    }
}

void occurance(int arr[],int n){

    int i,j;
    int count;
    for(i=0;i<n;i++)
    {
        count=0;
        for(j=0;j<n;j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
            }

        }
        printf("\n%d -- %d\n",arr[i],count);
    }
}