#include<iostream>
using namespace std;
struct node
{
    int value;
    struct node*left;
    struct node*right;
};
struct node*inserts(struct node *tree,int data)
{
    if(tree==NULL)
    {
        tree = new node;
        tree->value = data;
        tree->left = NULL;
        tree->right = NULL;
    }
    else
    {
        if(data > tree->value)
        {
            tree->right = inserts(tree->right,data);
        }
        else
        {
            tree->left = inserts(tree->left,data);
        }
    }
}
void printt(struct node*tree)
{
    if(tree==NULL)
    {
        return;
    }
    else
    {
        cout << tree->value << " ";
        printt(tree->left);
        printt(tree->right);
        cout << " ";
        cout << endl;
    }
}
int main()
{
    struct node*tree=NULL;
    while(1)
    {
        cout << "1. Insert" << endl;
        cout << "2. Print" << endl;
        int ch;
        cin >> ch;
        switch(ch)
        {
            case 1:
                int data;
                cout << "data :";
                cin >> data;
                tree=inserts(tree,data);
            break;
            case 2:
                printt(tree);
            break;
        }
    }
}
