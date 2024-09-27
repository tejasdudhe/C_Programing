#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

void addFirst(Node **Head)
{
    int value;
    printf("\n Enter the value to enter at Begining of LL : ");
    scanf("%d", &value);

    Node *newNode = (Node *)malloc(sizeof(Node));
    if (newNode == NULL)
    {
        printf("Memory allocation failed!");
        return;
    }

    newNode->data = value;
    newNode->next = *Head;

    *Head = newNode;

    printf("Node is inserted!\n");
}

void addAfter(Node **Head)
{
    int item;
    int value;
    Node *ptr, *loc = NULL, *newNode;

    if (*Head == NULL)
    {
        printf("\n Link List Is Empty !");
    }
    else
    {
        printf("\n Enter the itemm after which you want to Enter new element in LL : ");
        scanf("%d", &item);

        ptr = *Head;

        while (ptr != NULL)
        {
            if (ptr->data == item)
            {
                loc = ptr;
                break;
            }
            else
            {
                ptr = ptr->next;
            }
        }

        if (loc == NULL)
        {
            printf("\n item is not found......");
        }
        else
        {

            printf("\n Enter the value to enter in LL : ");
            scanf("%d", &value);

            newNode = (Node *)malloc(sizeof(Node));
            if (newNode == NULL)
            {
                printf("Memory allocation failed!");
                return;
            }

            newNode->data = value;
            newNode->next = loc->next;

            loc->next = newNode;

            printf("\n Node inserted after %d!\n", item);
        }
    }
}

void addEnd(Node **Head)
{

    Node *ptr;
    int value;

    ptr = *Head;
    Node *newNode = (Node *)malloc(sizeof(Node));
    if (newNode == NULL)
    {
        printf("Memory allocation failed!");
        return;
    }

    printf("\n Enter the value to insrt at the End in LL : ");
    scanf("%d", &value);

    newNode->data = value;
    newNode->next = NULL;

    if (*Head == NULL)
    {
        *Head = newNode;
        return;
    }

    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }

    ptr->next = newNode;
}

void deleteFirst(Node **Head)
{
    if (*Head == NULL)
    {
        printf("\n The LinkList Is Empty! ");
        return;
    }

    Node *temp = *Head;
    *Head = (*Head)->next;
    free(temp);
    printf("\n First node deleted!\n");
}

void addInBet(Node **Head)
{
    int value, index;
    printf("\n Enter the value to Insert in LL : ");
    scanf("%d", &value);

    printf("\n Enter the index to enter value : ");
    scanf("%d", &index);

    if (*Head == NULL || index == 0)
    {
        Node *newNode = (Node *)malloc(sizeof(Node));
        if (newNode == NULL)
        {
            printf("Memory allocation failed!");
            return;
        }

        newNode->data = value;
        newNode->next = *Head;
        *Head = newNode;

        printf("Node is inserted at the beginning!\n");
        return;
    }

    Node *ptr = *Head;
    Node *prev = NULL;

    Node *newNode = (Node *)malloc(sizeof(Node));
    if (newNode == NULL)
    {
        printf("Memory allocation failed!");
        return;
    }

    int count = 0;
    while (ptr != NULL && count < index)
    {
        prev = ptr;
        ptr = ptr->next;
        count++;
    }

    if (count != index)
    {
        printf("\n Index %d not found in the LinkedList!\n", index);
        free(newNode);
        return;
    }

    newNode->data = value;
    newNode->next = ptr;
    if (prev != NULL)
    {
        prev->next = newNode;
    }

    printf("Node is inserted at index %d!\n", index);
}


void deleteValue(Node **Head)
{

    int value;
    printf("\n Enter the value to Delete from LL : ");
    scanf("%d", &value);

    if (*Head == NULL)
    {
        printf("\n The LinkList Is Empty! ");
        return;
    }

    Node *ptr = *Head;
    Node *prev = NULL;

    if (ptr != NULL && ptr->data == value)
    {
        *Head = ptr->next;
        free(ptr);
        printf("\n Node with value %d deleted!\n", value);
        return;
    }

    while (ptr != NULL && ptr->data != value)
    {
        prev = ptr;
        ptr = ptr->next;
    }

    
    prev->next = ptr->next;
    free(ptr);
}

void printLL(Node **Head)
{
    Node *ptr;
    int value;

    ptr = *Head;
    while (ptr != NULL)
    {
        if (ptr->next == NULL)
        {
            printf(" %d -> NULL ", ptr->data);
        }
        else
        {
            printf(" %d -> ", ptr->data);
        }
        ptr = ptr->next;
    }
}

void main()
{
    Node *Head = NULL;

    addFirst(&Head);
    printLL(&Head);
    addAfter(&Head);
    printLL(&Head);
    addEnd(&Head);
    printLL(&Head);

    addInBet(&Head);

    // deleteFirst(&Head);
    // deleteValue(&Head);
    printLL(&Head);
}