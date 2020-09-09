#include<iostream>
#include<vector>
#include<utility>    
#include<algorithm>
#include<string>
using namespace std;
int main()
{
	int n,count=2;
	cin>>n;
	//n=(n*2)+1;
	char arr[n+1][n+1];
	int max=2*n+1,copy=max;
	for(int i=0;i<n;i++)
	{
		for(int k=0;k<i;k++)
		{
			cout<<" ";
		}
		for(int j=i;j<max;j++)
		{
			if(j==i || j==max-1)
			{
				cout<<"*";
			}
			else
			{
				cout<<" ";
			}			
		}
		cout<<endl;
		max--;
		//cout<<" ";
	}
	for(int i=0;i<copy;i++)
	{
		cout<<"*";
	}
	cout<<endl;
	//max = copy;
	for(int i=0;i<n;i++)
	{
		for(int j=n-1;j>i;j--)
		{
			cout<<" ";
		}
		cout<<"*";
		for(int j=n-i;j<n;j++)
		{
			cout<<" ";
		}
		//cout<<"max : "<<max<<endl;
		max = 0;
		for(int l=n-i;l<=n;l++)
		{
			cout<<" ";
		}
		max++;
		cout<<"*";
		cout<<endl;
		
	}

}
