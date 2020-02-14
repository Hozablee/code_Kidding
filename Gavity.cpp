#include <iostream>
#include <stdio.h>
#include <list>
#include <utility>
#include <queue>

using namespace std;

void SP(int b,int r,int ball)
{
	long int n,e;
	long int node1,node2,cost,sumcost=0;
	pair<long int,long int> san,san2,san3;
	queue < pair<long int,long int> > PQ;
	n=b;
	e=r;
	
	list< pair<long int,long int> > grap[n];
	long int answer[n],run[n];
	
	for(int i=0;i<e;i++)
	{
		cin>>node1;
		cin>>node2;
		cin>>cost;
		san.first=-cost;
		san.second=node2+1;
		san2.first=-cost;
		san2.second=node1+1;
		grap[node1].push_back(san);
		grap[node2].push_back(san2);
	}
	
	for(int i=0;i<n;i++)
	{
		answer[i] =-1;
		run[i] = 0;
	}
	answer[ball]=0;
	san.first=0;
	san.second=ball+1;
	PQ.push(san);
	while(!PQ.empty())
	{
		san3=PQ.front();
		PQ.pop();
		
		//if(run[san3.second-1] == 0)
		//{
			//cout<<san.second<<" ";
			//cout<<san.first<<endl;
			sumcost=answer[san3.second-1];
			//cout<<"sumcost2 ="<<sumcost<<endl;
			for(list< pair<long int,long int> >::iterator y = grap[san3.second-1].begin(); y != grap[san3.second-1].end(); y++)
			{
				san2=*y;
					//cout<<"san 2= "<<san2.second<<endl;
					if(sumcost+(-san2.first) <= answer[san2.second-1] || answer[san2.second-1] == -1)
					{
						//cout<<"hedo"<<endl;
						answer[san2.second-1]=sumcost+(-san2.first);
						PQ.push(san2);
					}
			}
			run[san3.second-1] = 1;
			/*cout<<"update"<<endl;
			for(int i=0;i<n;i++)
			{
					cout<<answer[i]<<endl;
			}*/
		//}
		
	}
	vector<int> foranswer;
	int max=-1;
	for(int i=0;i<n;i++)
	{
			if(answer[i] > max)
			{
				max=answer[i];
			}
	}
	
	for(int i=0;i<n;i++)
	{
			if(answer[i] == max)
			{
				foranswer.push_back(i);
			}
	}
	
	for(int i=0;i<foranswer.size();i++)
	{
		cout<<foranswer[i]<<" ";
	}
	cout<<endl;
}

int main()
{
	int t,b,r,ball;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		cin>>b;
		cin>>r;
		cin>>ball;
		SP(b,r,ball);
	}
	
	
	
}

