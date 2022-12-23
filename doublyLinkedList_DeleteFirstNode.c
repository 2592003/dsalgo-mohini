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
struct node*deleteFirstNode(struct node*head)
{
    struct node*p=head;
    struct node*q=head->next;
    q->prev = NULL;
    head=q;
    free(p);
    return head;
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

    head = deleteFirstNode(head);
    printf("Elements in Linked List:\n");
    linkedListTraversal(head);
    return 0;
}
