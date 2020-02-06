#include<iostream>
using namespace std;
struct node
{
    int value;
    struct node*next;
};
struct node*inserts(struct node*head,int data)
{
    if(head==NULL)
    {
        head = new node;
        head->value = data;
        head->next = NULL;
    }
    else
    {
        struct node *tmp = new node;
        struct node *p = head;
        tmp->value = data;
        while(p!=NULL)
        {
            if(p->next==NULL)
            {
                p->next = tmp;
                tmp->next = NULL;
                break;
            }
            tmp = tmp->next;
        }
    }
}
void printt(struct node*head)
{
    struct node*tmp;
    tmp = head;
    while(tmp!=NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->next;
    }

}
int main()
{
    struct node*head = NULL;
    head=inserts(head,1);
    head=inserts(head,2);
    printt(head);
}
