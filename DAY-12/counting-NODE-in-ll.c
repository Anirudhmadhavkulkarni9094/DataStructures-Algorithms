// conting elements of linked list or counting no. of nodes in linked list

#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
    }*first=NULL;
void create(int A[],int n)
{
    int i;
    struct Node *t,*last;
    first=(struct Node *)malloc(sizeof(struct Node));
    first->data=A[0];
    first->next=NULL;
    last=first;

    for(i=1;i<n;i++)
    {
        t=(struct Node*)malloc(sizeof(struct Node));
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}
void Display(struct Node *p)
{
    while(p!=NULL)
    {   
        printf("%d ",p->data);
    p=p->next;
    }
}
void RDisplay(struct Node *p)
{
    if(p!=NULL)
    {
        printf("%d ",p->data);
        RDisplay(p->next);
    }
}
int Rcount(struct Node *p){
    if(p!=0){
        return Rcount(p->next)+1;
    }
    else{
        return 0;
    }
}



int main()
{
    struct Node *temp;
    int A[]={3,5,7,10,25,8,32,2,546,4367,3};
    int n = sizeof(A)/4;
    create(A,n);

    printf("%d",Rcount(first));

    return 0;
}
