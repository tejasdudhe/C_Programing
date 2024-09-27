#include<stdio.h>

void main()
{
    int n;
    scanf("%d",&n);
    int  Tcols = n;

    for(int row = 1;row<=n;row++)
    {
        
        for(int col=1 ;col<=Tcols;col++)
        {
            if( row == n)
            {
                printf(" *");
            }
            else{
                if(col <= n-row)
                {
                    printf("  ");
                }
                else if(col==Tcols || col == n - row + 1 )
                {
                    printf(" *");
                }
                else{
                    printf("  ");
                }
            }
            
        }
            Tcols++;
        printf("\n");
    }
}