#include<stdio.h>
float SQRT(float);
void main()
{
    float num;
    printf("Enter the Number to check SQRT ");\
    scanf("%f",&num);

    float res = SQRT(num);
   printf("SQRT of %f is %f ",num,res);
}

float SQRT(float num)
{
    
    for(float i = 1 ; i<= num/2;i++ )
    {
        if(i*i == num)
        {
            return i;
        }
    }

    return 0;
}