#include<stdio.h>
#include<stdlib.h>

struct Myarray 
{
    int total_size;
    int used_size;
    int *ptr;
};

void CreateArray(struct Myarray *a, int tsize,int usize)
{
    // (*a).total_size;
    // (*a).used_size;
    // (*a).ptr = (int *)malloc(tsize*sizeof(int));

    a->total_size=tsize;
    a->used_size=usize;
    a->ptr = (int *)malloc(tsize*sizeof(int));

}

void setVal(struct Myarray *a)
{
    int n;
    for(int i=0;i< a->used_size;i++)
    {
        printf("Enter element %d: ",i);
        scanf("%d", &n);
        (a->ptr)[i]=n;
    }
}
void show(struct Myarray *a)
{
    for(int i=0;i<a->used_size;i++)
    {
        printf("%d\n", (a->ptr)[i]);
       
    }
}


int main()
{
    struct Myarray marks;
    CreateArray(&marks, 10, 2);
    printf("Taking input from the user---\n");
    setVal(&marks);
    printf("Printing the value:---\n");
    show(&marks);
}