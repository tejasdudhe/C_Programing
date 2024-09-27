#include<stdio.h>
void findREMQuo(int,int,float*,float*);

void main()
{
   int Ne,De;
   float rem,quo;
do
{
    printf("\n Enter Numerator and Denominator : ");
    scanf("%d%d",&Ne,&De);

    if(De == 0)
    {
        printf("\n Please Enter Denominator Other Than Zero");
    }


} while (De == 0);

 findREMQuo(Ne,De,&rem,&quo);

printf("\n Remainder is %f",rem);
printf("\n Quoitent is %f",quo);


}

void findREMQuo(int Ne, int De,float *rem,float *quo){
    *rem = Ne % De;
    *quo = (float)Ne/De;
}
