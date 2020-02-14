#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;
int answer;




int small(int n)
{
	int div=n/6;
	int now,can;
	now=n-(6*div);
	answer += 30*div;
	return now;
}

int mid(int n)
{
	int div=n/9;
	int now,can;
	int foranswer=answer;
	for(int i=div;i>=0;i--)
	{
		answer = foranswer;
		now=n-(9*i);
		answer += 40*i;
		can=small(now);
		if(can == 0)
		{
			break;
		}
	}
	return can;
}

int big(int n)
{
	int div=n/20;
	int now,can;
	for(int i=div;i>=0;i--)
	{
		answer =0;
		now=n-(20*i);
		answer += 60*i;
		can=mid(now);
		if(can == 0)
		{
			break;
		}
	}
	return can;
}


int main()
{
	int n;
	int div;
	cin>>n;
	if(big(n) == 0)
	{
		cout<<answer;
	}
	else
	{
		cout<<"NONE!!";
	}
	
	
	
}
