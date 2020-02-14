#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;



int main()
{
	int n,count=0,data,equal=0,sum;
	int square[10][10];
	int check=1;
	cin>>n;
	while(count < n)
	{
		for(int i=0;i<n;i++)
		{
			cin>>data;
			square[count][i]=data;;
			if(count == 0)
			{
				equal=equal+data;
			}
		}
		count++;
	}
	for(int i=0;i<n;i++)
	{
		sum=0;
		for(int x=0;x<n;x++)
		{
			sum=sum+square[i][x];
		}
		if(sum == equal)
		{
			check =1;
		}
		else
		{
			check =0;
			break;
		}
	}
	if(check == 1)
	{
		
		for(int i=0;i<n;i++)
		{
			sum=0;
			for(int x=0;x<n;x++)
			{
				sum=sum+square[x][i];
			}
			if(sum == equal)
			{
				check =1;
			}
			else
			{
				check =0;
				break;
			}
		}
	}
	if(check == 1)
	{
		sum=0;
		for(int i=0;i<n;i++)
		{
				sum=sum+square[i][i];
		}
			if(sum == equal)
			{
				check =1;
			}
			else
			{
				check =0;
			}
	}
	if(check == 1)
	{
		sum=0;
		for(int i=0;i<n;i++)
		{
				sum=sum+square[n-1-i][i];
		}
			if(sum == equal)
			{
				check =1;
			}
			else
			{
				check =0;
			}
	}
		if(check==1)
		{
			cout<<"Yes";
		}
		else
		{
			cout<<"No";
		}
		
}

