#include <stdio.h>
#include <iostream>
#include <list>
using namespace std;
list<int> jawary[75000];
void forprint(int a)
{
	for(list<int>::iterator y = jawary[a-1].begin(); y != jawary[a-1].end(); y++)
	{
		int b=*y;
		cout<<b<<" ";
		if(jawary[b-1].size() != 0)
		{
			forprint(b);
		}
	}
}
int main()
{
	list<int>::iterator it;
	int forin,fordo,n,answer;
	cin>>n;
	int hey[n];
	if(n == 1)
	{
		cout<<n;
	}
	for(int i=1;i<n;i++)
	{
		cin>>forin;
		cin>>fordo;
		jawary[fordo-1].push_front(forin);
		hey[forin-1]=-1;
	}
	for(int i=0;i<n;i++)
	{	
		if(hey[i] != -1)
		{
			answer=i+1;
			break;
		}
	}
	cout<<answer<<" ";
	forprint(answer);
}
