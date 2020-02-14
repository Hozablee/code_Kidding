#include <stdio.h>
#include <iostream>
#include <list>
using namespace std;

int main()
{
	int n,from,to,hi,max=0,from2,to2;
	cin>>n;
	int hight[256],head[256],tail[256],hort[256];
	for(int i=0;i<256;i++)
	{
		hight[i] =0;
		tail[i]=0;
		head[i]=0;
		hort[i]=0;
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
					hort[x]=1;
				}
				else if(hort[x] == 2)
				{
					if(hi > tail[x])
					{
						tail[x]=hi;
					}
				}
			}
			else if(x==to)
			{
				if(hi > hight[x])
				{
					hight[x]=hi;
					hort[x]=2;
				}
				else if(hort[x] == 1)
				{
					if(hi > tail[x])
					{
						tail[x]=hi;
					}
				}
			}
			else
			{
				if(hi > hight[x])
				{
					hight[x]=hi;
					hort[x]=0;
					tail[x]=hi;
				}
				else if(hi < hight[x])
				{
					if(hort[x] == 1 || hort[x] == 2)
					{
						if(hi > tail[x])
						{
							tail[x]=hi;
						}
					}
				}
			}	
		}
	}
	
	for(int i=0;i<max;i++)
	{
		if(hight[i] > tail[i])
		{
			if(hort[i] == 1)
			{
				cout<<i+1<<" "<<hight[i]<<" ";
			}
			else if(hort[i] == 2)
			{
				cout<<i+1<<" "<<tail[i]<<" ";
			}
		}
	}
}
