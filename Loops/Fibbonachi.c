#include<stdio.h>

void main()
{
    int no,term1=0,term2=1,term3=0;
    printf("Enter the length of Fibb Series : ");
    scanf("%d",&no);
    
    for(int i=1;i<=no;i++)
    {
        printf("\n The Term %d of Fibb Series is %d",i,term1);
        term3 = term1+term2;
        term1 = term2;
        term2 = term3;
    }

}