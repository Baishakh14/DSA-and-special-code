#include<iostream>
using namespace std;
typedef struct node
{
    int data;
    struct node * next;
}sn;
void print(sn *head)
{
    while(head!=NULL)
    {
        cout<<"element : "<<head->data<<endl;
        head = head->next;
    }
}
sn *insert_new_node_before_node(sn *head,int data,int index)
{
    sn *ptr = (sn *) malloc(sizeof(sn));
    ptr->data = data;
    sn *p;
    p = head; ///new node from head to point and find the proper positon.
    int i = 0;
    while(i!=index-1)
    {
        i++;
        p = p->next;
    }
    ptr->next = p->next;///p->next stored c node 
    //now its goes new ptr node now ptr->next point c node;
    p->next = ptr; /// and p->next is now point ptr the new node;
    return head;
}
int main()
{
  sn *a,*b,*c;
  a = (sn*) malloc(sizeof(sn));
  b = (sn*) malloc(sizeof(sn));
  c = (sn*) malloc(sizeof(sn));
  a->data = 10;
  b->data = 150;
  c->data = 60;
  a->next = b;
  b->next = c;
  c->next = NULL;
  print(a);
  ///now i want to add number before c node;
  ///so the c node index is 3;
  cout<<endl<<"after adding new node\n"<<endl;
  insert_new_node_before_node(a,200,2);
  print(a);
    return 0;
}