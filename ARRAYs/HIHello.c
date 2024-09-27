#include<stdio.h>
void print(char[], int);
void shiftRight(char[], int*, int);
#define MAX 150
int main(){
    char arr[MAX];
    int len = 50;
    arr[0] = 'H';
    arr[1] = 'i';
    for(int i=2; i<len-5; i++){
        arr[i]=32;
    }
    arr[len-5]='H';
    arr[len-4]='e';
    arr[len-3]='l';
    arr[len-2]='l';
    arr[len-1]='o';

   int i;
    for(i=0; i<len; i++){
        getchar();
        print(arr,len);
        shift(arr,&i,len);
    }
}

void print(char arr[], int len){
    for(int i=0; i<len; i++){
        printf("%c",arr[i]);
    }
}

void shiftRight(char arr[], int *idx, int len){
    arr[*idx+2] = arr[*idx];
    arr[*idx+3]= arr[*idx+1];
    arr[*idx] = 32;
    arr[*idx+1] = 32;

    *idx=*idx+1;
    
}

void shiftLeft(char arr[], int *idx, int len){
    
    arr[len-5]= ;
    arr[len-4]='e';
    arr[len-3]='l';
    arr[len-2]='l';
    arr[len-1]='o';
    
}