#include<stdio.h>

int main()
{
    
    int empId,deptNo;
    char Dcode;

    printf("Enter Employee Id :");
    scanf("%d",&empId);

    printf("Enter Department No:");
    scanf("%d",&deptNo);

    printf("Enter the Designation Code :");
    scanf(" %c",&Dcode);

    printf("\n\n");

    printf("Employee with EmpId = %d",empId);

    switch (deptNo)
    {
    case 10: 

            printf(" works in Purchase Department");

        break;

    case 20:
            printf(" works in Sales Department");

        break;

    case 30:

            printf(" works in Production Department");

        break;

    case 40:
            printf(" works in Marketing Department");

        break;

    case 50:
                printf(" works in Accounts Department");

        break;
    
    default:
        break;
    }


    switch (Dcode)
    {
    case 'M': 

            printf(" as a Manager.");

        break;

    case 'A':
            printf(" as a Analyst.");

        break;

    case 'W':

            printf(" as a Worker.");

        break;

    case 'S':
            printf(" as a Sales-Person.");

        break;

    case 'C':
                printf(" as a Clerk.");

        break;
    
    default:
        break;
    }

    return 0;


}