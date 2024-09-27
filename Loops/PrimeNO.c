#include <stdio.h>

int main()
{

    int num, count = 2, prime = 0;

    printf("\n Enter a Number: ");
    scanf("%d", &num);

    while (count <= num / 2)
    {
        if (num % count == 0)
        {
            prime = 1;
        }
    }

    if (prime == 0)
    {
        printf("\n %d is a Prime Number", num);
    }
    else
    {
        printf("\n %d is not a Prime Number", num);
    }

    return 0;
}