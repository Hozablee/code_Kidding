#include <iostream>
#include <stdio.h>

using namespace std;


int main()
{
	int n,answer=0,stage;
	int data;
	while(1)
	{
		cin>>n;
		if(n == 0)
		{
			break;
		}
		answer=0;
		while( n != 0)
		{
			for(int i=2;i<=n/2;i++)
			{
				if(n % i == 0 || n == 1 )
				{
					stage=1;
					break;
				}
				else
				{
					stage=0;
				}
			}
			if(n == 1)
			{
				stage=1;
			}
			else if( n == 2)
			{
				stage=0;
			}
			if(stage == 1)
			{
				n--;
			}
			else if(stage == 0)
			{
				answer++;
				n=n-2;
			}
		}
		cout<<answer<<endl;
		
	}
	
	
}

