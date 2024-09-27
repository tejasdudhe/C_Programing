#include <stdio.h>

struct Employee acceptStruc();
void displayStruc(struct Employee);
struct Employee
{
    int empId;
    char name[20];
    float salary;
    int depId;
};

void main()
{
    struct Employee e1;

    e1 = acceptStruc();
        displayStruc(e1);
}

struct Employee acceptStruc(){
    struct Employee e;

    printf("\nEnter empId : ");
    scanf("%d",&e.empId);
    printf("\nEnter Name : ");
    scanf("%s",e.name);
    printf("\nEnter Salary : ");
    scanf("%f",&e.salary);
    printf("\nEnter Depatment ID : ");
    scanf("%d",&e.depId);
    return e;
}


void displayStruc(struct Employee e){
    printf("\nEmpID : %d",e.empId);
    printf("\nName  : %s",e.name);
    printf("\nSalary: %f",e.salary);
    printf("\nDptID : %d",e.depId);
}