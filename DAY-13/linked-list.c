//following are the general operations performed on linked list

#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
}*first;
void create(int A[], int n){
    int i;
    struct Node *t,*last;
    first = (struct Node *)malloc(sizeof(struct Node));     //creating the first node
    first->data = A[0];
    first->next = NULL;
    last=first;
    for(i=1;i<n;i++){
        t = (struct Node *)malloc(sizeof(struct Node));    //creating second node
        t->data = A[i];                                    // assigning values from the array
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void display(struct Node *p){                               // printing all the elements of a given linked list
    while(p!=NULL){
        printf("%d--->",p->data);                           // "--->" added just to give visuals of linked list
        p=p->next;
    }
    printf("NULL\n");                                        // serving the purpose of visualization of last element of linked list pointing towards the null address
}

void Rdisplay(struct Node *p){                             // recursive diplay method
    if(p!=NULL){
        printf("%d\t",p->data);
        Rdisplay(p->next);
    }
    printf("\n");
}
int count(struct Node *p){                                 // counting numbers of nodes in linked list
    int count =0;
    while(p!=NULL){
        count+=1;
        p=p->next;
    }
    return count;
}

int sumOfNodes(struct Node *p){                             // calculating sum of elements of linked list
    int sum = 0;
    while(p!=0){
        sum += p->data;
        p = p->next;
    }
    return sum;
}

int maxElement(struct Node *p){                              // finding maximum element in the given linked list
        int maxnum = 0;
        while(p!=NULL){
            if(maxnum<p->data){
                maxnum = p->data;
            }
                p=p->next;
        }
        return maxnum;

}

void reverseLinkedList(struct Node *p){                       // reversing a given linked list by reverse printing it
    if(p!=NULL){
        reverseLinkedList(p->next);
        printf("%d\t",p->data);
    }
}

int searching(struct Node *p,int key){                       // searching in an linked list
    int count =0;
    while(p!=NULL){
        count+=1;
        if(key==p->data){
            return count;
        }
        else{
            p=p->next;
        }
    }

}

void main(){
    int A[] = {3,4,5,6,7,8,9};
    create(A,7);
    display(first);

    Rdisplay(first);
    printf("Linked list contain %d nodes\n",count(first));
    printf(" Sum of all node element is %d\n",sumOfNodes(first));
    printf("Maximum number in the linked list is %d\n",maxElement(first));
    reverseLinkedList(first);
    printf("\n");
    printf("Element found at the position %d",searching(first,5));
}
