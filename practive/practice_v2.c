#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node* next;
};

void createNodes(struct Node **head_reference, int data);

int main() {
    // Initialize an empty linked list
    int i = 1;
    struct Node *head = NULL;
    createNodes(&head, 12);
    createNodes(&head, 44);
    createNodes(&head, 45);

    while (head)
    {
        printf("value of %d = %d -> ",i, head->data);
        head = head->next;
        i++;
    }
    printf("NULL\n");
    return 0;
}

void createNodes(struct Node **head_reference, int data)
{
    /*allocate the new node to the memory*/
    struct Node *the_new_node = (struct Node *)malloc(sizeof(struct Node));
    struct Node *last = *head_reference;

    /*add the data to the node*/
    the_new_node->data = data;
    /*add the address of the new node to null*/
    the_new_node->next = NULL;

    if (*head_reference == NULL)
    {
        *head_reference = the_new_node;
        return;
    }

    while (last->next != NULL) {
        last = last->next;
    }

    last->next = the_new_node;
}