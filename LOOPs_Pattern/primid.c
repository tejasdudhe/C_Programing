#include<stdio.h>

void main()
{
    // int row,col;
    // printf("Enter the number of Row and Col :");
    // scanf("%d%d",&row,&col);
    
    for(int r=1;r<=3;r++)
    {
        for(int c=3; c>=1 ;c--)
        {
            if(r-c>=0)
            {
                printf("*");

                if(c<r)
                {
                    printf("*");
                }
            }
            else{
                printf("_");
            }
           
        }
        printf("\n");
    }
}