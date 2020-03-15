#include<stdlib.h>
#include<stdio.h>

struct node
{
    int value;
    struct node*next;
};
struct node*insert(struct node*head,int data)
{
    if(head==NULL)
    {
        head = (struct node*)malloc(sizeof(struct node));
        head->value = data;
        head->next = NULL;
    }
    else
    {
        struct node*tmp = (struct node*)malloc(sizeof(struct node)) ;
        struct node*p=head;
        tmp->value = data;
        while(p!=NULL)
        {
            if(p->next == NULL)
            {
                p->next = tmp;
                tmp->next =NULL;
            }
            p=p->next;
        }
    }
    return(head);
}
void printt(struct node*head)
{
    struct node*tmp=head;
    while(tmp!=NULL)
    {
        printf("%d \n",tmp->value);
        tmp=tmp->next;
    }
}
int main()
{
    struct node*head = NULL;
    head = insert(head,0);
    head = insert(head,1);
    printt(head);
}
