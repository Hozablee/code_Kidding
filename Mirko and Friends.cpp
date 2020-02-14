#include <stdio.h>
#include <iostream>
#include <stack>
using namespace std;

int main()
{
	stack<int> satac;
	long int r,g,min,max,wow,now;
	cin>>r;
	cin>>g;
	if(r <= g)
	{
		max=g;
		min=r;
		wow=1;
		
	}
	else
	{
		max=r;
		min=g;
		wow=2;
	}
	for(int i=1;i<=min;i++)
	{
		
		if( r%i==0 && g%i==0)
		{
			if(i == r/i || i == g/i)
			{
				cout<<i<<" "<<r/i<<" "<<g/i<<endl;
			}
			
			if(i >= r/i || i >= g/i)
			{
					break;
			}
			cout<<i<<" "<<r/i<<" "<<g/i<<endl;
			if(wow == 1)
			{
				satac.push(r/i);
			}
			else
			{
				satac.push(g/i);
			}
		}
	}
	
	while(!satac.empty())
	{
		now=satac.top();
		satac.pop();
		if(now == r/now || now == g/now)
		{
			//don,t do
		}
		else if( r%now==0 && g%now==0 && now != 1)
		{
			cout<<now<<" "<<r/now<<" "<<g/now<<endl;
		}
	}
}
