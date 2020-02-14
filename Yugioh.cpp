#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;



int main()
{
	int data,alldata[6],x=0,count=0,win,lose;
	while(1)
	{
		while(1)
		{
			cin>>data;
			alldata[x]=data;
			x++;
			if(x == 6)
			{
				for(int i=0;i<x;i++)
				{
					if(alldata[i] == 0)
					{
						count++;
					}
					else
					{
						break;
					}
				}
				x=0;
				break;
			}
		}
		if(count==6)
			{
				break;
			}
			else
			{
				if(alldata[0] >= alldata[3])
				{
					alldata[0] = alldata[0]-alldata[3];
					alldata[3] = 0;
				}
				else if(alldata[0] <= alldata[3])
				{
					alldata[3] = alldata[3]-alldata[0];
					alldata[0] = 0;
				}

				if(alldata[0] >= alldata[5])
				{
					alldata[0] = alldata[0]-alldata[5];
					alldata[5] = 0;
				}
				else if(alldata[0] <= alldata[5])
				{
					alldata[5] = alldata[5]-alldata[0];
					alldata[0] = 0;
				}
				if(alldata[0] != 0)
				{
					win = 0;
				}
				else
				{
					win = alldata[3]+alldata[5];
				}
				
				if(alldata[1] >= alldata[2])
				{
					alldata[1] = alldata[1]-alldata[2];
					alldata[2] = 0;
				}
				else if(alldata[1] <= alldata[2])
				{
					alldata[2] = alldata[2]-alldata[1];
					alldata[1] = 0;
				}
				
				if(alldata[1] >= alldata[4])
				{
					alldata[1] = alldata[1]-alldata[4];
					alldata[4] = 0;
				}
				else if(alldata[1] <= alldata[4])
				{
					alldata[4] = alldata[4]-alldata[1];
					alldata[1] = 0;
				}
				if(alldata[1] != 0)
				{
					lose = 0;
				}
				else
				{
					lose = alldata[2]+alldata[4];
				}
				cout<<"Anna's won-loss record is "<<win<<"-"<<lose<<"."<<endl;
				count =0;
			}
	}
}

