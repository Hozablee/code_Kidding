#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;
int n;
char b;

string b_ary(string ha,int posi,char data)
{
	ha[posi]=data;
	
	for(int i=n-1;i>posi;i--)
	{
		ha[i]='0';
	}
	if(posi+1 < n)
	{
		ha=b_ary(ha,posi+1,'0');
	}
	data++;
	if( data != b)
	{
		cout<<ha<<endl;
		ha=b_ary(ha,posi,data);
	}
	return ha;
}

int main()
{
	cin>>n;
	cin>>b;
	char c='0';
	string haha;
	for(int i=0;i<n;i++)
	{
		haha+='0';
	}
	haha=b_ary(haha,0,c);
	cout<<haha;
}
