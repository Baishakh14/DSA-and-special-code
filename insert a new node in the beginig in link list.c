#include<stdio.h>
typedef struct node
{
    int data;
    struct node *nnl; ///next node location;
}sn;
sn *insert_node_b(sn *head,int data)
{
    sn *ptr = (sn*)malloc(sizeof(sn));
    ptr->data = data;
    ptr->nnl = head;
    return ptr;
}
void print(sn *head)
{
    while(head!=NULL)
    {
        printf("Element : %d\n",head->data);
        head = head->nnl;
    }
    printf("\n");
}
int main()
{
   sn *a; ///head;
   sn *b;
   sn *c;
   a = (sn*) malloc(sizeof(sn));
    b = (sn*) malloc(sizeof(sn));
    c = (sn*) malloc(sizeof(sn));
    a->data = 100;
    b->data = 200;
    c->data = 300;
    a->nnl = b;
    b->nnl = c;
    c->nnl = NULL;
    sn *temp;
    temp = a;
    while(temp!=NULL)
    {
        printf("element : %d\n",temp->data);
        temp = temp->nnl;
    }
    printf("after addaing new node\n");
    int dat = 1000;
    a = insert_node_b(a,dat);
    temp = a;
    //print(a);
    while(temp!=NULL)
    {
        printf("element : %d\n",temp->data);
        temp = temp->nnl;
    }
    return 0;
}
