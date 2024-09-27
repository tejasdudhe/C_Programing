#include<stdio.h>

void main()
{
    int n;
    scanf("%d",&n);

    for(int row = 1;row<=2*n-1;row++)
    {
        int Tcols = row>n ? 2*n-row:row;
        for(int col=1 ;col<=Tcols;col++)
        {
            printf("* ");
        }
        printf("\n");
    }
}