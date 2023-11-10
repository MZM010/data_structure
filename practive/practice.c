#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node* next;
};
/*
// Function to insert a new node at the beginning of a linked list
void insertAtBeginning(struct Node** head_ref, int new_data) {
    // Allocate memory for new node
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

    // Assign the data to the new node
    new_node->data = new_data;

    // Make the new node point to the current head
    new_node->next = (*head_ref);

    // Move the head to point to the new node
    (*head_ref) = new_node;
}

// Function to print the linked list
void printList(struct Node* node) {
    while (node != NULL) {
        printf("%d -> ", node->data);
        node = node->next;
    }
    printf("NULL\n");
}
*/

int main() {
    // Initialize an empty linked list
    struct Node* head = NULL;
    int a = 5;

    // Allocate memory for new node
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    //address of newnode  == null
    new_node->next = NULL;
    //data of newnode == element that you are trying to allocate 
    new_node->data = a + 1;
    //if head == null , head == newnode
    if (head == NULL)
        head = new_node;
    // else add(newnode) == head , head == newnode
    else
    {
        new_node->next = head;
        head = new_node;
    }


    while (new_node != NULL)
    {
        printf("%d ->\n", new_node->data);
        new_node = new_node->next;
    }

    return 0;
}

void createNodes(struct Node **head_reference, int data)
{
    struct Node *the_new_node = (struct Node *)malloc(sizeof(struct Node));
    
    the_new_node->data = data;

    the_new_node->next = NULL;

    (*head_reference) = the_new_node;
}