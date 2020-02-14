#include <stdio.h>
#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
	string data;
	string one,two,all;
	stack<string> sat;
	cin>>data;
	int stage =0;
	for(int i=data.size()-1;i>=0;i--)
	{
		if(data[i] == '+')
		{
			one=sat.top();
			sat.pop();
			two=sat.top();
			sat.pop();
			all=one+data[i]+two;
			sat.push(all);
		}
		else if(data[i] == '*')
		{
			one=sat.top();
			sat.pop();
			two=sat.top();
			sat.pop();
			stage=0;
			for(int x=0;x<one.size();x++)
			{
				if(one[x] == '(')
				{
					stage++;
				}
				else if(one[x] == ')')
				{
					stage--;
				}
				else if(one[x] == '+' && stage == 0)
				{
					one='('+one+')';
					break;
				}
			}
			stage=0;
			for(int x=0;x<two.size();x++)
			{
				if(two[x] == '(')
				{
					stage++;
				}
				else if(two[x] == ')')
				{
					stage--;
				}
				else if(two[x] == '+' && stage == 0)
				{
					two='('+two+')';
					break;
				}
			}
			all=one+data[i]+two;
			sat.push(all);
		}
		else
		{
			all=data[i];
			sat.push(all);
		}
	}
	cout<<sat.top();
	
}
