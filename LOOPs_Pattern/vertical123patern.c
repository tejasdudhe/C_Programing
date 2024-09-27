#include<stdio.h>

void main()
{
    // int row,col;
    // printf("Enter the number of Row and Col :");
    // scanf("%d%d",&row,&col);
    
    int row = 10 ,r;
    int temp;

    for( r=1;r<=row;r++)
    {
        temp = r;
        for(int c=1 ; c<=r ; c++)
        {
            printf(" %d",temp);
            temp = temp + (row-c);
            
        }
        
        printf("\n");
    }
}