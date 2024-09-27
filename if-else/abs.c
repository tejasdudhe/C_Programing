#include<stdio.h>


int main()
{
    int num1;
    printf("\n Enter the Number:");
    scanf("%d",&num1);

   if(num1 >= 0)
   {
        printf("The Absolute Value of %d is %d",num1);
   }
   else
   {
    int abs = num1*(-1);
    printf("The Absolute Value of %d is %d",num1,abs);
   }




    return 0;
}