#include<stdio.h>

// halfPrimid
/*
void main()
{
    int row = 5;

    for(int r =1;r<=row;r++)
    {
        for(int c=1;c<=r;c++)
        {
            printf("*");
        }
        printf("\n");
    }
}
*/


void main()
{
    int row = 5,col=5;

    for(int r =1;r<=row;r++)
    {
        for(int c=col;c>=1;c--)
        {
            if(r>c)
            {
                printf("*");
            }
            else{
                printf(" ");
            }
            
        }
        printf("\n");
    }
}
