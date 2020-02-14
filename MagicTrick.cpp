#include <stdio.h>
#include <iostream>

using namespace std;


int main()
{
	int card[3][3];
	int inans[3];
	int answer=0,row=0;
	int data;
	int n=0,can=0;
	
	for(int i=0;i<3;i++)
	{
		inans[i]=0;
	}
	while(1)
	{
		cin>>row;
		for(int i=0;i<3;i++)
		{
			for(int x=0;x<3;x++)
			{
				cin>>data;
				card[i][x]=data;
			}	
		}
		n++;
		if(n == 2)
		{
			break;
		}
		for(int i=0;i<3;i++)
		{
			inans[i]=card[row-1][i];
		}
	}
	
	for(int i=0;i<3;i++)
		{
			for(int x=0;x<3;x++)
			{
				if(inans[i] == card[row-1][x])
				{
					answer = inans[i];
					can++;
				}
			}	
		}
	if(can == 1)
	{
		cout<<answer;	
	}
	else
	{
		cout<<"Can't";
	}
	
	
}
