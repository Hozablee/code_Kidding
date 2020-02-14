#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

int main()
{
	string data;
	cin>>data;
	int x,y;
	x=0;
	y=0;
	
	for(int i=0;i<data.size();i++)
	{
		if(data[i] == 'N')
		{
			y++;
		}
		else if(data[i] == 'S')
		{
			y--;
		}
		else if(data[i] == 'E')
		{
			x++;
		}
		else if(data[i] == 'W')
		{
			x--;
		}
		else if(data[i] == 'Z')
		{
			x=0;
			y=0;
		}
	}
	
	cout<<x<<" "<<y;
		
}

