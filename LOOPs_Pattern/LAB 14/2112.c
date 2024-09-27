#include<stdio.h>

void main()
{
    int n , Tcols;
    printf("Enter the number of Row: ");
    scanf("%d",&n);


    for(int row =1 ; row<=n;row++)
    {
        Tcols = row;
        for(int col=1;col<=n+row;col++)
        {
            if(col <= n-row)
            {
                printf(" ");
            }
            else{

                if(col <= n )
                {
                    if(Tcols == 0)
                    {
                        Tcols++;
                    }
                    printf("%d",Tcols);
                    Tcols--;
                }
                else{
                    if(Tcols == 0)
                    {
                        Tcols++;
                    }
                    printf("%d",Tcols);
                    Tcols++;
                }
                
            }
            
        }
        printf("\n");
    }
}