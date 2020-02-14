#include <iostream>
#include <stdio.h>
#include <math.h>
#include <list>
#include <queue>

using namespace std;

int main()
{
	int round;
	int sumcon=0;
	list<int> adj[10000];
	bool footer[10000];
	queue<int> newNodes;
	cin>>round;
	for(int i=0;i<round;i++)
	{
		sumcon=0;
		int node,edge;
		cin>>node;
		cin>>edge;
		if(edge == 0)
		{
			cout<<node<<endl;
			break;
		}
		else if(node == 0)
		{
			cout<<node<<endl;
			break;
		}
		for(int x=0;x<node;x++)
		{
			footer[x]=false;
			adj[x].clear();
		}
		
		for(int x=0;x<edge;x++)
		{
			int u,v;
			cin>>u;
			cin>>v;
			adj[u-1].push_back(v);
			adj[v-1].push_back(u);
		}
		
		if(edge == 1 && node != 0)
		{
			cout<<node-1<<endl;
			break;
		}
		
		if(edge > 1)
		{
			for(int a=0;a<node;a++)
			{
				if(!footer[a])
				{
					newNodes.push(a+1);
					sumcon++;
				}
				while(!newNodes.empty())
				{
					int uv = newNodes.front();
					newNodes.pop();
						footer[uv-1] = true;
						for(list<int>::iterator c = adj[uv-1].begin(); c != adj[uv-1].end(); c++)
						{
							int d =*c;
							if(!footer[d-1])
							{
								newNodes.push(d);
							}
						}
				}
			}
			cout<<sumcon<<endl;
		}
		
	}
	
}

