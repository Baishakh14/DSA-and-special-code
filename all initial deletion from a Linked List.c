
#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
}sn;


void print(struct node *head)
{
    while(head != NULL)
    {
        printf("%d -> ",head->data);
        head = head->next;
    }
    printf("NULL\n");
}


struct node *remove_first(struct node *head)
{
    struct node *ab;
    ab = head;
    head = head->next;
    free(ab);
    return head;
};


sn *remove_last(sn *head)
{
    struct node *ptr;
    ptr = head;
    ptr = ptr->next;
    struct node *q;
    q = head;
    while(ptr->next != NULL)
    {
        q = q->next;
        ptr = ptr->next;
    }
    q->next = NULL;
    free(ptr);
    return head;
}

struct node *remove_given(sn * head,int index_number)
{
    struct node *ab;
    struct node *ptr;
    ptr = head;
    ab = head;
    int i = 0;
    while(i!=index_number)
    {
        ab = ab->next;
        i++;
    }
    int j = 0;
    while(j<index_number-1)
    {
        ptr = ptr->next;
        j++;
    }
    ptr->next = ab->next;
    free(ab);
    return head;
};
int main()
{
    sn* a;
    sn *b;
    sn * c;
    struct node *d;
    d = (struct node *) malloc (sizeof(struct node));
    a = (sn *) malloc (sizeof(sn));
    b = (sn *) malloc (sizeof(sn));
    c = (sn *) malloc (sizeof(sn));
    a->data = 10;
    a->next = b;
    b->data = 50;
    b->next = c;
    c->data = 60;
    c->next = d;
    d->data = 80;
    d->next = NULL;
    print(a);
//    a = remove_first(a);
//    print(a);
//a = remove_last(a);
//print(a);
a = remove_given(a,2);
print(a);
    return 0;
}
