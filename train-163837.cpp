#include <iostream>
#include <stdio.h>
using namespace std;

struct x
{
	int va;
	struct x *next;
	struct x *prev;
};

struct x *tail , *node ,*p , *head;

int main()
{
	int a,b,n,m;
	cin>>a;
	struct x *arr[a];
	for (int i=1 ; i<=a;i++)
	{
		if ( head==NULL )
		{
			head=new struct x;
			head->va=i;
			head->prev=NULL;
			head->next=NULL;
			tail=head;
		}else
		{
			node=new struct x;
			node->va=i;
			node->next=NULL;
			node->prev=tail;
			tail->next=node;
			tail=node;
		}
	}
	p=head;
	for ( int i=0 ;i<a;i++ )
	{
		arr[i]=p;
		p=p->next;
	}
	
	cin >> b;
	for(int i=0 ;i<b ; i++)
	{
		cin>>n>>m;
		if(arr[n-1]->va == head->va)
		{
			arr[n-1]->prev = tail;
			tail->next =arr[n-1];
			head=arr[m-1]->next;
			tail=arr[m-1];
			head->prev = NULL;
			tail->next=NULL;			
		}
		else if ( arr[n-1]->va!=head->va && arr[m-1]->va!=tail->va )
		{
			arr[n-1]->prev->next=arr[m-1]->next;
			arr[m-1]->next->prev=arr[n-1]->prev;
			
			
			arr[n-1]->prev=tail;
			tail->next=arr[n-1];
			
			arr[m-1]->next=NULL;
			tail=arr[m-1];
		}
	}
	p=head;
	while( p != NULL)
	{
		cout<<p->va<<endl;
		p=p->next;
	}	
	
}
