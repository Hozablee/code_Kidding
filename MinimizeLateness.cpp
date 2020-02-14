#include <iostream>
#include <stdio.h>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

bool placment( pair<int, int> p1, pair<int, int> p2)
{

        return (p1.second < p2.second);
}

int ML(int b,int r,int ball)
{
	
}

int main()
{
	int n,one,two,L=0,sumtime=0,bL=0;
	vector < pair<int,int> > vec;
	pair<int,int> san;
	
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>one;
		cin>>two;
		
		san.first=one;
		san.second=two;
		vec.push_back(san);
	}
	 sort(vec.begin(), vec.end(), placment);
	 
	for(int i=0;i<n;i++)
	{
		sumtime+=vec[i].first;
		bL=sumtime-vec[i].second;
		if(bL > L)
		{
			L=bL;
		}
	}
	cout<<L;
}

