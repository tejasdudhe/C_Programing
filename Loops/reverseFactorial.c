#include<stdio.h>

void main()
{
    int fact;
    printf("Enter the fatorial : ");
    scanf("%d",&fact);


    int i=1;
    int checkFact=1;
    int flag = 0;

    while(checkFact <= fact)
    {
        checkFact = checkFact * (++i);
        if(checkFact==fact)
        {
            flag = 1;
        }
    }

    if(flag)
    {
        printf("%d is the factorial of %d",fact,i-1);
    }
    else{
        printf("%d is invalid factorial",fact);
    }
    
}
