#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;



int main()
{
	int data,check=2;
	cin>>data;
	while(data != 1)
	{
		while(1)
		{
			if(data%check == 0)
			{
				data=data/check;
				cout<<check<<endl;
				check=2;
				break;
			}
			check++;
		}
	}
	cout<<0;
}

