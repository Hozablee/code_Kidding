#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
	float n,from,to,hi,max=0,from2,to2;
	cin>>n;
	float hight[256],connect[256],conva[256];
	for(int i=0;i<256;i++)
	{
		hight[i] =0;
		connect[i]=0;
		conva[i]=0;
	}
	for(int i=0;i<n;i++)
	{
		cin>>from;
		cin>>hi;
		cin>>to;
		if(to > 255)
		{
			to =255;
		}
		if(to > from)
		{

			if(to > max)
			{
				max=to;
			}
			from--;
			to--;
			to2=to;
			from2=from;
		}
		else if(from > to)
		{

			if(to > max)
			{
				max=from;
			}
			from--;
			to--;
			to2=from;
			from2=to;
			
		}
		else if(from == to)
		{
			if(to > max)
			{
				max=to;
			}
			from--;
			to--;
			to2=to;
			from2=from;
		}
		
		for(int x=from2;x<=to2;x++)
		{
			if(x==from2)
			{
				if(connect[x] == 1 )
				{
					if(hi > hight[x])
					{
						conva[x]=hight[x];
						hight[x]=hi;
					}
				}
				else
				{
					if(hi > hight[x])
					{
						hight[x]=hi;
					}
				}
			}
			else
			{
				if(hi > hight[x])
				{
					hight[x] =hi;
					connect[x] = 1;
					conva[x]=hi;
				}
				else
				{
					if(connect[x] == 0)
					{
						connect[x]=1;
						conva[x]=hi;
					}
					else if(connect[x] == 1)
					{
						if(conva[x] < hi)
						{
							conva[x]=hi;
						}
					}
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
	cout<<"conva"<<endl;
	for(int i=0;i<=max;i++)
	{
		cout<<conva[i]<<" ";
	}
	cout<<endl;*/
	for(int i=0;i<=max;i++)
	{
		if(connect[i] == 0)
		{
			if(i==0 && hight[i] != 0)
			{
				cout<<i+1<<" "<<hight[i]<<" ";
			}
			else
			{
				if(conva[i] < hight[i-1])
				{
					cout<<i<<" "<<conva[i]<<" ";
					if(hight[i] != conva[i])
					{
						cout<<i+1<<" "<<hight[i]<<" ";
					}
				}
				else if(conva[i] > hight[i-1])
				{
					cout<<i+1<<" "<<hight[i]<<" ";
				}
				else if(conva[i] != hight[i])
				{
					cout<<i+1<<" "<<hight[i]<<" ";
				}
			}
		}
		else if(connect[i] == 1)
		{
			if(conva[i] != hight[i])
			{
				if(conva[i] != hight[i-1])
				{
					cout<<i<<" "<<conva[i]<<" ";
				}
				cout<<i+1<<" "<<hight[i]<<" ";
				
			}
			else
			{
				if(hight[i] != hight[i-1])
				{
					if(hight[i] < hight[i-1])
					{
						cout<<i<<" "<<hight[i]<<" ";
					}
				}
			}
		}
	}
}
