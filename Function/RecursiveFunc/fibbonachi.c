
#include <stdio.h>


int main() {
    int n;
    printf("Enter the number of Fibonacci terms to print: ");
    scanf("%d", &n);

    printf("Fibonacci sequence:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");

    return 0;
}

int fibonacci(int i) {
    if (i <= 1) {
        return i;  
    }
    return fibonacci(i - 1) + fibonacci(i - 2); 
}
