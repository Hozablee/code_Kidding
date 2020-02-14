#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int carry=0,a,b;
	int forone,fortwo,all;
	char tostring;
	string one;
	string two;
	string answer;
	cin>>one;
	cin>>two;
	
	a=one.size()-1;
	b=two.size()-1;
	
	while(a !=-1 && b !=-1)
	{
		forone=one[a]-48;
		fortwo=two[b]-48;
		
		all=forone+fortwo+carry;
		carry=0;
		if(all > 9)
		{
			carry=1;
			all=all%10;
		}
		tostring = all+48;
		answer=tostring+answer;
		a--;
		b--;
	}
	
	while(a != -1)
	{
		if(carry==1)
		{
			one[a]++;
			carry=0;
			if(one[a] == ':')
			{
				one[a]='0';
				carry=1;
			}
		}
		answer=one[a]+answer;
		a--;
	}
	while(b != -1)
	{
		if(carry==1)
		{
			two[b]++;
			carry=0;
			if(two[b] == ':')
			{
				two[b]='0';
				carry=1;
			}
		}
		answer=two[b]+answer;
		b--;
	}
	
	
	if(carry == 1)
	{
		answer='1'+answer;
		carry=0;
	}
	cout<<answer;

	

}
