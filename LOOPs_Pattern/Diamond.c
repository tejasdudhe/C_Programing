#include<stdio.h>

void main()
{
    int n;
    scanf("%d",&n);
    int Tcols = n/2 +1;

    for(int row = 1;row<=n;row++)
    {
        
        for(int col=1 ;col<=Tcols;col++)
        {
            if(col <= (n-Tcols))
            {
                printf("  ");
            }
            else
            {
                printf(" *");
            }
        }


        if(row < n/2+1)
        {
            Tcols++;
        }
        else{
            Tcols--;
        }
        printf("\n");
    }
}