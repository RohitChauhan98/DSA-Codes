// inserting an element at a given index in link list

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
struct node *fourth;

void traverse(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}

void insertion(struct node *ptr, int index, int data)
{

    int i = 0;
    struct node *new = (struct node *)malloc(sizeof(struct node));
    while (ptr != NULL)
    {
        if (i == (index - 1))
        {
            new->data = data;
            new->next = ptr->next;
            ptr->next = new;
            return 0;
        }
        ptr=ptr->next;
        i++;
    }
    ptr->next = new;
}

int main()
{
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    head->data = 5;
    head->next = second;

    second->data = 6;
    second->next = third;

    third->data = 7;
    third->next = fourth;

    fourth->data = 9;
    fourth->next = NULL;
    printf("Printing the link list: ");
    traverse(head);

    int n, index;
    printf("\nEnter the element and the index: ");
    scanf("%d", &n);
    scanf("%d", &index);

    insertion(head, index, n);
     traverse(head);
}