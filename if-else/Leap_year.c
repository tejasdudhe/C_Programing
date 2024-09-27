
#include<stdio.h>


int main()
{
    int year;
    printf("Enter the year:");
    scanf("%d",year);

    if(year%4==0)
    {
        if(year%100!=0){

            printf("leap year");
        }
        else if( year % 400 == 0 )
        {
            printf("Leap year");
        }
        else{
            printf("NOt Leap year");
        }
    }
    else{
        printf("Not leap year");
    }

    return 0;
}