#include <stdio.h>


int main() {
    int n;
    printf("\n Enter the number : ");
    scanf("%d", &n);

    int sum =  digitSum(n);

    printf("\n Sum = %d",sum);

    return 0;
}

int digitSum(int n) {
    if(n==0)
    {
        return 0;
    }
    else{
        return (n%10) + digitSum(n/10);
    }

    
}