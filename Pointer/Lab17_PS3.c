#include <stdio.h>
void getDate(int*,int*,int*,char*,char*);

void main()
{
    int dd,mm,yy;
    char s1,s2;
    getDate(&dd,&mm,&yy,&s1,&s2);

    if((s1 != '/' && s2 != '/') || (dd <= 0 || dd >31) || (mm <= 0 || mm >13) )
    {
        printf("\n Invalid Format....");
    }
    else
    printf("%d%c%d%c%d",dd,s1,mm,s2,yy);

}


void getDate(int *dd,int *mm,int *yy,char *s1,char *s2)
{
    printf("\n Enter the Date in the format DD/MM/YY : ");
    scanf("%d%c%d%c%d",dd,s1,mm,s2,yy);


    
}

