#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *nnl; ///next node location
} sn ;
void printlinklist(sn *head)
{
    int k = 0;
    while(head!=NULL)
    {
        printf("number of %d element in linklist is %d\n\n",++k,head->data);
        head = head->nnl;
    }
    printf("\n");
}
sn* insert_before_index(sn *head,int data,int index)
{
    sn *ptr = (sn*)malloc(sizeof(sn));
    sn *p = head;
    int i = 0;
    while(i!=index-1)
    {
       i++;
       p = p->nnl;
    }
    ptr->data = data;
    ptr->nnl = p->nnl;
    p->nnl = ptr;
    return head;
}
int main()
{
    struct node *a;
    sn *b;
    sn *c;
    a = (sn *) malloc(sizeof(sn));
    b = (sn *) malloc(sizeof(sn));
    c = (sn *) malloc(sizeof(sn));
    a->data = 100;
    b->data = 150;
    c->data = 40;
    a->nnl = b;
    b->nnl = c;
    c->nnl = NULL;
    printf("Normal link list: \n");
    printlinklist(a);
    insert_before_index(a,900,1);
    printf("after adding new value: \n");
    printlinklist(a);
    return 0;
}

