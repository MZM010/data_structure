#include <stdio.h>
#include <stdlib.h>


struct node {
    int data;
    struct node *prev;
    struct node *next;
};

/**
 * add_doubly_pos - add a node in a certain position
 * @head: the head of the list
 * @data: the data that you want to input
 * @pos: the position you want to insert the element
 */
void add_doubly_pos(struct node **head, int data, int pos)
{
    struct node *newnode = NULL;
    struct node *temp1 = NULL, *temp2 = NULL;
    int count = 1;

    newnode->data = data;
    newnode->prev = NULL;
    newnode->next = NULL;
    /*if the position is 0 or -1, if position is greater than 1 but there's no head*/
    if (pos < 1 || (pos > 1 && !(*head)))
    {
        printf("wrong position");
    }

    else
    {

        if (pos == 1)
        {
            /*next address of node = head*/
            newnode->next = *head;
            /*prev address of the head = newnode*/
            (*head)->prev = newnode;
            /*insert the node in the beginning of the list*/
            head = newnode;
        }
        temp1 = (*head);

        while(count < pos && temp1->next == NULL)
        {
            temp2 = temp1;
            temp1 = temp1->next;
            count++;
        }
        if (count == pos)
        {
            newnode->next = temp1;
            newnode->prev = temp2;
            temp2->next = newnode;
            temp1->prev = newnode;
        }
        else if (count = pos - 1)
        {
            temp1->next = newnode;
            newnode->prev = temp1;
        }
    }
}