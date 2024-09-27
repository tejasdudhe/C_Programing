#include<stdio.h>

int main()
{
    double bSalary,tSale;
    double com;

    printf("Enter the Basic Salary: ");
    scanf("%lf",&bSalary);
    printf("\n Enter the total Sale: ");
    scanf("%lf",&tSale);

    if(tSale >= 5000 && tSale <= 7500)
    {
        com = 3;
    }
    else if(tSale >=7501 && tSale <= 10500)
    {
        com = 8;
    }
    else if(tSale >=10501 && tSale < 15000)
    {
        com = 11;
    }
    else if(tSale >=15000)
    {
        com = 15;
    }
    else{
        printf("Invalid");
    }

    double Commission = tSale * (com/100);
    double netSal = bSalary + Commission;

    printf("\n Commission Earned: %lf",Commission);
    printf("\n Net Salary: %lf",netSal);

    return 0;


}