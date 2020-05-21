#include<stdlib.h>
#include<conio.h>
struct node{
    int value;
    struct node*left;
    struct node*right;
};
struct node*insert(struct node*tree,int data)
{
    if(tree==NULL)
    {
        tree = (struct node*)malloc(sizeof(struct node));
        tree->value = data;
        tree->left = NULL;
        tree->right = NULL;
    }
    else
    {
        if(tree->value < data)
        {
            tree->left = insert(tree->left,data);
        }
        else
        {
            tree->right = insert(tree->right,data);
        }
    }
    return(tree);
}
main()
{
    struct node*tree=NULL;
    tree = insert(tree,1);
    printf("%d",tree->value);
}
