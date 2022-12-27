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

struct node*insertAtbeginning(int data)
{
    struct node*newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;
}
int main()
{
    struct node*head;
    head = insertAtbeginning(21);
    printf("Elements in Doubly Linked List:\n");
    traversal(head);
    return 0;
}