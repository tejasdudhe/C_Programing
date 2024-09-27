#include <stdio.h>

void main()
{
    
    for (int i = 1; i <= 5000; i++)
    {
        int digit = i;

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
            printf(" %d is an Amstrong Number \n", digit);
        }
    }
}
