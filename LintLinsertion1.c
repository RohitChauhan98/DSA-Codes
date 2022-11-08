// Insertion at the begining

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head;
struct node *second;
struct node *third;

struct node * insertion(struct node *itr, int n)
{
    struct node *new = (struct node *)malloc(sizeof(struct node));
    new->data=n;
    new->next=head;
    return new;
}


void traverse(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
   
    

    head->data = 4;
    head->next = second;

    second->data = 7;
    second->next = third;

    third->data = 11;
    third->next = NULL;

    traverse(head);

    // Element to be stored at the begining of the link list
    int n;
    printf("\nEnter the element and index to be inserted: ");
    scanf("%d",&n);
    head=insertion(head, n);
    traverse(head);
}

