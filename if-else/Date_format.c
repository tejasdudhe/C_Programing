#include<stdio.h>

int main()
{
    int dd,mm,yy;
    char s1,s2;

    printf("Enter the Date in the format DD/MM/YY : ");
    scanf("%d%c%d%c%d",&dd,&s1,&mm,&s2,&yy);

   switch (mm)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("This  Month has 31 Days\n");
        break;

    case 4:
    case 6:
    case 9:
    case 11:
        printf("This Month has 30 Days\n");
        break;

    case 2:
        if ((yy % 4 == 0 && yy % 100 != 0) || (yy % 400 == 0))
        {
            printf("This Month has 29 Days\n");
        }
        else
        {
            printf("This Month has 28 Days\n");
        }
        break;

    default:
        printf("Invalid month: %d\n", mm);
        break;
    }





    return 0;
}