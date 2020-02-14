#include <stdio.h>
#include <iostream>
#include <list>
using namespace std;

int hight=0;
int inhight=1001;
list<int> station[1000];

void finddown(int hi,int li)
{
	int c;
	if(hi > hight)
	{
		hight = hi;
		inhight=li;
	}
	else if(hi == hight)
	{
		if(li < inhight)
		{
			inhight = li;
		}
	}
	
	for(list<int>::iterator x = station[li].begin(); x != station[li].end(); x++)
	{
		c=*x;
		finddown(hi+1,c);
	}
}


int main()
{
	int base,one,two;
	cin>>base;
	
	while(1)
	{
		cin>>one;
		cin>>two;
		
		if(one == -1 && two == -1)
		{
			break;
		}
		station[one].push_back(two);
	}
	finddown(0,base);
	cout<<inhight;
}
