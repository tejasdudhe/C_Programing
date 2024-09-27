#include <stdio.h>
int isPrime(int);
int check(int);
int main()
{
    

    int num;

    printf("\n Enter a Number: ");
    scanf("%d", &num);

    int ck = check(num);

    if (ck)
    {
        int prime = isPrime(num);

        if (prime == 0)
        {
            printf("\n %d is a Prime Number", num);
        }
        else
        {
            printf("\n %d is not a Prime Number", num);
        }
    }
    else{
        printf("Please Enter Positive NUmber....");
    }

    return 0;
}

int isPrime(int num)
{
    int count = 2;
    while (count <= num / 2)
    {
        if (num % count == 0)
        {
            return 1;
        }
        count++;
    }

    return 0;
}

int check(int num)
{
    if (num < 0)
    {
        return 0;
    }
    return 1;
}