#include<stdio.h>
#include<stdlib.h>

///defining the node
typedef struct node
{
    int data;
    struct node *next;
}sn;

///print link list function
void print(sn *head)
{
    while(head!=NULL)
    {
        printf("%d -> ",head->data);
        head = head->next;
    }
    printf("NULL\n");
}

///add a new node at the first of linked list
struct node * Add_first(struct node *head,int data)
{
    sn *ptr;
    ptr = (sn*)malloc(sizeof(sn));
    ptr->data = data;
    ptr->next = head;
    return ptr;
}

///add a new node at the last of this linked list;
sn *add_last(struct node *head,int data)
{
    struct node *ptr;
    ptr = (sn*) malloc(sizeof(struct node));
//    pt->rdata = data;
//    ptr->next = NULL;
    struct node *abc;
    abc = head;
    while(abc->next != NULL)
    {
        abc = abc->next;
    }
    abc->next = ptr;
    ptr->data = data;
    ptr->next = NULL;
    return head;
}

///add a new node after a given node of a linked list;
struct node * add_after_a_given_node(sn * head,int data,int node_index_number)
{
   struct node *ptr;
   ptr = (sn*) malloc (sizeof(struct node));
   struct node *abc;
   abc = head;
   int c = 0;
   while(c!=node_index_number)
   {
      abc = abc->next;
      c++;
   }
   ptr->next = abc->next;
   ptr->data = data;
   abc->next = ptr;
   return head;

}


int main()
{
   struct node *a;
   struct node *b;
   struct node *c;


   a = (struct node *) malloc (sizeof(sn));
   b = (struct node *) malloc (sizeof(sn));
   c = (struct node *) malloc (sizeof(sn));


   a->data = 30;
   b->data = 50;
   c->data = 70;


   a->next = b;
   b->next = c;
   c->next = NULL;

   printf("My linked list is : \n");
   print(a);

   printf("\n\nafter adding new node at the begining\n");
   a = Add_first(a,200);
   print(a);


   printf("\n\nafter adding a new node at the end of this node\n");
   a = add_last(a,100);
   print(a);


   int i = 2;
   printf("\n\nadd a new node after %d index\n",i);
   a = add_after_a_given_node(a,500,i);
   print(a);


    return 0;
}

