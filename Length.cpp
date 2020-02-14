#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;



int main()
{
	int count,data;
	int set1[4],set2[4],set3[4];
	int setlengt[4]={0,1760,3,12};
	cin>>count;
	while(count !=0)
	{
		for(int i=0;i<=3;i++)
		{
			cin>>data;
			set1[i]=data;
		}
		for(int i=0;i<=3;i++)
		{
			cin>>data;
			set2[i]=data;
		}
		for(int i=3;i>=0;i--)
		{
			if(set1[i] <= set2[i])
			{
				set3[i] = set2[i] - set1[i];
			}
			else if(set2[i] <= set1[i])
			{
				set3[i] = set2[i]+(setlengt[i]-set1[i]);
				set1[i-1]++;
			}
		}
		for(int i=0;i<=3;i++)
		{
			if(i == 3)
			{
				if(count == 1)
				{
					cout<<set3[i];
				}
				else
				{
					cout<<set3[i]<<endl;
				}
			}
			else
			{
				cout<<set3[i]<<" ";
			}
		}
		count--;
	}
}

