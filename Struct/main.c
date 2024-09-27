#include <stdio.h>
#include "header.h"



void main()
{
    // struct Employee e1;

    // e1 = acceptStruc();
    // displayStruc(e1);
    int n;
    printf("Enter the Number of Student: ");
    scanf("%d",&n);

    struct Student stu[n];

    acceptStuArr(stu,n);
    printStuArr(stu,n);
    // acceptStu(&stu);
    // printStu(&stu);

}