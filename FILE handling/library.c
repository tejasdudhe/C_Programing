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

void menu();
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
        menu();
        int no;
        printf("\n Enter your choice : ");
        scanf("%d", &no);

        switch (no)
        {
        case 1:
            book[bookCount] = appendData(Fptr);
            if (book[bookCount].bkID != 0)
            {
                printf("\n Data is Successfully Entered....");
                bookCount++;
            }
            break;

        case 2:
            readData(Fptr);
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

        printf("\n Do you want to Continue Your Search Enter [Y/N] : ");
        scanf(" %c", &check);

    } while (check != 'N' && check != 'n');

    // appendData(Fptr);
    // readData(Fptr);
}

void menu()
{

    printf("\n*******************************************************************************\n");
    printf("..............................|| WELCOME TO LIBRARY ||...........................\n");
    printf("*********************************************************************************\n");
    printf("\n                    Enter 1 to Enter Books ! ");
    printf("\n                    Enter 2 to View Books !");
    printf("\n                    Enter 3 to Delete Books !");
    printf("\n                    Enter 4 to Update Books !");
    printf("\n******************************************************************************\n");
}

// FUNCTIONS

void readData(FILE *Fptr)
{

    Book b;
    char buffer[MAX * 10];

    Fptr = fopen("LibraryData.txt", "r");
    if (Fptr == NULL)
    {
        printf("Data is not available.\n");
        return;
    }

    while (fgets(buffer, sizeof(buffer), Fptr) != NULL)
    {
        printf("%s", buffer);
    }

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
    fflush(stdin);
    printf("\n Enter the Book Name : ");
    scanf("%[^\n]s", b.bookName);

    fflush(stdin);
    printf("\n Enter the Author Name : ");
    scanf("%[^\n]s", b.author);

    fflush(stdin);
    printf("\n Enter the Book Genre : ");
    scanf("%[^\n]s", b.genre);

    printf("\n Enter the Book Cost : ");
    scanf("%f", &b.cost);

    // fprintf(Fptr, "\n********************************************************************************************************************\n");

    fprintf(Fptr, "\n\n Book Id : %d \n Book Name :%s \n Author Name : %s \n Genre : %s\n Cost : %.2f \n", b.bkID, b.bookName, b.author, b.genre, b.cost);

    fclose(Fptr);

    return b;
}



void deleteBooks() {

    FILE *file, *tempFile;
    char buffer[MAX * 10];
    int idToDelete;
    int found = 0;


    file = fopen("LibraryData.txt", "r");
    if (file == NULL) {
        printf("Unable to open file for reading.\n");
        return;
    }

    tempFile = fopen("TempLibraryData.txt", "w");
    if (tempFile == NULL) {
        printf("Unable to open temp file for writing.\n");
        fclose(file);
        return;
    }

    printf("Enter the Book ID to delete: ");
    scanf("%d", &idToDelete);


    int skip = 0;


    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        int currentID = 0;


        if (sscanf(buffer, " Book Id : %d", &currentID) == 1) {
   
            if (currentID == idToDelete) {
                found = 1;
                skip = 1;
                continue; 
            } else {
                skip = 0; 
            }
        }


        if (!skip) {
            fputs(buffer, tempFile);
        }
    }

    if (found) {
        printf("Book with ID %d deleted successfully.\n", idToDelete);
    } else {
        printf("Book with ID %d not found.\n", idToDelete);
    }

    fclose(file);
    fclose(tempFile);


    remove("LibraryData.txt");
    rename("TempLibraryData.txt", "LibraryData.txt");
}


void updateBooks()
{
}