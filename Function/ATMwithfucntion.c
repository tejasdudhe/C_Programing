// write a menu driven program to impliment the Bank Atm Operations
//  for every operation first accept pin if correct then perform the operation
// user should get only 3 chance to enter pin after that program execuction shoud stop by displaying msg have u have  exceeded thisd limit

// BANK ATM MENU DRIVEN PROGRAM

#include <stdio.h>

void checkBalance(double);
double moneyDeposit(double);
double withdrawMoney(double);
int changePin(int);
int checkPin(int);

int main()
{
    static int pin = 1845;
    int c = 0;
    double Bal = 1000;
    double dep = 0;
    double withDr = 0;
    int F =0;
    printf("\n............ATM Menu................");
    printf("\n Welcome to Atm !");

    char ch = 'Y';

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
            F = checkPin(pin);
            if (F)
            {
                checkBalance(Bal);
            }
            else
            {
                printf("\n\nYour number of chance to Enter Pin is Ended Try after 24hr...\n\n");
            }

            break;

        case 2:
            F = checkPin(pin);
            if (F)
            {
                Bal = moneyDeposit(Bal);
            }
            else
            {
                printf("\n\nYour number of chance to Enter Pin is Ended Try after 24hr...\n\n");
            }

            break;

        case 3:
                F = checkPin(pin);
            if (F)
            {
               Bal = withdrawMoney(Bal);
            }
            else
            {
                printf("\n\nYour number of chance to Enter Pin is Ended Try after 24hr...\n\n");
            }

            break;

        case 4:
        F = checkPin(pin);
            if (F)
            {
                pin =changePin(pin);
            }
            else
            {
                printf("\n\nYour number of chance to Enter Pin is Ended Try after 24hr...\n\n");
            }

            break;

        default:
            printf("!! Invalid Input !!");
            break;
        }

        printf("\n\n DO you Want to continue the Transaction (Y/N):");
        scanf(" %c", &ch);
        printf("\n");

    } while (ch == 'Y' || ch == 'y');

    return 0;

}

    void checkBalance(double Bal)
    {
        printf("\n.......||CHECK BALANCE||............");
        printf("\n Current Balance of User is : %lf", Bal);
    }

    double moneyDeposit(double Bal)
    {
        printf("\n.......||DEPOSIT MONEY||............");

        double dep;
        printf("\n Enter the Value to Deposit(rs) : ");
        scanf("%lf", &dep);

        return Bal + dep;
    }

    double withdrawMoney(double Bal)
    {
        printf("\n.......||WITHDRAW MONEY||............");

        double withDr;
        printf("\n Enter the Value to Withdraw Money(rs) : ");
        scanf("%lf", &withDr);

        return Bal - withDr;
    }

    int changePin(int pin)
    {
        printf("\n.......||CHANGE PIN||............");

        printf("\n Enter New Pin : ");
        scanf("%d", &pin);

        return pin;
    }

    int checkPin(int pin)
    {
        int flag = 0;
        int checkPin;
        for (int i = 0; i < 3; i++)
        {
            printf("\n Enter your Pin to perform Transactions : ");
            scanf("%d", &checkPin);

            if (checkPin == pin)
            {
                i = 3;
                flag = 1;
                return flag;
            }
            else
            {
                printf("\n Invalid PIN ! \n");
            }
            
        }
        return flag;
      }
