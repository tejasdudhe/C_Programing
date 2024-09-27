#include <stdio.h>

void main()
{

    int digit;

    printf("Enter a Number: ");
    scanf("%d", &digit);

    int copy = digit;

    int temp = digit;
    int count = 0;

    for (temp; temp > 0; temp = temp / 10, count++)
    {
    }

    int ams = 0;

    for (int i = 0; i < count; i++)
    {
        int rem = copy % 10;
        copy = copy / 10;
        int mul = 1;
        for (int i = 0; i < count; i++)
        {
            mul = mul * rem;
        }

        ams = ams + mul;
    }

    if (digit == ams)
    {
        printf("%d is an Amstrong Number", digit);
    }
    else
    {
        printf("%d is Not an Amstrong Number", digit);
    }
}
