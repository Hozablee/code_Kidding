#include <iostream>
#include <stdio.h>
#include <math.h>
#include <vector>
#include <algorithm>
#include <list>

using namespace std;

void doit()
{
	int n,c,m,l,r,right,left,stage,stop;
	cin>>n;
	cin>>c;
	vector< vector< pair<int,int> > > data;
	vector< pair<int,int> > a;
	int check[n];
	pair<int,int> paid;
	
	for(int i=0;i<n;i++)
	{
		data.push_back(a);
	}
	
	for(int i=0;i<c;i++)
	{
		cin>>m;
		cin>>l;
		cin>>r;
		
		if(l<r)
		{
			paid.first=l;
			paid.second=r;
			data[m-1].push_back(paid);
		}
		else
		{
			paid.first=r;
			paid.second=l;
			data[m-1].push_back(paid);
		}
	}
	
	/*for(int i=0;i<n;i++)
	{
		cout<<"I ="<<i+1<<endl;
		for(int j=0;j<data[i].size();j++)
		{
			cout<<data[i][j].first<<" ";
			cout<<data[i][j].second<<" ";
		}
		cout<<endl;
	}*/
	
	for(int i=0;i<n;i++)
	{
		check[i]=i+1;
	}
	
	do
	{
		stop = 0;
		for(int i=0;i<n;i++)
		{
			if(data[i].size() == 0)
			{
				//why to do???
			}
			else
			{
				for(int j=0;j<data[i].size();j++)
				{
					stage=0;
					left=0;
					right=0;
					for(int k=0;k<n;k++)
					{
						if(check[k] == (i+1))
						{
							stage=1;
						}
						else if(check[k] == data[i][j].first)
						{
							if(stage == 0)
							{
								if(left != 0)
								{
									stop=1;
									break;
								}
								else
								{
									left = data[i][j].first;
								}
							}
							else if(stage == 1)
							{
								if(right != 0)
								{
									stop=1;
									break;
								}
								else
								{
									right = data[i][j].first;
								}
							}
						}
						else if(check[k] == data[i][j].second)
						{
							if(stage == 0)
							{
								if(left != 0)
								{
									stop=1;
									break;
								}
								else
								{
									left = data[i][j].second;
								}
							}
							else if(stage == 1)
							{
								if(right != 0)
								{
									stop=1;
									break;
								}
								else
								{
									right = data[i][j].second;
								}
							}
						}
					}
					if(stop == 1)
					{
						break;
					}
				}
			}
			if(stop == 1)
			{
				break;
			}
		}
		if(stop == 0)
		{
			cout<<"YES"<<endl;
			for(int i=0;i<n;i++)
			{
				cout<<check[i]<<" ";
			}
			cout<<endl;
			return;
		}
	}
	while( next_permutation(check,check+n) );
	{
		
	}
	cout<<"NO"<<endl;
	
	
}


int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		doit();
	}
	
					
					
	
	
	
	
	
	
	
	
	
}

