#include <stdio.h>
#include<limits.h>
int power(int, int, int *);
int main()
{
    int base, index, result = 1;
    printf("\nEnter the base & index: ");
    scanf("%d%d", &base, &index);
    int res = power(base, index, &result);
    if (res)
    {
        if(result < 0 || result > INT_MAX/base)+
        {
            printf("\n The Power is OverFlow....");
        }
        else{
                printf("\nProgram execution success !");
                printf("\nPower is %d", result);
        }
        
    }
    else
    {
        printf("\nError ! Base and index should be positive.");
    }
}
int power(int base, int index, int *result)
{
    if (base >= 0 && index >= 0)
    {
        int pow = 1;
        for (int i = 1; i <= index; i++)
        {
            pow = pow * base;
        }
        *result = pow;
        return 1;
    }
    else
    {
        return 0;
    }
    return 1;
}