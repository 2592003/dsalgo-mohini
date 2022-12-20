#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node*next;
};
void LinkedListTraversal(struct node*ptr)
{
    while (ptr!=NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
    
}
int main()
{
    struct node*head = (struct node*)malloc(sizeof(struct node));
    struct node*second = (struct node*)malloc(sizeof(struct node));
    struct node*third = (struct node*)malloc(sizeof(struct node));
    struct node*last = (struct node*)malloc(sizeof(struct node));

    head->data=1;
    head->next=second;

    second->data=3;
    second->next=third;

    third->data=5;
    third->next=last;

    last->data=7;
    last->next=NULL;

    printf("Elements in Linked List:\n");
    LinkedListTraversal(head);
    return 0;
}