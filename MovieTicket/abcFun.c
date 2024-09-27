#include <stdio.h>
#define MAX 50

typedef struct ABC_theater
{
    char movieName[MAX];
    float duration;
    char category[5];
    float cost;
} Movie;

int calculateTicketCost(Movie *ptr, char circle[])
{
    if ((strcmp(ptr->category, "2d") != 0 && strcmp(ptr->category, "3d") != 0) ||
        (strcmp(circle, "gold") != 0 && strcmp(circle, "silver") != 0))
    {
        return -3;
    }

    if ((strcmp(ptr->category, "2d") != 0 && strcmp(ptr->category, "3d") != 0))
    {
        return -1;
    }

    if (strcmp(circle, "gold") != 0 && strcmp(circle, "silver") != 0)
    {
        return -2;
    }

    if (strcmp(circle, "gold") == 0 && strcmp(ptr->category, "2d") == 0)
    {
        ptr->cost = 300;
    }

    if (strcmp(circle, "gold") == 0 && strcmp(ptr->category, "3d") == 0)
    {
        ptr->cost = 500;
    }

    if (strcmp(circle, "silver") == 0 && strcmp(ptr->category, "3d") == 0)
    {
        ptr->cost = 450;
    }

    if (strcmp(circle, "silver") == 0 && strcmp(ptr->category, "2d") == 0)
    {
        ptr->cost = 250;
    }

    return 0;
}

Movie getMovieDetails()
{
    Movie M;
    printf("\n................|| ENTER MOVIE DETAILS ||................");
    printf("\n Enter the Movie Name You Want to Watch : ");
    scanf("%s", M.movieName);
    fflush(stdin);

    printf("\n Enter the Duration of Movie : ");
    scanf("%f", &M.duration);

    printf("\n Enter the Category of Movie : ");
    scanf("%s", &M.category);
    fflush(stdin);

    return M;
}
void getCircleDetails(char *circle)
{

    printf("\n Enter the Circle in which you want to see Movie : ");
    gets(circle);
}
