#include<stdio.h>
#include<stdlib.h>
#define newn printf("\n"); ///for new nile shortcut
/*
         The Tree
           7              root
          / \
         3   6        b       c
        / \ / \     d   e   f   g
       2  5 4  8
*/

struct node  ///create node;
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *createnode(int data) ///node create shortcut;
{
    struct node *root = (struct node*) malloc(sizeof(struct node));
    root->data = data;
    root->left = NULL;
    root->right = NULL;
    return root;
};

///preOrder traverse
void preOrder(struct node *root)
{
     if(root!=NULL)
     {
         printf("%d ",root->data);
         preOrder(root->left);
         preOrder(root->right);
     }
}

///inOrder traverse
void inOrder(struct node *root)
{
    if(root!=NULL)
    {
        inOrder(root->left);
        printf("%d ",root->data);
        inOrder(root->right);
    }
}

///postOrder Traverse
void postOrder(struct node*root)
{
    if(root!=NULL)
    {
        postOrder(root->left);
        postOrder(root->right);
        printf("%d ",root->data);
    }
}
int main()
{
    printf("%s\n",__TIME__);
    printf("%s\n",__DATE__);
    printf("%s\n",__TIMESTAMP__);
    printf("This file is form -> %s\n",__FILE__);
    printf("This line is in %dth line\n",__LINE__);
    newn newn newn;
   struct node *root = createnode(7);
   struct node *b = createnode(3);
   struct node *c = createnode(6);
   struct node *d = createnode(2);
   struct node *e = createnode(5);
   struct node *f = createnode(4);
   struct node *g = createnode(8);

   ///connect trees;
   root->left = b;
   root->right = c;
   b->left = d;
   b->right = e;
   c->left = f;
   c->right = g;

printf("preOrder : ");
preOrder(root), newn;
newn;

printf("inOrder : ");
inOrder(root);
newn;
newn;

printf("postOrder : ");
postOrder(root);
newn
newn

    return 0;
}
