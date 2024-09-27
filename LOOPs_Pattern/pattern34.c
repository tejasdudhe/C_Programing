#include <stdio.h>

void main()
{
    int row = 6, col = 11;
    int r, c;
    int no = 1;

    for (r = 1; r <= row; r++)
    {
        // int no=1;
        for (c = 1; c <= col; c++)
        {
            if (c <= row - r)
            {
                printf(" -");
            }
            else if (c >= row + r)
            {
                break;
            }
            else if (r % 2 == 0 && c % 2 == 0)
            {

                printf(" -");
            }
            else if (r % 2 != 0 && c % 2 != 0)
            {

                printf(" -");
            }
            else
            {
               if(col > 0)
                {
                    no = no * (row - col + 1) / col;
                }
                printf("%d ", no);
            }
        }
        printf("\n");
    }
}
