#include<stdio.h>
#include<stdlib.h>
///create node
struct node
{
    int data;
    struct node *next;
};
///print node;
void print(struct node *head)
{
    struct node *ab = head;
    do
    {
        printf("%d ",ab->data);
        ab = ab->next;
    } while(ab!= head);
    printf("\n");
}

///add a node in first of a circular link list
struct node *add_first(struct node *head,int data)
{
    printf("add %d in first off Linked List\n",data);
    struct node *ab = (struct node*) malloc (sizeof(struct node));
    ab->data = data;
    ab->next = head;
    struct node *ptr;
    ptr = head;
    while(ptr->next!=head)
    {
        ptr = ptr->next;
    }
    ptr->next = ab;
    return ab;
};

///add a node in last of a circular link list

struct node *add_last(struct node *head,int data)
{
        printf("add %d last off Linked List\n",data);

    struct node *ab = (struct node*) malloc (sizeof(struct node));
    ab->data = data;
    struct node *ptr;
    ptr = head;
    while(ptr->next!=head)
    {
        ptr = ptr->next;
    }
    ptr->next = ab;
    ab->next = head;
    return head;
};

///add a node in after a given node of a circular link list

struct node *add_after_node(struct node *head,int data,int index_number)
{
    printf("add after %d node data %d\n",index_number,data);
    struct node *ab = (struct node *) malloc(sizeof(struct node));
    int i = 0;
    struct node *ptr;
    ptr = head;
    ab->data = data;
    while(i!=2)
    {
        ptr = ptr->next;
        i++;
    }
    ab->next = ptr->next;
    ptr->next = ab;
    return head;

};
int main()
{
   struct node *a;
   struct node *b;
   struct node *c;

   a = (struct node *) malloc (sizeof(struct node));
   b = (struct node *) malloc (sizeof(struct node));
   c = (struct node *) malloc (sizeof(struct node));

   a->data = 10;
   b->data = 40;
   c->data = 30;
   a->next = b;
   b->next = c;
   c->next = a;
   printf("my Circular Linked - List is :");
   printf("\n");
    print(a);
printf("\n");
    a = add_first(a,500);

    print(a);
printf("\n");

    a = add_last(a,200);


    print(a);
printf("\n");


    a = add_after_node(a,800,2);

    print(a);
    printf("\n");

    return 0;
}

