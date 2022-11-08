#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

int push(struct stack *ptr, int n)
{
    if (ptr->size == ptr->top)
    {
        printf("Stack Overflow!! cannot push %d in the stack...", n);
        return 0;
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = n;
    }
}

void pop(struct stack *ptr)
{
    if (ptr->top <0)
    {
        printf("Stack Underflow!! Nothing to pop from the stack...");
    }
    else
    {
        ptr->top = ptr->top - 1;
    }
}

void show(struct stack *ptr)
{
    int k=ptr->top;
    while (ptr->top > -1)
    {
        printf("%d ", ptr->arr[ptr->top]);
        ptr->top--;
    }
    ptr->top=k;

}

int main()
{
    struct stack *p = (struct stack *)malloc(sizeof(struct stack));
    p->size = 10;
    p->top = -1;
    p->arr = (int *)malloc(p->size * sizeof(int));

    push(p, 5);
    push(p, 6);
    push(p, 8);
    push(p, 9);
    push(p, 2);
    show(p);
    printf("\nAfter poping...\n");
    pop(p);
    show(p);
}