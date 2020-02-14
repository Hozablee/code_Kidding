#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;


int main()
{
	vector<int> hpday;
	int data,n,happyday;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>data;
		hpday.push_back(data);
	}
	
	for(int i=0;i<hpday.size();i++)
	{
		if(i == 0)
		{
			if(hpday[i] >= 80)
			{
				happyday++;
			}
		}
		else
		{
			if(hpday[i] >= 80)
			{
				happyday++;
			}
			else if(hpday[i] >= 20)
			{
				if(hpday[i]-hpday[i-1] >= 10)
				{
					happyday++;
				}
			}
		}
	}
	cout<<happyday;
	
}
