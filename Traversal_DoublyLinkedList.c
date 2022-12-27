#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node*next;
    struct node*prev;
};
void traversal(struct node*head)
{
    while (head!=NULL)
    {
        printf("Element: %d\n",head->data);
        head=head->next;
    }
}

int main()
{
    struct node*head = (struct node*)malloc(sizeof(struct node));
    struct node*second = (struct node*)malloc(sizeof(struct node));
    struct node*third = (struct node*)malloc(sizeof(struct node));
    struct node*fourth = (struct node*)malloc(sizeof(struct node));

    head->data = 12;
    head->next = second;
    head->prev = NULL;

    second->data = 14;
    second->next = third;
    second->prev = head;

    third->data = 16;
    third->next = fourth;
    third->prev = second;

    fourth->data = 18;
    fourth->next = NULL;
    fourth->prev = third;

    printf("Elements in Doubly Linked List:\n");
    traversal(head);
    return 0;
}