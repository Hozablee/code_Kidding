#include <iostream>
#include <stdio.h>
#include <math.h>


using namespace std;


int main()
{
	long int n,degree;
	cin>>n;
	long int data[n][n],copydata[n][n],indata,check=0;
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>indata;
			data[i][j] = indata;
		}
	}
	cin>>degree;
	if(degree > 360)
	{
		degree = degree % 360;
	}
	
	if(degree == 90)
	{
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				copydata[i][j] = data[n-1-j][i];
			}
		}
	}
	else if(degree == 180 )
	{
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				copydata[n-1-i][n-1-j] = data[i][j];
			}
		}
	}
	else if(degree == 270)
	{
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				copydata[i][j] = data[j][n-1-i];
			}
		}
	}
	else if(degree == 0 or degree == 360)
	{
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				copydata[i][j] = data[i][j];
			}
		}
	}
	else
	{
		check =1;
	}
	
	if(n == 1)
	{
		cout<<data[0][0];
	}
	else if(check == 0)
	{
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cout<<copydata[i][j]<<" ";
			}
			cout<<endl;
		}
	}
	else if(check == 1)
	{
		cout<<"No output";
	}

	
}

