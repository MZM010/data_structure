#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void add_first_singly(struct node **head, int data)
{
    struct node *newnode = NULL;

    newnode = (struct node *)malloc(sizeof(struct node));

    newnode->next = NULL;
    newnode->data = data;

    if (*head == NULL)
        *head = newnode;
    else
    {
        newnode->next = *head;
        *head = newnode;
    }
}

void add_last_node(struct node **head, int data)
{
    struct node *newnode = NULL;
    struct node *temp = NULL;

    newnode = (struct node*)malloc(sizeof(struct node));

    newnode->next = NULL;
    newnode->data = data;

    if (*head ==NULL)
        *head = newnode;
    else
    {
        temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
    }
}