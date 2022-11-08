// stack implementation using array

#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

int empty(struct stack *p)
{
    if (p->top == -1)
    {
        return 1;
    }
    return 0;
}

int main()
{
    struct stack *s;
    s->size = 50;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));

    // declaring element in the heap directly
    // s->arr[0]=5;
    // s->top++;

    int k = empty(s);
    if (k == 1)
    {
        printf("The stack is empty");
    }
    else
    {
        printf("The stack Contains something");
    }
}