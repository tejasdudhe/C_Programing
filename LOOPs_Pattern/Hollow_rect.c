#include<stdio.h>

int main()
{
    int row = 5,col=5;

    for(int r=1;r<=row;r=r+1)
    {
        for(int c= 1 ; c<=col;c++)
        {   
            if(r==1 || c==1 || r==row || c == col )
            {
                printf(" *");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
}