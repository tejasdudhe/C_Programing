#include<stdio.h>

void acceptMatrix(int,int,int[]);
void displayMatrix(int,int,int[][]);
void addMatrix(int,int,int[][],int[][],int[][]);
void subMatrix(int,int,int[][],int[][],int[][]);


void main()
{
    int row,col;
    printf("\n Enter the no of row and col for Matrix : ");
    scanf("%d %d",&row,&col);