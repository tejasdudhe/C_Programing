#include <stdio.h>
#include <string.h>
#include "header.h"

char* CircleDetails()
{
    static char circle[MAX];
    printf("\n Enter the Circle in which you want to see Movie : ");
     gets(circle);

     return circle;
}


void main()
{
    printf("\n................|| Welcome to ABC Theatres ||................\n");
    Movie M;
    //  char circle[MAX];

    M = getMovieDetails();
    // getCircleDetails(circle);
     char* circle = CircleDetails();

    int result = calculateTicketCost(&M, circle);

    if (result == 0)
    {
        printf("\n..................|| Bill ||.....................\n");

        printf("\n price of your ticket is %.2f RS", M.cost);
    }
    else if(result == -1)
    {
         printf("\n Sorry there is no %s type of category in the theatre",M.category);
    }else if(result == -2)
    {
         printf("\n Sorry there is no %s type of Circle in the theatre",circle);
    }else if(result == -3)
    {
         printf("\n Sorry both circle and Category are invalid....");
    }
}

























// int check = strcmp(circle, "gold");
    // if (check == 0)
    // {
    //     int c = strcmp(ptr->category, "2d");
    //     if (c == 0)
    //     {
    //         ptr->cost = 300;
    //     }

    //     c = strcmp(ptr->category, "3d");
    //     if (c == 0)
    //     {
    //         ptr->cost = 500;
    //     }

    //     if(c!=0)
    //     return 1;
    // }

    // check = strcmp(circle, "silver");
    // if (check == 0)
    // {
    //     int c = strcmp(ptr->category, "2d");
    //     if (c == 0)
    //     {
    //         ptr->cost = 250;
    //     }

    //     c = strcmp(ptr->category, "3d");
    //     if (c == 0)
    //     {
    //         ptr->cost = 450;
    //     }

    //     if(c!=0)
    //     return 1;
    // }

    // if(check!=0)
    // return 2;
