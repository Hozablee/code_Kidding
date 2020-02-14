#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;



int main()
{
	int set[10001],count,i=0,answer,time,max=0,data;
	cin>>count;
	while(i<count)
	{
		cin>>data;
		if(data>max)
		{
			max=data;
		}
		set[i]=data;
		i++;
	}
	for(int a=1;a<=max/2;a++)
	{
		time=0;
		for(int b=0;b<count;b++)
		{
			if((set[b]%a) ==0 )
			{
				time++;
			}
			if(time == count)
			{
				answer=a;
			}
		}
	}
	cout<<answer;
}

