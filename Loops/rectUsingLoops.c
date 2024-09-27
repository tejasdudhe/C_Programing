#include <stdio.h>

void main()
{
    int len, bth;
    printf("Enter the length & breadth Series : ");
    scanf("%d %d", &len, &bth);

    int TL = 218, TR = 191, BL = 192, BR = 217;
    int HL = 196, VL = 179;

    for (int row = 1; row <= len; row++)
    {
        for (int col = 1; col <= bth; col++)
        {
            if (row == 1 && col == 1)
            {
                printf("%c", TL);
            }
            else if (row == 1 && col == bth)
            {
                printf("%c", TR);
            }
            else if (row == len && col == 1)
            {
                printf("%c", BL);
            }
            else if (row == len && col == bth)
            {
                printf("%c", BR);
            }
            else if (row == 1 || row == len)
            {
                printf("%c", HL);
            }
            else if (col == 1 || col == bth)
            {
                printf("%c", VL);
            }
            else
                printf(" ");
        }
        printf("\n");

        // for (int row = 1; row <= bth; row++)
        // {
        //     for (int col = 1; col <= len; col++)
        //     {
        //         if (row == 1 && col == 1)
        //         {
        //             printf("%c", TL);
        //         }
        //         else if (row == 1 && col == bth)
        //         {
        //             printf("%c", TR);
        //         }
        //         else if (row == len && col == 1)
        //         {
        //             printf("%c", BL);
        //         }
        //         else if (row == len && col == bth)
        //         {
        //             printf("%c", BR);
        //         }
        //         else if (row == 1 || row == len)
        //         {
        //             printf("%c", HL);
        //         }
        //         else if (col == 1 || col == bth)
        //         {
        //             printf("%c", VL);
        //         }
        //         else
        //             printf(" ");
        //     }
        //     printf("\n");
        }
    }
