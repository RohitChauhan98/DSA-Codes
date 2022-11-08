// peek() stacktop() stackbottom()

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *top = NULL;

void linkedListTraversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

int isFull(struct node *ptr)
{
    struct node *p = (struct node *)malloc(sizeof(struct node));
    if (p == NULL)
    {
        return 1;
    }
    return 0;
}

int isEmpty(struct node *top)
{
    if (top == NULL)
    {
        return 1;
    }
    return 0;
}

struct node *push(struct node *top, int num)
{
    if (isFull(top))
    {
        printf("Stack Overflow\n");
    }
    else
    {
        struct node *n = (struct node *)malloc(sizeof(struct node));
        n->data = num;
        n->next = top;
        top = n;
        return top;
    }
}

int pop(struct node *tp)
{
    if (isEmpty(top))
    {
        printf("Stack Underflow\n");
    }
    else
    {
        struct node *n=tp;
        top = n->next;
        int k = n->data;
        free(n);
        return k;

        // struct node* n = tp;
        // top = (tp)->next;
        // int x = n->data;
        // free(n);
        // return x; 
    }
}

void peek(struct node *ptr,int pos)
{
    for(int i=1;(i<pos && ptr!=NULL);i++)
    {
        ptr=ptr->next;
    }
    if(ptr!=NULL)
    {
        printf("The value at position %d is: %d\n",pos, ptr->data);
    }
    
}

int main()
{
    top=push(top, 7);
    top=push(top, 8);
    top=push(top, 9);
    top=push(top, 10);
    // int element = pop(top);
    // printf("Element popped is: %d\n", element);
    // linkedListTraversal(top);
for(int i=1;i<=4;i++)
{
      peek(top,i);

}
}