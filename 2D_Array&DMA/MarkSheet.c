#include <stdio.h>
#include <stdlib.h>

void acceptMarks(char **ptr, int **marks, int noStd)
{
    int noSub;
    printf("Enter The Number of Subject :");
    scanf("%d", &noSub);

    marks = (int **)calloc(noStd, sizeof(int *));
    if (marks == NULL)
    {
        printf("\n Memory Allocation failed...........");
        return;
    }

    for (int j = 0; j < noStd; j = j + 1)
    {
        marks[j] = (int *)calloc(noSub, sizeof(int));
        if (marks[j] == NULL)
        {
            printf("\n Memory Allocation failed for %d...........", j);
            return;
        }
    }

    for (int i = 0; i < noStd; i++)
    {
        printf("\n Enter Marks of Student %s ..... ", *(ptr + i));
        // printf("\n Enter Marks of Student %s ..... ", ptr[i]);
        for (int j = 0; j < noSub; j++)
        {
            printf("\n Enter Marks of Subject %d : ", j + 1);
            // scanf("%d", &marks[i][j]);
            scanf("%d", *(marks+i)+j);
        }
    }

    printf("\n...................|| MARKSHEET ||.........................\n\n");

    printf("\tSTD Names");
    for( int h =0;h<noSub;h++)
    {
        printf("\tSubject %d",h+1);
    }
    printf("\n\n");



    for (int i = 0; i < noStd; i++)
    {
    //    printf("\nResult for %s:", ptr[i]);
    printf("\t%s", ptr[i]);
        for (int j = 0; j < noSub; j++)
        {
            // printf("\n Subject %d : %d ", j + 1, marks[i][j]);
            printf("\t\t %d", *(*(marks+i)+j));
        }
        printf("\n");
    }



    printf("..........................|| END ||...........................\n\n");


     for (int i = 0; i < noStd; i++)
    {
        free(marks[i]);
    }
    free(marks);
}
void acceptStudent(char **ptr, int noStd)
{

    ptr = (char **)calloc(noStd, sizeof(char *));
    if (ptr == NULL)
    {
        printf("\n Memory Allocation failed.....");
        return;
    }

    for (int i = 0; i < noStd; i = i + 1)
    {
        ptr[i] = (char *)calloc(20, sizeof(char));
        if (ptr == NULL)
        {
            printf("\n Memory Allocation failed for %d...........", i);
            return;
        }
    }
    printf("\n Enter the student Names : ");

    for (int i = 0; i < noStd; i = i + 1)
    {
        printf("\n Student Name %d : ", i + 1);
        scanf(" %s", ptr[i]);
    }

    int **marks;
    acceptMarks(ptr, marks, noStd);

    // for(int i =0;i<noStd;i=i+1)
    // {
    //     printf(" %s ",*(ptr+i));
    // }


}

void main()
{
    int noStd;
    char **ptr;

    printf("Enter The Number of Student in Class:");
    scanf("%d", &noStd);

    acceptStudent(ptr, noStd);

    // int **marks;
    // acceptMarks(ptr, marks, noStd);        

     for (int i = 0; i < noStd; i++)
    {
        free(ptr[i]);
    }
    free(ptr);

    // printf("\n marks = %d",marks);
    // printf("\n marks[0] = %d",marks[0]);
    // printf("\n **marks = %d",**marks);


}
