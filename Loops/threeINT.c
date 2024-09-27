#include<stdio.h>
int main()
{
    int num, sum=0, ssum=0, csum=0, rev=0;
    printf("Enter 3 digit integer value : ");
    scanf("%d", &num);
    int temp = num;

    printf("\nSeperate digits are: ");
    for(int i=0; i<3; i=i+1){
        int no = temp % 10;
        temp = temp / 10;
        printf("%d ", no);
    }

    printf("\nSquare of digits are: ");
    temp = num;
    for(int i=0; i<3; i=i+1){
        int no = temp % 10;
        temp = temp / 10;
        printf("%d ", no*no);
    }

    printf("\nCube of digits are: ");
    temp = num;
    for(int i=0; i<3; i=i+1){
        int no = temp % 10;
        temp = temp / 10;
        printf("%d ", no*no*no);
    }

    printf("\nSum of digits are: ");
    temp = num;
    for(int i=0; i<3; i=i+1){
        int no = temp % 10;
        temp = temp / 10;
        sum = sum + no;
        ssum = ssum + no*no;
        csum = csum + no*no*no;
    }
    printf("%d ", sum);

    printf("\nSum of Square of digits are: ");
    printf("%d ", ssum);

    printf("\nSum of Cube of digits are: ");
    printf("%d ", csum);

    printf("\nReverse of digits are: ");
    temp = num;
    for(int i=0; i<3; i=i+1){
        int no = temp % 10;
        temp = temp / 10;
        rev = rev * 10 + no;
    }
    printf("%d ",rev);
    if(temp == num){
        printf("\nNumber is Palindrome");
    }
    else{
        printf("\nNumber is not Palindrome");
    }

    temp = num;
    csum = 0;
    for(int i=0; i<3; i=i+1){
        int no = temp % 10;
        temp = temp / 10;
        csum = csum + no*no*no;
    }
    if(num == csum){
        printf("\n%d is a amstrong number", num);
    }
    else{
      printf("\n%d is not a amstrong number", num);  
    }
}