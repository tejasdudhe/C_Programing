#include <stdio.h>

void main()
{
    int no;
    int num, temp;
    int count = 1;

    printf(" Enter Number from you want to :");
    scanf("%d", &num);

    printf("\n Enter 1 to find 1st 10 prime Number form %d", num);
    printf("\n Enter 2 to find 1st 10 Palindrome Number form %d", num);
    printf("\n Enter 3 to find 1st 10 armstrong Number form %d", num);

    printf("\n Enter Option : ");
    scanf(" %d", &no);

    switch (no)
    {
    case 1:
        // prime Number
        temp = num;
        count = 1;

        while (count <= 10)
        {
            int prime = 0;

            if (temp==1)
            {
                prime = 1;
            }

                for (int i = 2; i <= temp / 2; i++)
                {
                    if (temp % 2 == 0 || temp % 3 == 0)
                    {
                        prime = 1;
                        break;
                    }
                    if (temp % i == 0)
                    {
                        prime = 1;
                        break;
                    }
                }

            if (prime == 0 || temp > 1)
            {
                printf("\n %dst prime number from %d :", count, temp);
                count++;
            }

            temp++;
        }

        break;

    case 2:
        // Palindrome Number
        count = 1;
        temp = num;
        int temp1, rev;

        while (count <= 10)
        {
            rev = 0;
            temp1 = temp;

            while (temp1 != 0)
            {
                int rem = temp1 % 10;
                temp1 = temp1 / 10;
                rev = rev * 10 + rem;
            }

            if (temp == rev)
            {
                printf("\n %dst palinedrome number from %d :", count, rev);
                count++;
            }

            temp++;
        }

        break;
    case 3:
        // armstrong Number

        count = 1;
        temp = num;

        while (count <= 10)
        {
            int copy = num;

                temp = num;
            int c = 0;

            for (temp; temp > 0; temp = temp / 10, c++)
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

            if (temp == ams)
            {
                printf("\n %dst Amstrong number from %d :", count, rev);
                count++;
            }

            temp++;
        }

        break;

    default:
        printf("\n Invalid Option.....");
        break;
    }
}
