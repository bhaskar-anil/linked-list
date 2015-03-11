/*@Author Anil Bhaskar*/

#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node* next;
};

/*A very basic Push function that Push a node in front of the linked list
* You can even build a Linked List from a NULL node(Empty List) using this Push function
*/
void Push(struct node** headRef, int data){
    struct node* newNode = malloc(sizeof(struct node));

    newNode->data = data;
    newNode->next = *headRef;
    *headRef = newNode;
}

/*Count number of nodes in a given list, provided the head pointer to the list*/
int Length(struct node* head){
    int count=0;
    while(head!=NULL){
        count++;
        head=head->next;
    }
    return count;
}

void traverse(struct node* head){
    while(head!=NULL){
        printf("\n%d\t",head->data);
        head=head->next;
    }
}

/*Get the occurrence of a data in the linked list*/
int CheckOccu(struct node* head, int data){
    int count=0;
    while(head!=NULL){
        if(head->data==data){count++;}
        head=head->next;
    }
    return count;
}

/*Get Nth node
* I am printing the node from the function itself
* You may return pointer to that node also
*/
void PrintNth(struct node* head, int n){
    //Abort if n is more than List's length
    int len=Length(head);
    int count=0;
    if(len>=n){
        while(count!=n){
            head=head->next;
            count++;
        }
        printf("\nThe %d th node is %d.",n,head->data);
    }else{
        printf("\nList is too small to get %d th node.",n);
    }
}

struct node* nthNode getNth(struct node* head, int n){
    //Abort if n is more than List's length
    int len=Length(head);
    int count=0;
    if(len>=n){
        while(count!=n){
            head=head->next;
            count++;
        }
        return head;
    }else{
        printf("\nList is too small to get %d th node.",n);
    }
}
/*Delete Nth node*/
void delNth(struct node* head, int n){
    struct node* nthNode=malloc(sizeof(struct node));
    nthNode=getNth();
}

int main()
{
    printf("Hello world!\n");
    struct node* head=NULL;
    int i;
    for(i=0;i<5;i++){
        Push(&head,i);
    }
    traverse(head);
    return 0;
}
