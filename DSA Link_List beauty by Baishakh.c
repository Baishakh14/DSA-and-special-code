#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *nnl; ///next node location nnl;
}sn; ///make node with data and next node address part,allais with sm using typedef
int main()
{
    sn *a; ///using typedef name make 3 variable using pointer;
    sn *b;
    sn *c;
    a = (struct node*) malloc(sizeof(struct node)); ///both allias typedef and normal will works;
    b = (sn*) malloc(sizeof(sn));
    c = (sn*) malloc(sizeof(sn));
    a->data = 10;  ///add value in data part in every node;
    a->nnl = b;  ///make the nnl part to next node address;
    b->data = 50;
    b->nnl = c;
    c->data = 100;
    c->nnl = NULL; ///last node always NULL
    while(a!=NULL)
    {
        printf("elements : %d\n",a->data);  ///print the node value;
        a = a->nnl; ///and call nnl part which mean now it holds next node address;
    }
    return 0;
}

