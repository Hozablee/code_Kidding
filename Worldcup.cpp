#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	string team[4];
	int score[4][4],shoot[4],lose[4],point[4],win[4];
	int data,forwin;
	string name;
	
	
	for(int i=0;i < 4;i++)
	{
		cin>>name;
		team[i]=name;
		point[i]=0;
		shoot[i]=0;
		lose[i]=0;
		win[i]=-1;
	}
	for(int i=0;i < 4;i++)
	{
		for(int j=0;j < 4;j++)
		{
			cin>>data;
			score[i][j]=data;
		}
	}
	
	
	for(int i=0;i < 4;i++)
	{
		for(int j=0;j < 4;j++)
		{
			if(i != j)
			{
				shoot[i]+=score[i][j];
				lose[j]+=score[i][j];
			}
		}
	}
	
	for(int i=0;i < 4;i++)
	{
		for(int j=i+1;j < 4;j++)
		{
			if(i != j)
			{
				if(score[i][j] > score[j][i])
				{
					point[i]+=3;
				}
				else if(score[i][j] < score[j][i])
				{
					point[j]+=3;
				}
				else if(score[i][j] == score[j][i])
				{
					point[i]++;
					point[j]++;
				}
			}
		}
	}
	
	for(int i=0;i < 4;i++)
	{
		forwin=0;
		for(int j=0;j < 4;j++)
		{
			if( i != j)
			{
				if(point[i] > point[j])
				{
					forwin++;
				}
				else if(point[i] == point[j])
				{
					if((shoot[i]-lose[i]) > (shoot[j]-lose[j]))
					{
						forwin++;
					}
					else if((shoot[i]-lose[i]) == (shoot[j]-lose[j]))
					{
						if(shoot[i] > shoot[j])
						{
							forwin++;
						}
					}
				}
			}
		}
		win[forwin]=i;
	}
	for(int i=3;i >=0;i--)
	{
		cout<<team[win[i]]<<" "<<point[win[i]]<<endl;
	}
			
}
