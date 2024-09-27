#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 50

typedef struct
{
    int bkID;
    char bookName[MAX];
    char author[MAX];
    char genre[MAX];
    float cost;

} Book;

int menu();
void readData(FILE *);
Book appendData(FILE *);
void deleteBooks();
void updateBooks();

void main()
{
    FILE *Fptr;
    char check = 'y';
    Book book[MAX];
     int bookCount = 0;

     do
    {
        int no = menu();

        switch (no)
        {
        case 1:
            readData(Fptr);
            break;

        case 2:
            book[bookCount] = appendData(Fptr);
            if (book[bookCount].bkID != 0)
            {
                printf("\n Data is Successfully Entered....");
                bookCount++;
            }
            break;

        case 3:
            deleteBooks();
            break;

        case 4:
            updateBooks();
            break;

        default:
            printf("\n..............Invalid Option..................\n");
            break;
        }

        printf("Do you want to Continue Your Search Enter [Y/N] : ");
        scanf(" %c", &check);  

    } while (check != 'N' && check != 'n');


    // appendData(Fptr);
    // readData(Fptr);
}

int menu()
{
    int no;
    printf("\n*******************************************************************************\n");
    printf("..............................|| WELCOME TO LIBRARY ||...........................\n");
    printf("*********************************************************************************\n");
    printf("\n                    Enter 1 to Enter Books ! ");
    printf("\n                    Enter 2 to View Books !");
    printf("\n                    Enter 3 to Delete Books !");
    printf("\n                    Enter 4 to Update Books !");
    printf("\n******************************************************************************\n");

    printf("\n Enter your choice : ");
    scanf("%d", no);

    return no;
}

// FUNCTIONS

void readData(FILE *Fptr)
{
    char buffer[MAX*10];

    Fptr = fopen("LibraryData.txt", "r");
    if (Fptr == NULL)
    {
        printf("data is not Available");
    }

     while (fgets(buffer, sizeof(buffer), Fptr) != NULL) {
        printf("%s", buffer);
    }

    
    //  while (fread(&b, sizeof(Book), 1, Fptr)) {
    //     printf("\n********************************************************************************************************************\n");
    //     printf(" Book Id : %d \n Book Name : %s \n Author Name : %s \n Genre : %s \n Cost : %.2f \n", b.bkID, b.bookName, b.author, b.genre, b.cost);
    // }

    fclose(Fptr);
}

Book appendData(FILE *Fptr)
{

    Book b;

    Fptr = fopen("LibraryData.txt", "a");
    if (Fptr == NULL)
    {
        printf("Data is not available\n");
        exit(1);
    }

    printf("\n Enter the Book ID : ");
    scanf("%d", &b.bkID);

    printf("\n Enter the Book Name : ");
    scanf("%s", b.bookName);

    printf("\n Enter the Author Name : ");
    scanf("%s", b.author);

    printf("\n Enter the Book Genre : ");
    scanf("%s", b.genre);

    printf("\n Enter the Book Cost : ");
    scanf("%f", &b.cost);

    fprintf(Fptr, "\n********************************************************************************************************************\n");

    fprintf(Fptr, "\n Book Id : %d \n Book Name :%[^\n]s \n Author Name : %[^\n]s \n Genre : %[^\n]s\n Cost : %[^\n]s \n", b.bkID, b.bookName, b.author, b.genre, b.cost);
    

    
    fclose(Fptr);

    return b;
}


void deleteBooks()
{

}

void updateBooks()
{

}