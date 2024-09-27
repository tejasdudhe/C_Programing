#include<stdio.h>


int main()
{
    int num1,num2,num3;
    printf("\n Enter the Number:");
    fflush(stdin);
    scanf("%d %d %d",&num1,&num2,&num3);

    if(num1>num2 && num1>num3)
    {
        printf("The NUM1 %d is Greater.",num1);
    }
    else if(num2>num1 && num2>num3)
    {
        printf("The NUM2 %d is Greater.",num2);
    }
    else{
        printf("The NUM3 %d is Greater.",num3);
    }




    return 0;
}