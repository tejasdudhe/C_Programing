#include <stdio.h>

struct Employee
{
    int empId;
    char name[20];
    float salary;
    int depId;
};

struct Employee acceptStruc()
{
    struct Employee e;

    printf("\nEnter empId : ");
    scanf("%d", &e.empId);
    printf("\nEnter Name : ");
    scanf("%s", e.name);
    printf("\nEnter Salary : ");
    scanf("%f", &e.salary);
    printf("\nEnter Depatment ID : ");
    scanf("%d", &e.depId);
    return e;
}

void displayStruc(struct Employee e)
{
    printf("\nEmpID : %d", e.empId);
    printf("\nName  : %s", e.name);
    printf("\nSalary: %f", e.salary);
    printf("\nDptID : %d", e.depId);
}

typedef struct
{
    int eng;
    int math;
    int sci;
} marks;

struct Student
{
    int rollNo;
    char name[20];
    char Std[5];
    marks M;
};

void acceptStu(struct Student *S)
{
    static int n = 1;
    printf("\nEnter Roll NO of Student %d: ",n);
    scanf("%d", &S->rollNo);
    printf("\nEnter Name of Student %d : ",n);
    fflush(stdin);
    scanf("%s", S->name);
    printf("\nEnter Standard : ");
    fflush(stdin);
    scanf("%s", S->Std);

    printf("\n\n **********|| Enter MARKS ||********** \n");

    printf("\n English : ");
    scanf("%d", &S->M.eng);
    printf("\n MAth : ");
    scanf("%d", &S->M.math);
    printf("\n Science : ");
    scanf("%d", &S->M.sci);

    n++;
}

void printStu(struct Student *S)
{
    static int no = 1;
    printf("\n RollNo of  Student %d : %d ", no, S->rollNo);
    printf("\n Name of Student %d : %s ", no, S->name);
    printf("\n Standard of Student %d : %s ", no, S->Std);

    printf("\n\n ............|| MARKS of %s ||...........\n", S->name);

    printf("\n English Marks : %d ", S->M.eng);
    printf("\n Math Marks : %d ", S->M.math);
    printf("\n Science Marks %d ", S->M.sci);
    no++;
}

void acceptStuArr(struct Student arr[], int n)
{
    
    for (int i = 0; i < n; i++)
    {
        acceptStu(&arr[i]);
        printf("\n\n**********************************************************************\n");
    }
}
void printStuArr(struct Student arr[], int n)
{
    printf("\n ..........||  LIST OF STUDENT  ||..........\n");
    printf("\n\n**********************************************************************\n");
    for (int i = 0; i < n; i++)
    {
        printStu(&arr[i]);
        printf("\n\n**********************************************************************\n");
    }
}