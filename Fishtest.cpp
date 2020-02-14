#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;
float fsize[6],eated[6],cap[6];
float fsize2[6],eated2[6],cap2[6];
void eatfish(int a,int n)
{
	for(int x=0;x<n;x++)
		{
			
			if(fsize[a] > fsize[x] && eated[x] == 0)
			{
				if(fsize[x]+cap[a] <= fsize[a]/2)
				{
					eatfish(x,n);
					eated[x]=1;
					cap[a]+=fsize[x];
				}
			}
		}
}

void eatfish2(int a,int n)
{
	for(int x=0;x<n;x++)
		{
			if(fsize2[a] > fsize2[x] && eated2[x] == 0)
			{
				if(fsize2[x]+cap2[a] <= fsize2[a]/2)
				{
					eatfish2(x,n);
					eated2[x]=1;
					cap2[a]+=fsize2[x];
				}
			}
		}
}

int main()
{
	int n,change,test=-700;
	float min,data;
	cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>data;
			//cout<<data<<" ";
			//cin>>data;
			cap[i]=0;
			eated[i]=0;
			fsize[i]=data;
			cap2[i]=0;
			eated2[i]=0;
			fsize2[i]=data;
			
			if(i==n-1)
			{
				for(int i=0;i<n;i++)
				{
					min = fsize[i];
					change=i;
					for(int x=i;x<n;x++)
					{
						if(fsize[x] > min)
						{
							min=fsize[x];
							change=x;
						}
					}
					fsize[change]=fsize[i];
					fsize[i]=min;		
				}
				
				for(int i=0;i<n;i++)
				{
					min = fsize2[i];
					change=i;
					for(int x=i;x<n;x++)
					{
						if(fsize2[x] < min)
						{
							min=fsize2[x];
							change=x;
						}
					}
					fsize2[change]=fsize2[i];
					fsize2[i]=min;		
				}
				
				for(int i=0;i<n;i++)
				{
					eatfish(i,n);
					eatfish2(i,n);
				}
				
				int sum=0;
				int sum2=0;
				for(int i=0;i<n;i++)
				{
					if(eated[i] == 0)
					{
						sum++;
					}
					if(eated2[i] == 0)
					{
						sum2++;
					}
					
				}
				if(sum <= sum2)
				{
					cout<<sum;
				}
				else
				{
					cout<<sum2;
				}
			}
			
		}
}
