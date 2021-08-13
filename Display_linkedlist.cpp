#include<stdio.h>
#include<stdlib.h>

// creating a node
struct Node
{
    int data;
    struct Node *next;
}*first=NULL;

//Creating a linked list
void create(int A[],int n)
{
    int i;
    struct Node *t,*last;
    first=(struct Node *)malloc(sizeof(struct Node));
    first= A[0];
    first->next = 0;
    last = first;

    for(int i=1;i<n;i++)
    {
        t=(struct Node)malloc(sizeof(struct Node));
         t->data = A[i];
         t->next= NULL;
         last->next = t;
         last = t;
    }
}

//Displaying Linkedlist
void Display(struct Node *p)
{
    while (p!=NULL)
    {
        printf("&d",p->data);
        p = p->next;
    }
    
}

int main()
{
    int A[]={3,5,7,10,15};
    create(A,5);
    Display(first);
    return 0;
}