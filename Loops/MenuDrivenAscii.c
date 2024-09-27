#include<stdio.h>

int main()
{
    char ch;
    int no;

    printf("\n..........MENU.........\n");
    printf("\n Enter 1 to check Ascii Value.");
    printf("\n Enter 2 to check Type of Character.");
    printf("\n Enter 3 to check Case of Character.");
    printf("\n Enter 4 to Change the Case of Character.");
    printf("\n Enter 5 to check charcter is Vowel or Not.");

    printf("\n");


    printf("\n Enter the Option: ");
    scanf("%d",&no);

    printf("\n Enter the Character: ");
    scanf(" %c",&ch);

    printf("\n");

    switch (no)
    {
    case 1 : printf("The ASCII Value of Given Character : %d",ch);

        break;

    case 2 :    
            if((ch>=65 && ch<=90) || (ch >=97 && ch<=122))
            {
                printf("\n The Given Character %c is Alphbethic",ch);
            }
            else if(ch >= '0' && ch<='9') 
            {
                printf("\n The Given Character %c is Numeric",ch);
            }
            else{
                printf("\n The Given Character %c is Symbol",ch);
            }
        break;

    case 3 :
             if(ch >='A' && ch<='Z')
            {
                printf("\n The Given Character %c is in UpperCase.",ch);
            }
            else if(ch >='a' && ch <='z'){
                 printf("\n The Given Character %c is in LowerCase.",ch);
            }
            else{
                printf("\n The Given Character %c is Not an Alphabet.",ch);
            }
        break;
    
    case 4 :
             if(ch >='A' && ch<='Z')
            {
               char change = ch+32;
                printf("\n UpperCase %c is Change into LowerCase %c.",ch,change);
            }
            else if(ch >='a' && ch <='z'){

               char change = ch-32;
                 printf("\n LowerCase %c is Change into UpperCase %c.",ch,change);
            }
            else{
                printf("\n The Given Character %c is Not an Alphabet.",ch);
            }

        break;

    case 5 :

            if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
            {
                printf("The Given Character %c is Vowel",ch);
            }
            else{
                printf("The Given Character %c is not Vowel",ch);
            }

        break;
    
    default:  printf("!! Invalid Input !!");
        break;
    }


   

    return 0;


}