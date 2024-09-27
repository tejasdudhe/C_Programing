#include<stdio.h>


void main()
{
    int row = 5 ,col = 5;
    int r,c;

    for(r =1;r<=row;r++)
    {

        for(int i =1; i<r;i++)
        {
            printf(" ");
        }


        for(c=1;c<=col;c++)
        { 
            printf("* ");
        }


        
        
        
        printf("\n");
    }
}


// de-refernceing 