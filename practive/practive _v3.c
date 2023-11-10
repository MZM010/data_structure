#include <stdio.h>
#include <stdlib.h>


/*declaration of doubly node*/

struct node {
    int data;
    struct node *prev;
    struct node *next;
};

void insert_first(struct node **head, int data)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));

    newnode->next = NULL;
    newnode->prev = NULL;

    newnode->data = data;

    if (*head == NULL)
        *head = newnode;
    
    else
    {
        newnode->next = *head;
        newnode->prev= newnode;
        (*head) = newnode;
    }

}

void insert_last(struct node **head, int data)
{
    struct node *newnode = NULL;
    struct node *temp = NULL;

    newnode = (struct node *)malloc(sizeof(struct node));

    newnode->next = NULL;
    newnode->prev = NULL;
    newnode->data = data;

    if(*head == NULL)
        (*head) = newnode;
    
    else
    {
        temp = *head;
        while(temp->next)
        {
            temp = temp->next;
        }
        newnode->prev = temp;
        temp->next = newnode;
    }
}

int main()
{
    int how_many_last, how_many_first;

    int value_first[how_many_first];
    int value_last[how_many_last];

    struct node *head = NULL;

    printf("----------------------------------\n");
    printf("How many last element you want: ", &how_many_last);
    printf("\n");
    printf("----------------------------------\n");
    printf("How many first element you want: ", &how_many_first);
    printf("\n");
    check_last(&head, value_last, how_many_last);
    check_first(&head, value_first, how_many_first);
    while (head != NULL)
    {
        printf("%d -> ", head->data);
        head = head->next;
    }
    return (0);
}

void check_last(struct node **head, int value_last[], int how_many_last)
{
    int i, j;
    printf("--------------------------------\n");
    for (i = 0; i < how_many_last; i++)
    {
        printf("Enter the element %d of a the last element: ", i);
        scanf("%d", &value_last[i]);
    }

    for (j = 0; j < how_many_last; j++)
    {
        insert_last(&head, value_last[j]);
    }
    printf("--------------------------------\n");
}

void check_first(struct node **head, int value_first[], int how_many_first)
{
    int j, i;
    printf("--------------------------------\n");
    for (i = 0; i < how_many_first; i++)
    {
        printf("Enter the element %d of a the last element: ", i);
        scanf("%d", &value_first[i]);
    }

    for (j = 0; j < how_many_first; j++)
    {
        insert_first(&head, value_first[j]);
    }
    printf("--------------------------------\n");
}
