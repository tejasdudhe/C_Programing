#include<stdio.h>

void addition();
void add(int,int);

void main()
{
    // int num1,num2;
    // printf("Enter two number for addtion:");
    // scanf("%d%d",&num1,&num2);

    addition();
}

void add(int num1,int num2)
{
    printf("\n %d + %d = %d",num1,num2,num1+num2);
}

void addition(){
    int num1,num2;
    printf("Enter two number for addtion:");
    scanf("%d%d",&num1,&num2);

    printf("\n %d + %d = %d",num1,num2,num1+num2);
}