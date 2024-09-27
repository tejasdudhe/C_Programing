#include <stdio.h>

void acceptMatrix(int row, int col, int arr[row][col]);
void displayMatrix(int row, int col, int arr[row][col]);
void addMatrix(int row, int col, int arr1[row][col], int arr2[row][col], int result[row][col]);
void subMatrix(int row, int col, int arr1[row][col], int arr2[row][col], int result[row][col]);
void mulMatrix(int row, int col, int arr1[row][col], int arr2[row][col], int result[row][col]);

void main()
{
    int row, col;
    printf("\n Enter the no of row and col for Matrix : ");
    scanf("%d %d", &row, &col);

    int arr1[row][col];
    int arr2[row][col];
    int result[row][col];

    printf("\n Enter the Matrix 1 : ");
    acceptMatrix(row, col, arr1);

    printf("\n Enter the Matrix 2 : ");
    acceptMatrix(row, col, arr2);

    addMatrix(row, col, arr1, arr2, result);

    printf("\n addition of Two Matries : \n");
    displayMatrix(row, col, result);

    subMatrix(row, col, arr1, arr2, result);

    printf("\n substraction of Two Matries : \n");
    displayMatrix(row, col, result);

    mulMatrix(row, col, arr1, arr2, result);

    printf("\n Multiplication of Two Matries : \n");
    displayMatrix(row, col, result);
}

void acceptMatrix(int row, int col, int arr[row][col])
{
    for (int i = 0; i < row; i = i + 1)
    {
        for (int j = 0; j < col; j = j + 1)
        {
            scanf("%d", &arr[i][j]);
        }
    }
}

void displayMatrix(int row, int col, int arr[row][col])
{
    for (int i = 0; i < row; i = i + 1)
    {
        for (int j = 0; j < col; j = j + 1)
        {
            printf(" %d", arr[i][j]);
        }
        printf("\n");
    }
}

void addMatrix(int row, int col, int arr1[row][col], int arr2[row][col], int result[row][col])
{
    for (int i = 0; i < row; i = i + 1)
    {
        for (int j = 0; j < col; j = j + 1)
        {
            result[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
}

void subMatrix(int row, int col, int arr1[row][col], int arr2[row][col], int result[row][col])
{
    for (int i = 0; i < row; i = i + 1)
    {
        for (int j = 0; j < col; j = j + 1)
        {
            result[i][j] = arr1[i][j] - arr2[i][j];
        }
    }
}

void mulMatrix(int row, int col, int arr1[row][col], int arr2[row][col], int result[row][col])
{
    int i,j,k;
    for ( i = 0; i < row; i = i + 1)
    {
        for ( j = 0; j < col; j = j + 1)
        {
            result[i][j] =0;
            for(k=0;k<col;k++)
            {
                result[i][j]+=arr1[i][k]*arr2[k][j];
            }
            // result[i][j] = (arr1[i][j] * arr2[i][j]) + (arr1[i][i+1] * arr2[i+1][j]);
        }
    }
}
