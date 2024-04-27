#include<stdio.h>
#include<stdlib.h>
struct tree ///node for tree element
{
    int data;
    struct tree *left;
    struct tree * right;
};

struct tree *create_tree(int data)  ///create node in tree and assign value;
{
   struct tree *ab = (struct tree*) malloc (sizeof(struct tree));
   //struct tree *ab;
    ab->data = data;
    ab->left = NULL;
    ab->right = NULL;
};

struct tree *insert(struct tree *root,int data) ///insert in tree using binary tree property;
{
    if(root == NULL)
    {
        root = create_tree(data);
        return root;
    }
    else if(data <= root->data)
    {
        root->left = insert(root->left,data);
    }
    else root->right = insert(root->right,data);
    return root;
};

void inorder(struct tree *root) ///inorder traverse to check is BST or not
{
    if(root != NULL)
    {
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
}
int main()
{
    struct tree *root;
    root = NULL;
    int a[] = {3,5,23,7,2};
    int n = sizeof(a)/sizeof(int);
    for(int i = 0;i<n;i++)
    {
        root = insert(root,a[i]);
    }
    printf("Inorder Traverse of this TRee : ");
  inorder(root);  ///if inorder Traverse shows sorted element than it is a Proper BST;
  //printf("%c",10);
    return 0;
}

