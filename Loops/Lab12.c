#include<stdio.h>
#include<stdio.h>


int main()
{
    int i=0;
    while(i<=25)
    {    
        
        int count=2,prime=0;
        int num = i;

        if(num<2){
            num = 2;
            i=2;
        }
              

        while(count<=num/2)
        {
            if(num % count==0)
            {
                prime = 1;
            }
            count++;
        }

        if(prime == 0)
        {
            printf("\n %d is a Prime Number",num);
        }

        i++;
    }


    return 0;
}