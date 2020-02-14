#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

int main()
{
	string data;
	int k,n=0,s=0,e=0,w=0;
	cin>>data;
	cin>>k;
	int x,y,answer;
	x=0;
	y=0;
	
	for(int i=0;i<data.size();i++)
	{
		if(data[i] == 'N')
		{
			n++;
		}
		else if(data[i] == 'S')
		{
			s++;
		}
		else if(data[i] == 'E')
		{
			e++;
		}
		else if(data[i] == 'W')
		{
			w++;
		}
	}
	
	//cout<<x<<" "<<y<<endl;
	
	if(n >= s)
	{
		while(1)
		{
			if(k == 0 or s == 0)
			{
				break;
			}
			s--;
			k--;
		}
	}
	else if(s >= n)
	{
		while(1)
		{
			if(k == 0 or n == 0)
			{
				break;
			}
			n--;
			k--;
		}
	}
	
	if(e >= w)
	{
		while(1)
		{
			if(k == 0 or s == w)
			{
				break;
			}
			w--;
			k--;
		}
	}
	else if(w >= e)
	{
		while(1)
		{
			if(k == 0 or n == e)
			{
				break;
			}
			e--;
			k--;
		}
	}
	
	if( k != 0)
	{
		if( n > 0)
		{
			while(1)
			{
				if(k == 0 or n == 0)
				{
					break;
				}
				n--;
				k--;
			}
		}
		if( s > 0)
		{
			while(1)
			{
				if(k == 0 or s == 0)
				{
					break;
				}
				s--;
				k--;
			}
		}
		if( e > 0)
		{
			while(1)
			{
				if(k == 0 or e == 0)
				{
					break;
				}
				e--;
				k--;
			}
		}
		if( w > 0)
		{
			while(1)
			{
				if(k == 0 or w == 0)
				{
					break;
				}
				w--;
				k--;
			}
		}
	}
	
	while(n != 0)
	{
		n--;
		y++;		
	}
	while(s != 0)
	{
		s--;
		y--;		
	}
	while(e != 0)
	{
		e--;
		x++;		
	}
	while(w != 0)
	{
		w--;
		x--;		
	}
	
	if(x < 0)
	{
		x=-x;
	}
	if(y < 0)
	{
		y=-y;
	}	
	
	answer=x+y;
	
	cout<<answer*2;
}

