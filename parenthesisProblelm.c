// peek() stacktop() stackbottom()

#include <stdio.h>
#include <stdlib.h>
#include<string.h>

struct node
{
    char data;
    struct node *next;
};

struct node *top = NULL;

void linkedListTraversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %c\n", ptr->data);
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

struct node *push(struct node *top, char num)
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
        return 0;
    }
    else
    {
        
        struct node* n = tp;
        top = (tp)->next;
        char x = n->data;
        free(n);
    }
}

int main()
{
    int W=1;
    char arr[20]="(5+7)*(5*8)(";
    
    for(int i=0;i<(strlen(arr));i++)
    {
        if(arr[i]=='(')
        {
           top= push(top, '(' );
           
        }
        if(arr[i]== ')')
        {
           W=pop(top); 
        }
    }

    if(isEmpty(top)&&W)
        printf("Balanced Expression");
    if(!isEmpty(top)||W==0)
        printf("Unbalanced Expression");
    
}