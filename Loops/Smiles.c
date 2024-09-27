
#include <stdio.h>
#include <conio.h>

void main()
{
    while(1)
    {
        if(kbhit())
        {
            break;
        }

        printf("%c",1);
    }
}