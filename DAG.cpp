#include <iostream>
#include <stdio.h>
#include <math.h>
#include <list>
#include <queue>

using namespace std;

void check()
{
	priority_queue<int> newNodes;
	bool N;
	int node,edge;
		cin>>node;
		cin>>edge;
	list<int> adj[node],canToYou[node],answer;
	for(int x=0;x<edge;x++)
	{
		int u,v;
		cin>>u;
		cin>>v;
		adj[u-1].push_back(v);
		canToYou[v-1].push_back(u);
	}
	
	for(int x=0;x<node;x++)
	{
		if(canToYou[x].size() == 0)
		{
			newNodes.push(node-x);
			//cout<<node-x<<endl;
		}
	}
	
	while(answer.size() < node)
	{
		if(newNodes.empty())
		{
			N=true;
			break;
		}
		else
		{
			N=false;
		}
		int a= node-newNodes.top();
		newNodes.pop();
	//	cout<<"push ="<<a+1<<endl;
		answer.push_back(a+1);
		for(list<int>::iterator c = adj[a].begin(); c != adj[a].end();c++)
		{
			int fordee = *c;
			canToYou[fordee-1].remove(a+1);
			//cout<<"in adj= "<<fordee<<" size= "<<canToYou[fordee-1].size();
			canToYou[fordee-1].remove(a+1);
			if(canToYou[fordee-1].size() == 0)
			{
				//cout<<"push in q= "<<node-(fordee-1)<<endl;
				newNodes.push(node-(fordee-1));
			}
		}
		adj[a].clear();
	}
	
	if(N)
	{
		cout<<"NOT DAG"<<endl;
	}
	else
	{
		int run=0;
		for(list<int>::iterator c = answer.begin(); c != answer.end();c++)
		{
			if(run==node-1)
			{
				cout<<*c;
			}
			else
			{
				cout<<*c<<" ";
			}
			run++;
		}
		cout<<endl;
	}

}



int main()
{
	int graph;
	cin>>graph;
	
	for(int i=0;i<graph;i++)
	{
		check();
	}
	
}

