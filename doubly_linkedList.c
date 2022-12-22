#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node*next;
    struct node*prev;
};
void linkedListTraversal(struct node*ptr)
{
    while(ptr!=NULL)
    {
        printf("Element : %d\n",ptr->data);
        ptr=ptr->next;
    }
}
void previousNode(struct node*ptr)
{
    while(ptr!=NULL)
    {
        printf("Element : %d\n",ptr->data);
        ptr=ptr->prev;
    }
}
struct node*newNode(struct node*head,int data)
{
    struct node*ptr = (struct node*)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->next=head;
    head=ptr;
    ptr->prev=NULL;
};
int main()
{
    struct node*head = (struct node*)malloc(sizeof(struct node));
    struct node*second = (struct node*)malloc(sizeof(struct node));
    struct node*third = (struct node*)malloc(sizeof(struct node));
    struct node*last = (struct node*)malloc(sizeof(struct node));

    head->data = 2;
    head->next = second;
    head->prev = NULL;

    second->data = 4;
    second->next = third;
    second->prev = head;

    third->data = 5;
    third->next = last;
    third->prev = second;

    last->data=7;
    last->next =NULL;
    last->prev=third;
    printf("Elements in Linked List:\n");
    linkedListTraversal(head);
    printf("Elements in Linked List in reverse form:\n");
    previousNode(last);
    head = newNode(head,45);
    printf("Elements in linked list after insert at beginning:\n");
    linkedListTraversal(head);
    return 0;
}
