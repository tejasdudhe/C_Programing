// write a menu driven program to impliment the Bank Atm Operations
//  for every operation first accept pin if correct then perform the operation
// user should get only 3 chance to enter pin after that program execuction shoud stop by displaying msg have u have  exceeded thisd limit

// BANK ATM MENU DRIVEN PROGRAM

#include <stdio.h>

int main()
{
    static int pin = 1845;
    int checkPin, c = 0;
    int flag = 0;
    double Bal = 0;
    printf("\n............ATM Menu................");
    printf("\n Welcome to Atm !");

    for (int i = 0; i < 3; i++)
    {
        printf("\n Enter your Pin to perform Transactions : ");
        scanf("%d", &checkPin);

        if (checkPin == pin)
        {
            i = 3;
            flag = 1;
        }
        else
        {
            printf("\n Invalid PIN ! \n");
        }
    }

    
    char ch = 'Y';

    if (flag == 1)
    {

        do
        {
            int no;

            printf("\n..........TRANSACTION MENU.........\n");
            printf("\n Enter 1 to check Balance.");
            printf("\n Enter 2 to Deposit Balance.");
            printf("\n Enter 3 to Withdraw Balance.");
            printf("\n Enter 4 to Change Pin.");

            printf("\n");

            printf("\n Enter the Option: ");
            scanf("%d", &no);

            printf("\n");

            switch (no)
            {
            case 1:
                printf(".......||CHECK BALANCE||............");
                printf("\n Current Balance of User is : %lf", Bal);

                break;

            case 2:
            printf(".......||DEPOSIT MONEY||............");
                double dep = 0;
                printf("\n Enter the Value to Deposit(rs) : ");
                scanf("%lf", &dep);

                Bal = Bal + dep;

                break;

            case 3:
            printf(".......||WITHDRAW MONEY||............");
                double withDr = 0;
                printf("\n Enter the Value to Withdraw Money(rs) : ");
                scanf("%lf", &withDr);

                Bal = Bal - withDr;
                break;

            case 4:
            printf(".......||CHANGE PIN||............");

                printf("\n Enter New Pin : ");
                scanf("%d", &pin);

                break;

            default:
                printf("!! Invalid Input !!");
                break;
            }

            printf("\n DO you Want to continue the Transaction (Y/N):");
            scanf(" %c",&ch);
            printf("\n");

        } while (ch == 'Y' || ch == 'y');
    }
    else
    {
        printf("\n\nYour number of chance to Enter Pin is Ended Try after 24hr...\n\n");
    }
}