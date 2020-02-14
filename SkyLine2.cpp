#include <stdio.h>
#include <iostream>
#include <list>
using namespace std;

int main()
{
	int n,from,to,hi,max=0,from2,to2;
	list<int> get[256];
	cin>>n;
	int hight[256],connect[256],maxsi[256];
	for(int i=0;i<256;i++)
	{
		hight[i] =0;
		connect[i]=0;
		maxsi[i]=0;
		get[i].push_back(0);
	}
	for(int i=0;i<n;i++)
	{
		cin>>from;
		cin>>hi;
		cin>>to;

		if(to > max)
		{
			max=to;
		}
		from--;
		to--;
		
		for(int x=from;x<=to;x++)
		{
			if(x==from)
			{
				if(hi > hight[x])
				{
					hight[x]=hi;
				}
				else if(hi<= hight[x])
				{
					get[x].push_back(hi);
				}
			}
			else
			{
				if(hi > hight[x])
				{
					if(x == to)
					{
						get[x].push_front(hight[x]);
					}
					hight[x] =hi;
					maxsi[x]=hi;
					get[x].push_front(hi);
				}
				else
				{
					get[x].push_front(hi);
				}	
			}
			
		}
	}
	/*cout<<"hight"<<endl;
	for(int i=0;i<=max;i++)
	{
		cout<<hight[i]<<" ";
	}
	cout<<endl;
	cout<<"list"<<endl;
	for(int i=0;i<=max;i++)
	{
		cout<<"list"<<i+1<<endl;
		for(list<int>::iterator x = get[i].begin(); x != get[i].end(); x++)
		{
			cout<<*x<<" ";
		}
		cout<<endl;

	}
	cout<<endl;*/
	int start=0;
	int eq1=0,eq2=0;
	int max1=0,max2=0;
	int sumeq=0;
	for(int i=0;i<max;i++)
	{
		eq1=0,eq2=0;
		sumeq=0;
		max1=0;
		max2=0;
		if(hight[i] != 0 && start == 0)
		{
			cout<<i+1<<" "<<hight[i]<<" ";
			start=1;
		}
		else if(start==1)
		{
			for(list<int>::iterator x = get[i].begin(); x != get[i].end(); x++)
			{	
				eq1=*x;
				if(*x > max1)
				{
					max1=*x;
				}
				for(list<int>::iterator b = get[i-1].begin(); b != get[i-1].end(); b++)
				{
					eq2 =*b;
					if(*b > max2)
					{
						max2=*b;
					}
					if(eq1 == eq2)
					{
						if(eq1 > sumeq)
						{
							sumeq=eq1;
						}
					}
				}
			}
			if(hight[i] != hight[i-1])
			{
				if(sumeq == hight[i-1])
				{
					cout<<i+1<<" "<<hight[i]<<" ";
				}
				else if(sumeq == hight[i])
				{
					cout<<i<<" "<<hight[i]<<" ";
				}
				else if(maxsi[i] == hight[i-1])
				{
					if(max1 == hight[i-1])
					{
						cout<<i+1<<" "<<hight[i]<<" ";
					}
				}
				else if(sumeq != hight[i] && sumeq != hight[i-1])
				{
				//	cout<<" a ";
					cout<<i<<" "<<sumeq<<" ";
					cout<<i+1<<" "<<hight[i]<<" ";
				}
			}
			else if(hight[i] == hight[i-1])
			{
				if(max1 != hight[i])
				{
					//cout<<"max1= "<<max1<<"hight="<<hight[i]<<endl;
					if(sumeq != hight[i] && sumeq != hight[i-1])
					{
						//cout<<" b ";
						cout<<i<<" "<<sumeq<<" ";
						cout<<i+1<<" "<<hight[i]<<" ";
					}
				}
			}
		}
	}
	cout<<max<<" "<<0<<" ";
}
