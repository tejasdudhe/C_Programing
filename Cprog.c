// #include <stdio.h>
// #define NEWLINE '\n\n'
// #define PI 3.1412
// #define AREA_C(r) PI *r *r
// #define MAX(x, y, z1)

// int check(int);
// int main()
// {

//     // int arr[7] = {1, 2, 34, 4, 5, 6, 7};
//     // printf("%d \n", &arr);
//     // printf("%d\n", &arr[0]);
//     // printf("%d \n", &arr[1]);
//     // printf("%d \n", &arr[7]);
//     // int *ptr = &arr[6];
//     // *ptr = 17;
//     // printf("%d\n", arr[6]);
//     // printf("%d \n", &arr[7]);
//     // int arr[20] = {1,2,3};

//     // printf(" %d",&arr);
//     // printf(" %d",arr +1);
//     // printf(" %d",&arr +1);
//     //     int n = 60;
//     //    int res= check(n);
//     //     printf("%d",res);

//     int a[3] = {20, 30, 40};
//     int b[3];
//     b = a;
//     printf("%d", b[0]);
// }

// int check(int n)
// {
//     return (5, 10);
// }



#include <stdio.h>

int main() {
    
    // int a[] = {1,2,3,4,5,6};
    // int *ptr = a+2;

    // printf("%d",ptr[1]);


    
    // int i=0;
    // for(printf("1stn");i<2 && printf("2nd");++i && printf("3rdn"))
    // {
    //     printf("\n*n");
    // }
    static m;
    int x;
    int call(int);
    x=call(m);
    printf("%d",x);
  
    

    return 0;
}

int call(int address)
{
    address++;
    return address;
}