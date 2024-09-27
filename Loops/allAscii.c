#include<stdio.h>


int main()
{
    
    for(int i=0;i<=255;i++)
    {
        if(i%10==0)
        {
            getchar();
        }
        printf("the ASCII value of %d is %c\n",i,i);
        
    }


    return 0;
}